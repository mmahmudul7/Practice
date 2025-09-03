import Greeting from "./components/14-react-basics/Greeting";
import CounterApp from "./components/14-react-basics/CounterApp";
import NameChangerApp from "./components/14-react-basics/NameChangerApp";
import ToggleMessageApp from "./components/14-react-basics/ToggleMessageApp";
import LiveInput from "./components/14-react-basics/LiveInput";

function App() {
  return (
    <div>
      <CounterApp />
      <Greeting />
      <NameChangerApp />
      <ToggleMessageApp />
      <LiveInput />
    </div>
  );
}

export default App;
