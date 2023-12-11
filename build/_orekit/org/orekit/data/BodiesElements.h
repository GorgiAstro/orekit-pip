#ifndef org_orekit_data_BodiesElements_H
#define org_orekit_data_BodiesElements_H

#include "org/orekit/data/DelaunayArguments.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
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

      class BodiesElements : public ::org::orekit::data::DelaunayArguments {
       public:
        enum {
          mid_init$_13b63796f0ca3528,
          mid_getLE_557b8123390d8d0c,
          mid_getLEDot_557b8123390d8d0c,
          mid_getLJu_557b8123390d8d0c,
          mid_getLJuDot_557b8123390d8d0c,
          mid_getLMa_557b8123390d8d0c,
          mid_getLMaDot_557b8123390d8d0c,
          mid_getLMe_557b8123390d8d0c,
          mid_getLMeDot_557b8123390d8d0c,
          mid_getLNe_557b8123390d8d0c,
          mid_getLNeDot_557b8123390d8d0c,
          mid_getLSa_557b8123390d8d0c,
          mid_getLSaDot_557b8123390d8d0c,
          mid_getLUr_557b8123390d8d0c,
          mid_getLUrDot_557b8123390d8d0c,
          mid_getLVe_557b8123390d8d0c,
          mid_getLVeDot_557b8123390d8d0c,
          mid_getPa_557b8123390d8d0c,
          mid_getPaDot_557b8123390d8d0c,
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
