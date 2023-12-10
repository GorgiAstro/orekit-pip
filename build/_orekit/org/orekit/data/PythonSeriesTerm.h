#ifndef org_orekit_data_PythonSeriesTerm_H
#define org_orekit_data_PythonSeriesTerm_H

#include "org/orekit/data/SeriesTerm.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace data {
      class BodiesElements;
      class FieldBodiesElements;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class PythonSeriesTerm : public ::org::orekit::data::SeriesTerm {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_argument_bea6276a59f3cdf6,
          mid_argument_2748c478a8009c37,
          mid_argumentDerivative_bea6276a59f3cdf6,
          mid_argumentDerivative_2748c478a8009c37,
          mid_finalize_0fa09c18fee449d5,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonSeriesTerm(jobject obj) : ::org::orekit::data::SeriesTerm(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonSeriesTerm(const PythonSeriesTerm& obj) : ::org::orekit::data::SeriesTerm(obj) {}

        PythonSeriesTerm();

        jdouble argument(const ::org::orekit::data::BodiesElements &) const;
        ::org::hipparchus::CalculusFieldElement argument(const ::org::orekit::data::FieldBodiesElements &) const;
        jdouble argumentDerivative(const ::org::orekit::data::BodiesElements &) const;
        ::org::hipparchus::CalculusFieldElement argumentDerivative(const ::org::orekit::data::FieldBodiesElements &) const;
        void finalize() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(PythonSeriesTerm);
      extern PyTypeObject *PY_TYPE(PythonSeriesTerm);

      class t_PythonSeriesTerm {
      public:
        PyObject_HEAD
        PythonSeriesTerm object;
        static PyObject *wrap_Object(const PythonSeriesTerm&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
