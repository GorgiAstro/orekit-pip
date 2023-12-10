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
          class Rotation;
          class Vector3D;
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
          mid_init$_4dd695ef7f847f99,
          mid_init$_35ede516ab2a5b7c,
          mid_init$_8b0e1234e87551c9,
          mid_init$_80d87769fddea175,
          mid_addOffset_40af0b84b03b166a,
          mid_getDate_aaa854c403487cf3,
          mid_revert_8b3d104eb3a71bfc,
          mid_shiftedBy_161d918b0259e11d,
          mid_subtractOffset_40af0b84b03b166a,
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
