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
          mid_init$_52219a7c17472ec7,
          mid_getLE_b74f83833fdad017,
          mid_getLEDot_b74f83833fdad017,
          mid_getLJu_b74f83833fdad017,
          mid_getLJuDot_b74f83833fdad017,
          mid_getLMa_b74f83833fdad017,
          mid_getLMaDot_b74f83833fdad017,
          mid_getLMe_b74f83833fdad017,
          mid_getLMeDot_b74f83833fdad017,
          mid_getLNe_b74f83833fdad017,
          mid_getLNeDot_b74f83833fdad017,
          mid_getLSa_b74f83833fdad017,
          mid_getLSaDot_b74f83833fdad017,
          mid_getLUr_b74f83833fdad017,
          mid_getLUrDot_b74f83833fdad017,
          mid_getLVe_b74f83833fdad017,
          mid_getLVeDot_b74f83833fdad017,
          mid_getPa_b74f83833fdad017,
          mid_getPaDot_b74f83833fdad017,
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
