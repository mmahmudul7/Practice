import "./App.css";
import NameList from "./components/16-list-keys/NameListIndex";
import ProductList from "./components/16-list-keys/ProductList";
import UserList from "./components/16-list-keys/UserListID";

function App() {
  return (
    <div>
      <ProductList />
      <UserList />
      <NameList />
    </div>
  );
}

export default App;
