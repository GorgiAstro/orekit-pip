#ifndef org_orekit_utils_AggregatedPVCoordinatesProvider$InvalidPVProvider_H
#define org_orekit_utils_AggregatedPVCoordinatesProvider$InvalidPVProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class PVCoordinatesProvider;
    }
    namespace frames {
      class Frame;
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
    namespace utils {

      class AggregatedPVCoordinatesProvider$InvalidPVProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_getPVCoordinates_6236a35378ed47a5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AggregatedPVCoordinatesProvider$InvalidPVProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AggregatedPVCoordinatesProvider$InvalidPVProvider(const AggregatedPVCoordinatesProvider$InvalidPVProvider& obj) : ::java::lang::Object(obj) {}

        AggregatedPVCoordinatesProvider$InvalidPVProvider();

        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(AggregatedPVCoordinatesProvider$InvalidPVProvider);
      extern PyTypeObject *PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider);

      class t_AggregatedPVCoordinatesProvider$InvalidPVProvider {
      public:
        PyObject_HEAD
        AggregatedPVCoordinatesProvider$InvalidPVProvider object;
        static PyObject *wrap_Object(const AggregatedPVCoordinatesProvider$InvalidPVProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
