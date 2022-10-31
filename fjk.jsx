import { useState } from "react";

const Comp = () => {
  const [state, setState] = useState();
  return <h1 onClick={setState}>import {state}</h1>;
};
export default Comp;
