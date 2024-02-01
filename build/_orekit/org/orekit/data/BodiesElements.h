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
          mid_init$_7476437870c07590,
          mid_getLE_9981f74b2d109da6,
          mid_getLEDot_9981f74b2d109da6,
          mid_getLJu_9981f74b2d109da6,
          mid_getLJuDot_9981f74b2d109da6,
          mid_getLMa_9981f74b2d109da6,
          mid_getLMaDot_9981f74b2d109da6,
          mid_getLMe_9981f74b2d109da6,
          mid_getLMeDot_9981f74b2d109da6,
          mid_getLNe_9981f74b2d109da6,
          mid_getLNeDot_9981f74b2d109da6,
          mid_getLSa_9981f74b2d109da6,
          mid_getLSaDot_9981f74b2d109da6,
          mid_getLUr_9981f74b2d109da6,
          mid_getLUrDot_9981f74b2d109da6,
          mid_getLVe_9981f74b2d109da6,
          mid_getLVeDot_9981f74b2d109da6,
          mid_getPa_9981f74b2d109da6,
          mid_getPaDot_9981f74b2d109da6,
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
