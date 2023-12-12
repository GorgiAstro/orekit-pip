#ifndef org_orekit_data_FieldBodiesElements_H
#define org_orekit_data_FieldBodiesElements_H

#include "org/orekit/data/FieldDelaunayArguments.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class FieldBodiesElements : public ::org::orekit::data::FieldDelaunayArguments {
       public:
        enum {
          mid_init$_e15296bba89d8c64,
          mid_getLE_613c8f46c659f636,
          mid_getLEDot_613c8f46c659f636,
          mid_getLJu_613c8f46c659f636,
          mid_getLJuDot_613c8f46c659f636,
          mid_getLMa_613c8f46c659f636,
          mid_getLMaDot_613c8f46c659f636,
          mid_getLMe_613c8f46c659f636,
          mid_getLMeDot_613c8f46c659f636,
          mid_getLNe_613c8f46c659f636,
          mid_getLNeDot_613c8f46c659f636,
          mid_getLSa_613c8f46c659f636,
          mid_getLSaDot_613c8f46c659f636,
          mid_getLUr_613c8f46c659f636,
          mid_getLUrDot_613c8f46c659f636,
          mid_getLVe_613c8f46c659f636,
          mid_getLVeDot_613c8f46c659f636,
          mid_getPa_613c8f46c659f636,
          mid_getPaDot_613c8f46c659f636,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldBodiesElements(jobject obj) : ::org::orekit::data::FieldDelaunayArguments(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldBodiesElements(const FieldBodiesElements& obj) : ::org::orekit::data::FieldDelaunayArguments(obj) {}

        FieldBodiesElements(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);

        ::org::hipparchus::CalculusFieldElement getLE() const;
        ::org::hipparchus::CalculusFieldElement getLEDot() const;
        ::org::hipparchus::CalculusFieldElement getLJu() const;
        ::org::hipparchus::CalculusFieldElement getLJuDot() const;
        ::org::hipparchus::CalculusFieldElement getLMa() const;
        ::org::hipparchus::CalculusFieldElement getLMaDot() const;
        ::org::hipparchus::CalculusFieldElement getLMe() const;
        ::org::hipparchus::CalculusFieldElement getLMeDot() const;
        ::org::hipparchus::CalculusFieldElement getLNe() const;
        ::org::hipparchus::CalculusFieldElement getLNeDot() const;
        ::org::hipparchus::CalculusFieldElement getLSa() const;
        ::org::hipparchus::CalculusFieldElement getLSaDot() const;
        ::org::hipparchus::CalculusFieldElement getLUr() const;
        ::org::hipparchus::CalculusFieldElement getLUrDot() const;
        ::org::hipparchus::CalculusFieldElement getLVe() const;
        ::org::hipparchus::CalculusFieldElement getLVeDot() const;
        ::org::hipparchus::CalculusFieldElement getPa() const;
        ::org::hipparchus::CalculusFieldElement getPaDot() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(FieldBodiesElements);
      extern PyTypeObject *PY_TYPE(FieldBodiesElements);

      class t_FieldBodiesElements {
      public:
        PyObject_HEAD
        FieldBodiesElements object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldBodiesElements *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldBodiesElements&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldBodiesElements&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
