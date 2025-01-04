document.getElementById("addCommentButton").addEventListener("click", (event) => {
    const commentInputField = document.getElementById("commentInput").value;
    const commentContainer = document.getElementById("commentsSection");

    const newComment = document.createElement("p");
    newComment.classList.add("commentItem");
    newComment.innerText = commentInputField;

    commentContainer.appendChild(newComment);

    document.getElementById("commentInput").value = "";

    const allComments = document.getElementsByClassName("commentItem");

    for (const element of allComments) {
        element.addEventListener("click", (e) => {
            e.target.parentNode.removeChild(element);
        });
    }
});