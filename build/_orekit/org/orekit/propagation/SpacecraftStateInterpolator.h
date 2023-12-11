#ifndef org_orekit_propagation_SpacecraftStateInterpolator_H
#define org_orekit_propagation_SpacecraftStateInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class Attitude;
    }
    namespace time {
      class TimeInterpolator;
      class TimeStampedDouble;
      class AbsoluteDate;
      class TimeStamped;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class AbsolutePVCoordinates;
      class AngularDerivativesFilter;
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
          mid_init$_535d1f91a93c8b4d,
          mid_init$_03d00ffd0ee81fe0,
          mid_init$_e69fe3991d4122f6,
          mid_init$_3eb98fb434e9f71a,
          mid_init$_93057eaba5c5145b,
          mid_init$_046c155e813ab99f,
          mid_checkSampleAndInterpolatorConsistency_9f392c0fc938feab,
          mid_checkStatesDefinitionsConsistency_4ccaedadb068bdeb,
          mid_getAbsPVAInterpolator_d0ccac9b4c6bdd55,
          mid_getAdditionalStateInterpolator_d0ccac9b4c6bdd55,
          mid_getAttitudeInterpolator_d0ccac9b4c6bdd55,
          mid_getMassInterpolator_d0ccac9b4c6bdd55,
          mid_getNbInterpolationPoints_412668abc8d889e9,
          mid_getOrbitInterpolator_d0ccac9b4c6bdd55,
          mid_getOutputFrame_6c9bc0a928c56d4e,
          mid_getSubInterpolators_0d9551367f7ecdef,
          mid_interpolate_a72036e732076565,
          mid_interpolate_a8fed498836089d5,
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
