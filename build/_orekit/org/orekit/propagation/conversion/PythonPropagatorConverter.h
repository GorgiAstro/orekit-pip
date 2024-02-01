#ifndef org_orekit_propagation_conversion_PythonPropagatorConverter_H
#define org_orekit_propagation_conversion_PythonPropagatorConverter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorConverter;
      }
      class Propagator;
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class PythonPropagatorConverter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_convert_1713a56b457259e7,
            mid_convert_94ab750de1114aab,
            mid_convert_ed6ecec71abaa7e7,
            mid_convert_f1a727d7b3be4da6,
            mid_finalize_ff7cb6c242604316,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonPropagatorConverter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonPropagatorConverter(const PythonPropagatorConverter& obj) : ::java::lang::Object(obj) {}

          PythonPropagatorConverter();

          ::org::orekit::propagation::Propagator convert(const ::java::util::List &, jboolean, const JArray< ::java::lang::String > &) const;
          ::org::orekit::propagation::Propagator convert(const ::java::util::List &, jboolean, const ::java::util::List &) const;
          ::org::orekit::propagation::Propagator convert(const ::org::orekit::propagation::Propagator &, jdouble, jint, const JArray< ::java::lang::String > &) const;
          ::org::orekit::propagation::Propagator convert(const ::org::orekit::propagation::Propagator &, jdouble, jint, const ::java::util::List &) const;
          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        extern PyType_Def PY_TYPE_DEF(PythonPropagatorConverter);
        extern PyTypeObject *PY_TYPE(PythonPropagatorConverter);

        class t_PythonPropagatorConverter {
        public:
          PyObject_HEAD
          PythonPropagatorConverter object;
          static PyObject *wrap_Object(const PythonPropagatorConverter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
