#ifndef org_orekit_propagation_SpacecraftStateInterpolator_H
#define org_orekit_propagation_SpacecraftStateInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeInterpolator;
      class TimeStamped;
      class TimeStampedDouble;
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class AngularDerivativesFilter;
      class CartesianDerivativesFilter;
      class AbsolutePVCoordinates;
    }
    namespace attitudes {
      class Attitude;
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
          mid_init$_b1992bd1bb70f476,
          mid_init$_2ec8e00deddf59e8,
          mid_init$_4806cf42a7c4464d,
          mid_init$_c113313c707bf3d9,
          mid_init$_8874babef770dcb7,
          mid_init$_5293467a3d24372c,
          mid_checkSampleAndInterpolatorConsistency_fc226f4fb89ebce1,
          mid_checkStatesDefinitionsConsistency_65de9727799c5641,
          mid_getAbsPVAInterpolator_c56b7edc0c3c7d86,
          mid_getAdditionalStateInterpolator_c56b7edc0c3c7d86,
          mid_getAttitudeInterpolator_c56b7edc0c3c7d86,
          mid_getMassInterpolator_c56b7edc0c3c7d86,
          mid_getNbInterpolationPoints_f2f64475e4580546,
          mid_getOrbitInterpolator_c56b7edc0c3c7d86,
          mid_getOutputFrame_c8fe21bcdac65bf6,
          mid_getSubInterpolators_a6156df500549a58,
          mid_interpolate_20ba144eae918f32,
          mid_interpolate_2f2d20a5ea5a277a,
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
