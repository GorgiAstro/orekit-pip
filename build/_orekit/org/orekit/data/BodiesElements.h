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
          mid_init$_ad6d4c995a81d9e4,
          mid_getLE_dff5885c2c873297,
          mid_getLEDot_dff5885c2c873297,
          mid_getLJu_dff5885c2c873297,
          mid_getLJuDot_dff5885c2c873297,
          mid_getLMa_dff5885c2c873297,
          mid_getLMaDot_dff5885c2c873297,
          mid_getLMe_dff5885c2c873297,
          mid_getLMeDot_dff5885c2c873297,
          mid_getLNe_dff5885c2c873297,
          mid_getLNeDot_dff5885c2c873297,
          mid_getLSa_dff5885c2c873297,
          mid_getLSaDot_dff5885c2c873297,
          mid_getLUr_dff5885c2c873297,
          mid_getLUrDot_dff5885c2c873297,
          mid_getLVe_dff5885c2c873297,
          mid_getLVeDot_dff5885c2c873297,
          mid_getPa_dff5885c2c873297,
          mid_getPaDot_dff5885c2c873297,
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
