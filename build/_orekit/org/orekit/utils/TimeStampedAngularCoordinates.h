#ifndef org_orekit_utils_TimeStampedAngularCoordinates_H
#define org_orekit_utils_TimeStampedAngularCoordinates_H

#include "org/orekit/utils/AngularCoordinates.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class FieldRotation;
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace utils {
      class TimeStampedAngularCoordinates;
      class PVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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
          mid_init$_2b9eda08b3ec8dd7,
          mid_init$_9ff2f3ca38e5cacd,
          mid_init$_bc95563ddeee02cc,
          mid_init$_d13df62481f4e58d,
          mid_addOffset_fa2097760de32aee,
          mid_getDate_85703d13e302437e,
          mid_revert_b8bfd7046d8ee6f7,
          mid_shiftedBy_577c57882f69ee57,
          mid_subtractOffset_fa2097760de32aee,
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
