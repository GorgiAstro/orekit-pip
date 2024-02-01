#ifndef org_orekit_attitudes_AggregateBoundedAttitudeProvider_H
#define org_orekit_attitudes_AggregateBoundedAttitudeProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class BoundedAttitudeProvider;
      class FieldAttitude;
      class Attitude;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class PVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldRotation;
          class Rotation;
        }
      }
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
          mid_init$_82af91bc8dfb5029,
          mid_getAttitude_a02177519e1b6a45,
          mid_getAttitude_aab1c6ab68ffdcbb,
          mid_getAttitudeRotation_267252ddff45220c,
          mid_getAttitudeRotation_494718838b66cf03,
          mid_getMaxDate_80e11148db499dda,
          mid_getMinDate_80e11148db499dda,
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

        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
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
