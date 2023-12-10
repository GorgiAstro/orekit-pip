#ifndef org_orekit_data_FieldBodiesElements_H
#define org_orekit_data_FieldBodiesElements_H

#include "org/orekit/data/FieldDelaunayArguments.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
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
          mid_init$_563f70b712ba8f2a,
          mid_getLE_e6d4d3215c30992a,
          mid_getLEDot_e6d4d3215c30992a,
          mid_getLJu_e6d4d3215c30992a,
          mid_getLJuDot_e6d4d3215c30992a,
          mid_getLMa_e6d4d3215c30992a,
          mid_getLMaDot_e6d4d3215c30992a,
          mid_getLMe_e6d4d3215c30992a,
          mid_getLMeDot_e6d4d3215c30992a,
          mid_getLNe_e6d4d3215c30992a,
          mid_getLNeDot_e6d4d3215c30992a,
          mid_getLSa_e6d4d3215c30992a,
          mid_getLSaDot_e6d4d3215c30992a,
          mid_getLUr_e6d4d3215c30992a,
          mid_getLUrDot_e6d4d3215c30992a,
          mid_getLVe_e6d4d3215c30992a,
          mid_getLVeDot_e6d4d3215c30992a,
          mid_getPa_e6d4d3215c30992a,
          mid_getPaDot_e6d4d3215c30992a,
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
