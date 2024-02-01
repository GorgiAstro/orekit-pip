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
      class PVCoordinates;
      class TimeStampedAngularCoordinates;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldRotation;
          class Rotation;
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

      class TimeStampedAngularCoordinates : public ::org::orekit::utils::AngularCoordinates {
       public:
        enum {
          mid_init$_b30400bebd43ad7f,
          mid_init$_74a905f732d238fd,
          mid_init$_9086b91a3588262e,
          mid_init$_28772f23acc6e057,
          mid_addOffset_5221dae25a052562,
          mid_getDate_80e11148db499dda,
          mid_revert_f61c26acc5bceebd,
          mid_shiftedBy_3a6e64bcd855d02b,
          mid_subtractOffset_5221dae25a052562,
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
