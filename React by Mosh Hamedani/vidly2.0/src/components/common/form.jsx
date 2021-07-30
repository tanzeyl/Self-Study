import React, { Component } from 'react'
import Joi from "joi-browser"
import Input from "./input"

class Form extends Component {
  state = {
    data: {},
    error: {}
  }

  validate = () => {
    const { error } = Joi.validate(this.state.data, this.schema, {
      abortEarly: false,
    });
    if (!error) return null;
    const errors = {};
    for (let item of error.details) errors[item.path[0]] = item.message;
    return errors;
  };

  validateProperty = ({ name, value }) => {
    const obj = { [name]: value };
    const schema = { [name]: this.schema[name] };
    const error = Joi.validate(obj, schema);
    if (error) return null;
    return error.details[0].message;
  };

  handleSubmit = (e) => {
    e.preventDefault();
    const errors = this.validate();
    this.setState({ errors: errors || {} });
    if (errors) return;
    this.doSubmit()
  };

  handleChange = ({ currentTarget: input }) => {
    const errors = { ...this.state.errors };
    const errorMessage = this.validateProperty(input);
    if (errorMessage) errors[input.name] = errorMessage;
    else delete errors[input.name];
    const data = { ...this.state.data };
    data[input.name] = input.value;
    this.setState({ data, errors });
  };

  renderButton(label) {
    return <button disabled={this.validate()} className="btn btn-primary m-2">
      {label}
    </button>
  }

  renderInput(name, label, type = "text") {
    return <Input
            type={type}
            name={name}
            value={this.state.data[name]}
            onChange={this.handleChange}
            label={label}
            error={this.state.errors[name]}
          />
  }
}

export default Form;
