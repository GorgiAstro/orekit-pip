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
          mid_init$_aa952c80edca6122,
          mid_getD_613c8f46c659f636,
          mid_getDDot_613c8f46c659f636,
          mid_getDate_f1fe4daf77c66560,
          mid_getF_613c8f46c659f636,
          mid_getFDot_613c8f46c659f636,
          mid_getGamma_613c8f46c659f636,
          mid_getGammaDot_613c8f46c659f636,
          mid_getL_613c8f46c659f636,
          mid_getLDot_613c8f46c659f636,
          mid_getLPrime_613c8f46c659f636,
          mid_getLPrimeDot_613c8f46c659f636,
          mid_getOmega_613c8f46c659f636,
          mid_getOmegaDot_613c8f46c659f636,
          mid_getTC_613c8f46c659f636,
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
