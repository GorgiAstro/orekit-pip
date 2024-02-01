#ifndef org_orekit_bodies_JPLEphemeridesLoader$RawPVProvider_H
#define org_orekit_bodies_JPLEphemeridesLoader$RawPVProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
      class FieldPVCoordinates;
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
    namespace bodies {

      class JPLEphemeridesLoader$RawPVProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getRawPV_37ec40ec795d4b0a,
          mid_getRawPV_6d49740a5d91eb64,
          mid_getRawPosition_8b37cafaaf55a3a5,
          mid_getRawPosition_8e5aead0a4b0cc16,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit JPLEphemeridesLoader$RawPVProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        JPLEphemeridesLoader$RawPVProvider(const JPLEphemeridesLoader$RawPVProvider& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::utils::PVCoordinates getRawPV(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::utils::FieldPVCoordinates getRawPV(const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getRawPosition(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getRawPosition(const ::org::orekit::time::FieldAbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(JPLEphemeridesLoader$RawPVProvider);
      extern PyTypeObject *PY_TYPE(JPLEphemeridesLoader$RawPVProvider);

      class t_JPLEphemeridesLoader$RawPVProvider {
      public:
        PyObject_HEAD
        JPLEphemeridesLoader$RawPVProvider object;
        static PyObject *wrap_Object(const JPLEphemeridesLoader$RawPVProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
