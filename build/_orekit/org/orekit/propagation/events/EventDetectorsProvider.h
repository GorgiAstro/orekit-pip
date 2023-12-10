#ifndef org_orekit_propagation_events_EventDetectorsProvider_H
#define org_orekit_propagation_events_EventDetectorsProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
    }
    namespace utils {
      class ParameterDriver;
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

        class EventDetectorsProvider : public ::java::lang::Object {
         public:
          enum {
            mid_getEventDetectors_20f6d2b462aaef4b,
            mid_getEventDetectors_7659b9c52e25aa5d,
            mid_getFieldEventDetectors_361313cd1a9c693a,
            mid_getFieldEventDetectors_bccf367c194c95ef,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EventDetectorsProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EventDetectorsProvider(const EventDetectorsProvider& obj) : ::java::lang::Object(obj) {}

          static jdouble DATATION_ACCURACY;

          ::java::util::stream::Stream getEventDetectors() const;
          ::java::util::stream::Stream getEventDetectors(const ::java::util::List &) const;
          ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
          ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &, const ::java::util::List &) const;
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
        extern PyType_Def PY_TYPE_DEF(EventDetectorsProvider);
        extern PyTypeObject *PY_TYPE(EventDetectorsProvider);

        class t_EventDetectorsProvider {
        public:
          PyObject_HEAD
          EventDetectorsProvider object;
          static PyObject *wrap_Object(const EventDetectorsProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
