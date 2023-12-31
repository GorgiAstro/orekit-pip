#ifndef org_hipparchus_special_Erf_H
#define org_hipparchus_special_Erf_H

#include "java/lang/Object.h"

namespace org {
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
  namespace hipparchus {
    namespace special {

      class Erf : public ::java::lang::Object {
       public:
        enum {
          mid_erf_04fd0666b613d2ab,
          mid_erf_6e00dc5eb352fe51,
          mid_erf_99e3200dafc19573,
          mid_erf_c6408fdce2cc6c1a,
          mid_erfInv_04fd0666b613d2ab,
          mid_erfInv_6e00dc5eb352fe51,
          mid_erfc_04fd0666b613d2ab,
          mid_erfc_6e00dc5eb352fe51,
          mid_erfcInv_04fd0666b613d2ab,
          mid_erfcInv_6e00dc5eb352fe51,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Erf(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Erf(const Erf& obj) : ::java::lang::Object(obj) {}

        static jdouble erf(jdouble);
        static ::org::hipparchus::CalculusFieldElement erf(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble erf(jdouble, jdouble);
        static ::org::hipparchus::CalculusFieldElement erf(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static jdouble erfInv(jdouble);
        static ::org::hipparchus::CalculusFieldElement erfInv(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble erfc(jdouble);
        static ::org::hipparchus::CalculusFieldElement erfc(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble erfcInv(jdouble);
        static ::org::hipparchus::CalculusFieldElement erfcInv(const ::org::hipparchus::CalculusFieldElement &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace special {
      extern PyType_Def PY_TYPE_DEF(Erf);
      extern PyTypeObject *PY_TYPE(Erf);

      class t_Erf {
      public:
        PyObject_HEAD
        Erf object;
        static PyObject *wrap_Object(const Erf&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
