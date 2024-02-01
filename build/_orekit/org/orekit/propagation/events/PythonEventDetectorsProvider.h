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
        class FieldEventDetector;
        class EventDetectorsProvider;
        class EventDetector;
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
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_getEventDetectors_11e4ca8182c1933d,
            mid_getFieldEventDetectors_d3db121d9deb0312,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
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
