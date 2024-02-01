#ifndef org_orekit_data_FieldDelaunayArguments_H
#define org_orekit_data_FieldDelaunayArguments_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
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

      class FieldDelaunayArguments : public ::java::lang::Object {
       public:
        enum {
          mid_init$_6a30bb7ef52ef1c2,
          mid_getD_08d37e3f77b7239d,
          mid_getDDot_08d37e3f77b7239d,
          mid_getDate_1fea28374011eef5,
          mid_getF_08d37e3f77b7239d,
          mid_getFDot_08d37e3f77b7239d,
          mid_getGamma_08d37e3f77b7239d,
          mid_getGammaDot_08d37e3f77b7239d,
          mid_getL_08d37e3f77b7239d,
          mid_getLDot_08d37e3f77b7239d,
          mid_getLPrime_08d37e3f77b7239d,
          mid_getLPrimeDot_08d37e3f77b7239d,
          mid_getOmega_08d37e3f77b7239d,
          mid_getOmegaDot_08d37e3f77b7239d,
          mid_getTC_08d37e3f77b7239d,
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
