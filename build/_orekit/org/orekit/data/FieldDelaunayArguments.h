#ifndef org_orekit_data_FieldDelaunayArguments_H
#define org_orekit_data_FieldDelaunayArguments_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeStamped;
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

      class FieldDelaunayArguments : public ::java::lang::Object {
       public:
        enum {
          mid_init$_d6694262f79a2a57,
          mid_getD_eba8e72a22c984ac,
          mid_getDDot_eba8e72a22c984ac,
          mid_getDate_51da00d5b8a3b5df,
          mid_getF_eba8e72a22c984ac,
          mid_getFDot_eba8e72a22c984ac,
          mid_getGamma_eba8e72a22c984ac,
          mid_getGammaDot_eba8e72a22c984ac,
          mid_getL_eba8e72a22c984ac,
          mid_getLDot_eba8e72a22c984ac,
          mid_getLPrime_eba8e72a22c984ac,
          mid_getLPrimeDot_eba8e72a22c984ac,
          mid_getOmega_eba8e72a22c984ac,
          mid_getOmegaDot_eba8e72a22c984ac,
          mid_getTC_eba8e72a22c984ac,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldDelaunayArguments(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldDelaunayArguments(const FieldDelaunayArguments& obj) : ::java::lang::Object(obj) {}

        FieldDelaunayArguments(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);

        ::org::hipparchus::CalculusFieldElement getD() const;
        ::org::hipparchus::CalculusFieldElement getDDot() const;
        ::org::orekit::time::FieldAbsoluteDate getDate() const;
        ::org::hipparchus::CalculusFieldElement getF() const;
        ::org::hipparchus::CalculusFieldElement getFDot() const;
        ::org::hipparchus::CalculusFieldElement getGamma() const;
        ::org::hipparchus::CalculusFieldElement getGammaDot() const;
        ::org::hipparchus::CalculusFieldElement getL() const;
        ::org::hipparchus::CalculusFieldElement getLDot() const;
        ::org::hipparchus::CalculusFieldElement getLPrime() const;
        ::org::hipparchus::CalculusFieldElement getLPrimeDot() const;
        ::org::hipparchus::CalculusFieldElement getOmega() const;
        ::org::hipparchus::CalculusFieldElement getOmegaDot() const;
        ::org::hipparchus::CalculusFieldElement getTC() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(FieldDelaunayArguments);
      extern PyTypeObject *PY_TYPE(FieldDelaunayArguments);

      class t_FieldDelaunayArguments {
      public:
        PyObject_HEAD
        FieldDelaunayArguments object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldDelaunayArguments *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldDelaunayArguments&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldDelaunayArguments&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
