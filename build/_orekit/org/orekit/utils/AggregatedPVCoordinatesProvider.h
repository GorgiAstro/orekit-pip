#ifndef org_orekit_utils_AggregatedPVCoordinatesProvider_H
#define org_orekit_utils_AggregatedPVCoordinatesProvider_H

#include "java/lang/Object.h"

namespace org {
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
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
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
          mid_init$_2af49f877af16f8e,
          mid_init$_ec7b19091f399515,
          mid_getMaxDate_aaa854c403487cf3,
          mid_getMinDate_aaa854c403487cf3,
          mid_getPVCoordinates_20557c175f7cd899,
          mid_getPosition_5343d34e5fbffcdd,
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
