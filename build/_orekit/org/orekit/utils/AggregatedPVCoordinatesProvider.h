#ifndef org_orekit_utils_AggregatedPVCoordinatesProvider_H
#define org_orekit_utils_AggregatedPVCoordinatesProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace utils {
      class TimeStampedPVCoordinates;
      class TimeSpanMap;
      class PVCoordinatesProvider;
    }
    namespace frames {
      class Frame;
    }
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
    namespace utils {

      class AggregatedPVCoordinatesProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_9bd1e5be25a29826,
          mid_init$_df6854e24a884d37,
          mid_getMaxDate_c325492395d89b24,
          mid_getMinDate_c325492395d89b24,
          mid_getPVCoordinates_e5d15ef236cd9ffe,
          mid_getPosition_42ef2ff6aede2782,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AggregatedPVCoordinatesProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AggregatedPVCoordinatesProvider(const AggregatedPVCoordinatesProvider& obj) : ::java::lang::Object(obj) {}

        AggregatedPVCoordinatesProvider(const ::org::orekit::utils::TimeSpanMap &);
        AggregatedPVCoordinatesProvider(const ::org::orekit::utils::TimeSpanMap &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &);

        ::org::orekit::time::AbsoluteDate getMaxDate() const;
        ::org::orekit::time::AbsoluteDate getMinDate() const;
        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getPosition(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(AggregatedPVCoordinatesProvider);
      extern PyTypeObject *PY_TYPE(AggregatedPVCoordinatesProvider);

      class t_AggregatedPVCoordinatesProvider {
      public:
        PyObject_HEAD
        AggregatedPVCoordinatesProvider object;
        static PyObject *wrap_Object(const AggregatedPVCoordinatesProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
