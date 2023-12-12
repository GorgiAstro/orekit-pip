#ifndef org_orekit_files_sp3_SP3Ephemeris_H
#define org_orekit_files_sp3_SP3Ephemeris_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class EphemerisFile$SatelliteEphemeris;
      }
      namespace sp3 {
        class SP3Segment;
        class SP3Coordinate;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class CartesianDerivativesFilter;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        class SP3Ephemeris : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d20f1b9933bf6131,
            mid_addCoordinate_3b8f026ef20f7360,
            mid_getAvailableDerivatives_6c4898d6ec0c3837,
            mid_getFrame_6c9bc0a928c56d4e,
            mid_getId_3cffd47377eca18a,
            mid_getInterpolationSamples_412668abc8d889e9,
            mid_getMu_557b8123390d8d0c,
            mid_getSegments_0d9551367f7ecdef,
            mid_getStart_7a97f7e149e79afb,
            mid_getStop_7a97f7e149e79afb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SP3Ephemeris(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SP3Ephemeris(const SP3Ephemeris& obj) : ::java::lang::Object(obj) {}

          SP3Ephemeris(const ::java::lang::String &, jdouble, const ::org::orekit::frames::Frame &, jint, const ::org::orekit::utils::CartesianDerivativesFilter &);

          void addCoordinate(const ::org::orekit::files::sp3::SP3Coordinate &, jdouble) const;
          ::org::orekit::utils::CartesianDerivativesFilter getAvailableDerivatives() const;
          ::org::orekit::frames::Frame getFrame() const;
          ::java::lang::String getId() const;
          jint getInterpolationSamples() const;
          jdouble getMu() const;
          ::java::util::List getSegments() const;
          ::org::orekit::time::AbsoluteDate getStart() const;
          ::org::orekit::time::AbsoluteDate getStop() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        extern PyType_Def PY_TYPE_DEF(SP3Ephemeris);
        extern PyTypeObject *PY_TYPE(SP3Ephemeris);

        class t_SP3Ephemeris {
        public:
          PyObject_HEAD
          SP3Ephemeris object;
          static PyObject *wrap_Object(const SP3Ephemeris&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
