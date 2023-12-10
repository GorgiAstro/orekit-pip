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
            mid_init$_c8f7ccb4be2c9aa7,
            mid_addCoordinate_ee2ec20169ef45b1,
            mid_getAvailableDerivatives_16e9a7b5414faf2d,
            mid_getFrame_b86f9f61d97a7244,
            mid_getId_11b109bd155ca898,
            mid_getInterpolationSamples_570ce0828f81a2c1,
            mid_getMu_dff5885c2c873297,
            mid_getSegments_2afa36052df4765d,
            mid_getStart_85703d13e302437e,
            mid_getStop_85703d13e302437e,
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
