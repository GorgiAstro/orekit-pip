#ifndef org_orekit_data_PythonSeriesTerm_H
#define org_orekit_data_PythonSeriesTerm_H

#include "org/orekit/data/SeriesTerm.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class BodiesElements;
      class FieldBodiesElements;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class PythonSeriesTerm : public ::org::orekit::data::SeriesTerm {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_argument_68f0627d4a947675,
          mid_argument_8988cf596cc2decd,
          mid_argumentDerivative_68f0627d4a947675,
          mid_argumentDerivative_8988cf596cc2decd,
          mid_finalize_7ae3461a92a43152,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
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
