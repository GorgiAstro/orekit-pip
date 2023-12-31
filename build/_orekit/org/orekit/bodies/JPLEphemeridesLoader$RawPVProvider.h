#ifndef org_orekit_bodies_JPLEphemeridesLoader$RawPVProvider_H
#define org_orekit_bodies_JPLEphemeridesLoader$RawPVProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
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
    namespace bodies {

      class JPLEphemeridesLoader$RawPVProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getRawPV_686d17b8cfdd0634,
          mid_getRawPV_c8e1d160acb3bee5,
          mid_getRawPosition_082e6346b274f880,
          mid_getRawPosition_362941be972fb4b5,
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
