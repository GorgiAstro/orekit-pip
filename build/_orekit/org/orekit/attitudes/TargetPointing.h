#ifndef org_orekit_attitudes_TargetPointing_H
#define org_orekit_attitudes_TargetPointing_H

#include "org/orekit/attitudes/GroundPointing.h"

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
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
      class TimeStampedFieldPVCoordinates;
    }
    namespace bodies {
      class GeodeticPoint;
      class BodyShape;
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
    namespace attitudes {

      class TargetPointing : public ::org::orekit::attitudes::GroundPointing {
       public:
        enum {
          mid_init$_868e35d94172e5d0,
          mid_init$_44b2b0a0619e7060,
          mid_getTargetPV_0c9a6603286e7c6f,
          mid_getTargetPV_4a6b199bd28f952f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TargetPointing(jobject obj) : ::org::orekit::attitudes::GroundPointing(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TargetPointing(const TargetPointing& obj) : ::org::orekit::attitudes::GroundPointing(obj) {}

        TargetPointing(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
        TargetPointing(const ::org::orekit::frames::Frame &, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::BodyShape &);

        ::org::orekit::utils::TimeStampedPVCoordinates getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(TargetPointing);
      extern PyTypeObject *PY_TYPE(TargetPointing);

      class t_TargetPointing {
      public:
        PyObject_HEAD
        TargetPointing object;
        static PyObject *wrap_Object(const TargetPointing&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
