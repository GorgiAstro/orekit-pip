#ifndef org_orekit_attitudes_AggregateBoundedAttitudeProvider_H
#define org_orekit_attitudes_AggregateBoundedAttitudeProvider_H

#include "java/lang/Object.h"

namespace org {
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
  namespace orekit {
    namespace attitudes {
      class BoundedAttitudeProvider;
      class Attitude;
      class FieldAttitude;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class AggregateBoundedAttitudeProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_26b3669ec54017ce,
          mid_getAttitude_455b5c75f9292826,
          mid_getAttitude_5341a8481841f90c,
          mid_getAttitudeRotation_01363f58d35f60d4,
          mid_getAttitudeRotation_969253bc78d7a272,
          mid_getMaxDate_aaa854c403487cf3,
          mid_getMinDate_aaa854c403487cf3,
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
