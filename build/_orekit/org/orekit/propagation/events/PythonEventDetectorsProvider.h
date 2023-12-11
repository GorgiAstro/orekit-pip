#ifndef org_orekit_propagation_events_PythonEventDetectorsProvider_H
#define org_orekit_propagation_events_PythonEventDetectorsProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetectorsProvider;
        class EventDetector;
        class FieldEventDetector;
      }
    }
  }
  namespace hipparchus {
    class Field;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class PythonEventDetectorsProvider : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_getEventDetectors_d7cce92225eb0db2,
            mid_getFieldEventDetectors_8130af76f6998f44,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonEventDetectorsProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonEventDetectorsProvider(const PythonEventDetectorsProvider& obj) : ::java::lang::Object(obj) {}

          PythonEventDetectorsProvider();

          void finalize() const;
          ::java::util::stream::Stream getEventDetectors() const;
          ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
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
      namespace events {
        extern PyType_Def PY_TYPE_DEF(PythonEventDetectorsProvider);
        extern PyTypeObject *PY_TYPE(PythonEventDetectorsProvider);

        class t_PythonEventDetectorsProvider {
        public:
          PyObject_HEAD
          PythonEventDetectorsProvider object;
          static PyObject *wrap_Object(const PythonEventDetectorsProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
