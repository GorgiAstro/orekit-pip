#ifndef org_orekit_utils_TimeStampedAngularCoordinates_H
#define org_orekit_utils_TimeStampedAngularCoordinates_H

#include "org/orekit/utils/AngularCoordinates.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedAngularCoordinates;
      class PVCoordinates;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldRotation;
          class Rotation;
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
          mid_init$_5cdceeb17ad9585c,
          mid_init$_1e47dd5ffc56db57,
          mid_init$_a592ae8491041610,
          mid_init$_6b36e41f0ff6a962,
          mid_addOffset_a6d2f335ff825b52,
          mid_getDate_c325492395d89b24,
          mid_revert_9825c51fb1940671,
          mid_shiftedBy_a35c7d9d944e9ca5,
          mid_subtractOffset_a6d2f335ff825b52,
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
