import WithoutDependency from "./components/15-useEffect-Hook/1-withoutDependency";
import EmptyDependencyArray from "./components/15-useEffect-Hook/2-EmptyDependencyArray";
import WithDependencyArray from "./components/15-useEffect-Hook/3-WithDependencyArray";
import ApiData from "./components/15-useEffect-Hook/ApiData";
import EffectTest from "./components/15-useEffect-Hook/EffectTest";
import ToggleTimer from "./components/15-useEffect-Hook/ToggleTimer";

function App() {
  return (
    <div>
      <WithoutDependency />
      <EmptyDependencyArray />
      <WithDependencyArray />
      <ToggleTimer />
      <ApiData />
      <EffectTest />
    </div>
  );
}

export default App;
