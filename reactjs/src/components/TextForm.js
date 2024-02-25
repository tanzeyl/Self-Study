import React, { useState } from "react";
import PropTypes from "prop-types";

export default function TextForm(props) {
  const handleUppercase = () => {
    if (text.length === 0)
      props.showAlert("Cannot convert an empty string.", "danger");
    else {
      setText(text.toUpperCase());
      props.showAlert("Text converted to upper-case", "info");
    }
  };

  const handleLowercase = () => {
    if (text.length === 0)
      props.showAlert("Cannot convert an empty string.", "danger");
    else {
      setText(text.toLowerCase());
      props.showAlert("Text converted to lower-case", "info");
    }
  };

  const clearText = () => {
    if (text.length === 0)
      props.showAlert("Text area is already empty.", "danger");
    else {
      setText("");
      setwordCount(0);
      props.showAlert("Text area is cleared", "info");
    }
  };

  const handleOnChange = (event) => {
    setText(event.target.value);
    setwordCount(text.trim().split(" ").length);
  };
  const [text, setText] = useState("");
  const [wordCount, setwordCount] = useState(0);
  return (
    <>
      <div className="container mt-4">
        <div className="mb-3">
          <label
            htmlFor="exampleFormControlTextarea1"
            className={`form-label ${
              props.mode === "light" ? "text-dark" : "text-light"
            }`}
          >
            {props.heading}
          </label>
          <textarea
            className="form-control"
            value={text}
            id="exampleFormControlTextarea1"
            onChange={handleOnChange}
            rows="3"
          ></textarea>
        </div>
        <button
          className={`btn btn-${
            props.mode === "light" ? "success" : "secondary"
          } mx-1`}
          onClick={handleUppercase}
        >
          Convert to uppercase
        </button>
        <button
          className={`btn btn-${
            props.mode === "light" ? "success" : "secondary"
          } mx-1`}
          onClick={handleLowercase}
        >
          Convert to lowercase
        </button>
        <button
          className={`btn btn-${
            props.mode === "light" ? "success" : "secondary"
          } mx-1`}
          onClick={clearText}
        >
          Clear Text
        </button>
      </div>
      <div
        className={`container ${
          props.mode === "light" ? "text-dark" : "text-light"
        }`}
      >
        <h1>Summary of your text:</h1>
        <p>{text.length} characters.</p>
        <p>{wordCount} words.</p>
        <p>Time required to read this text: {0.008 * wordCount} minutes.</p>
        <h2>Preview</h2>
        <p>{text.length > 0 ? text : "Entered text will be previewed here!"}</p>
      </div>
    </>
  );
}

TextForm.defaultProps = { heading: "Set heading" };
TextForm.propTypes = { heading: PropTypes.string.isRequired };
