#ifndef org_orekit_utils_TimeStampedAngularCoordinates_H
#define org_orekit_utils_TimeStampedAngularCoordinates_H

#include "org/orekit/utils/AngularCoordinates.h"

namespace org {
  namespace orekit {
    namespace utils {
      class PVCoordinates;
      class TimeStampedAngularCoordinates;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class Rotation;
          class FieldRotation;
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

      class TimeStampedAngularCoordinates : public ::org::orekit::utils::AngularCoordinates {
       public:
        enum {
          mid_init$_ddc6f315d1e488b6,
          mid_init$_d1b18387f266ab27,
          mid_init$_ab40439ce57e4b27,
          mid_init$_b580f4c150431d88,
          mid_addOffset_532e84b28850f6ea,
          mid_getDate_7a97f7e149e79afb,
          mid_revert_99d3c751073fda6d,
          mid_shiftedBy_0ac736191f55005c,
          mid_subtractOffset_532e84b28850f6ea,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStampedAngularCoordinates(jobject obj) : ::org::orekit::utils::AngularCoordinates(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStampedAngularCoordinates(const TimeStampedAngularCoordinates& obj) : ::org::orekit::utils::AngularCoordinates(obj) {}

        TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &);
        TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::utils::PVCoordinates &);
        TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Rotation &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
        TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::utils::PVCoordinates &, jdouble);

        TimeStampedAngularCoordinates addOffset(const ::org::orekit::utils::AngularCoordinates &) const;
        ::org::orekit::time::AbsoluteDate getDate() const;
        TimeStampedAngularCoordinates revert() const;
        TimeStampedAngularCoordinates shiftedBy(jdouble) const;
        TimeStampedAngularCoordinates subtractOffset(const ::org::orekit::utils::AngularCoordinates &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(TimeStampedAngularCoordinates);
      extern PyTypeObject *PY_TYPE(TimeStampedAngularCoordinates);

      class t_TimeStampedAngularCoordinates {
      public:
        PyObject_HEAD
        TimeStampedAngularCoordinates object;
        static PyObject *wrap_Object(const TimeStampedAngularCoordinates&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
