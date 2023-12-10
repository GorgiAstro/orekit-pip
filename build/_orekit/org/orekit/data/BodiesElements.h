#ifndef org_orekit_data_BodiesElements_H
#define org_orekit_data_BodiesElements_H

#include "org/orekit/data/DelaunayArguments.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class BodiesElements : public ::org::orekit::data::DelaunayArguments {
       public:
        enum {
          mid_init$_11c1af2a75beb746,
          mid_getLE_456d9a2f64d6b28d,
          mid_getLEDot_456d9a2f64d6b28d,
          mid_getLJu_456d9a2f64d6b28d,
          mid_getLJuDot_456d9a2f64d6b28d,
          mid_getLMa_456d9a2f64d6b28d,
          mid_getLMaDot_456d9a2f64d6b28d,
          mid_getLMe_456d9a2f64d6b28d,
          mid_getLMeDot_456d9a2f64d6b28d,
          mid_getLNe_456d9a2f64d6b28d,
          mid_getLNeDot_456d9a2f64d6b28d,
          mid_getLSa_456d9a2f64d6b28d,
          mid_getLSaDot_456d9a2f64d6b28d,
          mid_getLUr_456d9a2f64d6b28d,
          mid_getLUrDot_456d9a2f64d6b28d,
          mid_getLVe_456d9a2f64d6b28d,
          mid_getLVeDot_456d9a2f64d6b28d,
          mid_getPa_456d9a2f64d6b28d,
          mid_getPaDot_456d9a2f64d6b28d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BodiesElements(jobject obj) : ::org::orekit::data::DelaunayArguments(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BodiesElements(const BodiesElements& obj) : ::org::orekit::data::DelaunayArguments(obj) {}

        BodiesElements(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

        jdouble getLE() const;
        jdouble getLEDot() const;
        jdouble getLJu() const;
        jdouble getLJuDot() const;
        jdouble getLMa() const;
        jdouble getLMaDot() const;
        jdouble getLMe() const;
        jdouble getLMeDot() const;
        jdouble getLNe() const;
        jdouble getLNeDot() const;
        jdouble getLSa() const;
        jdouble getLSaDot() const;
        jdouble getLUr() const;
        jdouble getLUrDot() const;
        jdouble getLVe() const;
        jdouble getLVeDot() const;
        jdouble getPa() const;
        jdouble getPaDot() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(BodiesElements);
      extern PyTypeObject *PY_TYPE(BodiesElements);

      class t_BodiesElements {
      public:
        PyObject_HEAD
        BodiesElements object;
        static PyObject *wrap_Object(const BodiesElements&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
