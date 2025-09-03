import {useEffect, useState} from "react";

const ApiData = () => {
  const [post, setPost] = useState(null);

  useEffect(() => {
    fetch("https://jsonplaceholder.typicode.com/posts/1")
      .then((res) => res.json())
      .then((data) => setPost(data));
  }, []); // শুধু একবার চালাবে

  return (
    <div>
      <h2>Data from API:</h2>
      {post ? <p>{post.title}</p> : <p>লোড হচ্ছে...</p>}
    </div>
  );
};

export default ApiData;
