#ifndef org_orekit_propagation_events_PythonEventDetectorsProvider_H
#define org_orekit_propagation_events_PythonEventDetectorsProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
        class EventDetectorsProvider;
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
            mid_init$_0fa09c18fee449d5,
            mid_finalize_0fa09c18fee449d5,
            mid_getEventDetectors_20f6d2b462aaef4b,
            mid_getFieldEventDetectors_361313cd1a9c693a,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
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
