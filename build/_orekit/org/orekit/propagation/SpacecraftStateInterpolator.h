#ifndef org_orekit_propagation_SpacecraftStateInterpolator_H
#define org_orekit_propagation_SpacecraftStateInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStampedDouble;
      class AbsoluteDate;
      class TimeStamped;
      class TimeInterpolator;
    }
    namespace attitudes {
      class Attitude;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class AngularDerivativesFilter;
      class AbsolutePVCoordinates;
      class CartesianDerivativesFilter;
    }
    namespace orbits {
      class Orbit;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Collection;
    class Optional;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class SpacecraftStateInterpolator : public ::org::orekit::time::AbstractTimeInterpolator {
       public:
        enum {
          mid_init$_b5680f5c30eede66,
          mid_init$_f67f9ac4338cd9bf,
          mid_init$_1be06daec585e1cc,
          mid_init$_6039fdd299a8bef6,
          mid_init$_47d46a6c49da3b1b,
          mid_init$_85f9e9867ab8e5f6,
          mid_checkSampleAndInterpolatorConsistency_f0c4d5587e0fdc0c,
          mid_checkStatesDefinitionsConsistency_de3e021e7266b71e,
          mid_getAbsPVAInterpolator_c5e311a9e5531e7d,
          mid_getAdditionalStateInterpolator_c5e311a9e5531e7d,
          mid_getAttitudeInterpolator_c5e311a9e5531e7d,
          mid_getMassInterpolator_c5e311a9e5531e7d,
          mid_getNbInterpolationPoints_570ce0828f81a2c1,
          mid_getOrbitInterpolator_c5e311a9e5531e7d,
          mid_getOutputFrame_b86f9f61d97a7244,
          mid_getSubInterpolators_2afa36052df4765d,
          mid_interpolate_c3c548c4263b98e4,
          mid_interpolate_64365a434213ebd8,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SpacecraftStateInterpolator(jobject obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SpacecraftStateInterpolator(const SpacecraftStateInterpolator& obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {}

        SpacecraftStateInterpolator(const ::org::orekit::frames::Frame &);
        SpacecraftStateInterpolator(jint, const ::org::orekit::frames::Frame &);
        SpacecraftStateInterpolator(jint, const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &);
        SpacecraftStateInterpolator(jint, jdouble, const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &);
        SpacecraftStateInterpolator(jint, jdouble, const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::org::orekit::utils::AngularDerivativesFilter &);
        SpacecraftStateInterpolator(const ::org::orekit::frames::Frame &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::time::TimeInterpolator &);

        static void checkSampleAndInterpolatorConsistency(const ::java::util::List &, jboolean, jboolean);
        static void checkStatesDefinitionsConsistency(const ::java::util::List &);
        ::java::util::Optional getAbsPVAInterpolator() const;
        ::java::util::Optional getAdditionalStateInterpolator() const;
        ::java::util::Optional getAttitudeInterpolator() const;
        ::java::util::Optional getMassInterpolator() const;
        jint getNbInterpolationPoints() const;
        ::java::util::Optional getOrbitInterpolator() const;
        ::org::orekit::frames::Frame getOutputFrame() const;
        ::java::util::List getSubInterpolators() const;
        ::org::orekit::propagation::SpacecraftState interpolate(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Collection &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(SpacecraftStateInterpolator);
      extern PyTypeObject *PY_TYPE(SpacecraftStateInterpolator);

      class t_SpacecraftStateInterpolator {
      public:
        PyObject_HEAD
        SpacecraftStateInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_SpacecraftStateInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const SpacecraftStateInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const SpacecraftStateInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
