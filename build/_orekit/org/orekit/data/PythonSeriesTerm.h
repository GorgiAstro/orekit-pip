#ifndef org_orekit_data_PythonSeriesTerm_H
#define org_orekit_data_PythonSeriesTerm_H

#include "org/orekit/data/SeriesTerm.h"

namespace org {
  namespace orekit {
    namespace data {
      class FieldBodiesElements;
      class BodiesElements;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_argument_e5a6deebdf7be070,
          mid_argument_6d9bdfdb86170f1b,
          mid_argumentDerivative_e5a6deebdf7be070,
          mid_argumentDerivative_6d9bdfdb86170f1b,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
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
