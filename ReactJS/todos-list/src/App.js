import "./App.css";
import Header from "./MyComponents/Header";
import { Todos } from "./MyComponents/Todos";
import { Footer } from "./MyComponents/Footer";

function App() {
  const onDelete = (todo) => {
    console.log("I am onDelete.");
  };
  let todos = [
    {
      SNo: 1,
      title: "Go to the market",
      desc: "Buy groceries",
    },
    {
      SNo: 2,
      title: "Go to the market",
      desc: "Buy groceries",
    },
    {
      SNo: 3,
      title: "Go to the market",
      desc: "Buy groceries",
    },
  ];
  return (
    <>
      <Header title="My Todos List" />
      <Todos todos={todos} onDelete={onDelete} />
      <Footer />
    </>
  );
}

export default App;
