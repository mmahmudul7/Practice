document.getElementById("addCommentButton").addEventListener("click", (event) => {
    const commentInputField = document.getElementById("commentInput").value;
    
    const commentContainer = document.getElementById("commentsSection");

    const newComment = document.createElement("p");
    newComment.innerText = commentInputField;

    commentContainer.appendChild(newComment);

    document.getElementById("commentInput").value = "";
});