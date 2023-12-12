#ifndef org_orekit_attitudes_AggregateBoundedAttitudeProvider_H
#define org_orekit_attitudes_AggregateBoundedAttitudeProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace attitudes {
      class BoundedAttitudeProvider;
      class FieldAttitude;
      class Attitude;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class FieldRotation;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class AggregateBoundedAttitudeProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3abde0be9b9c9773,
          mid_getAttitude_77e3383de01f3e48,
          mid_getAttitude_1306ac39e1d2de3f,
          mid_getAttitudeRotation_5c74bfcf2d42825a,
          mid_getAttitudeRotation_85bb0a19efdadc1d,
          mid_getMaxDate_7a97f7e149e79afb,
          mid_getMinDate_7a97f7e149e79afb,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AggregateBoundedAttitudeProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AggregateBoundedAttitudeProvider(const AggregateBoundedAttitudeProvider& obj) : ::java::lang::Object(obj) {}

        AggregateBoundedAttitudeProvider(const ::java::util::Collection &);

        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::time::AbsoluteDate getMaxDate() const;
        ::org::orekit::time::AbsoluteDate getMinDate() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(AggregateBoundedAttitudeProvider);
      extern PyTypeObject *PY_TYPE(AggregateBoundedAttitudeProvider);

      class t_AggregateBoundedAttitudeProvider {
      public:
        PyObject_HEAD
        AggregateBoundedAttitudeProvider object;
        static PyObject *wrap_Object(const AggregateBoundedAttitudeProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
