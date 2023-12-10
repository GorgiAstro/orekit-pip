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
      namespace sp3 {
        class SP3Segment;
        class SP3Coordinate;
      }
      namespace general {
        class EphemerisFile$SatelliteEphemeris;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class CartesianDerivativesFilter;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_4d7d7a5112178df2,
            mid_addCoordinate_33ee0b398b1c8e71,
            mid_getAvailableDerivatives_237181d932324188,
            mid_getFrame_c8fe21bcdac65bf6,
            mid_getId_0090f7797e403f43,
            mid_getInterpolationSamples_f2f64475e4580546,
            mid_getMu_456d9a2f64d6b28d,
            mid_getSegments_a6156df500549a58,
            mid_getStart_aaa854c403487cf3,
            mid_getStop_aaa854c403487cf3,
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
