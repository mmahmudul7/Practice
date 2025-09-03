import "./App.css";

import Condition from "./components/16-conditional-Rendering/Condition";
import Notification from "./components/16-conditional-Rendering/Notification";
import ProductList from "./components/16-conditional-Rendering/ProductList";
import TernaryOperator from "./components/16-conditional-Rendering/TernaryOperator";

function App() {
  return (
    <div>
      <Condition />
      <TernaryOperator />
      <Notification />
      <ProductList />
    </div>
  );
}

export default App;
