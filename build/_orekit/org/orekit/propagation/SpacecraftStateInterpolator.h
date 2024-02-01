#ifndef org_orekit_propagation_SpacecraftStateInterpolator_H
#define org_orekit_propagation_SpacecraftStateInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class AbsolutePVCoordinates;
      class CartesianDerivativesFilter;
      class AngularDerivativesFilter;
    }
    namespace time {
      class TimeStamped;
      class TimeInterpolator;
      class AbsoluteDate;
      class TimeStampedDouble;
    }
    namespace orbits {
      class Orbit;
    }
    namespace frames {
      class Frame;
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace attitudes {
      class Attitude;
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
          mid_init$_9725b246c9e25f68,
          mid_init$_b744963488fb11c5,
          mid_init$_b764253cc264c047,
          mid_init$_1567a5431e11bb91,
          mid_init$_0aad11dd3e2442fe,
          mid_init$_282bf014460f9257,
          mid_init$_f652be66d2f5064d,
          mid_checkSampleAndInterpolatorConsistency_e03750a959d556e9,
          mid_checkStatesDefinitionsConsistency_aa335fea495d60e0,
          mid_getAbsPVAInterpolator_aa56605e3771f379,
          mid_getAdditionalStateInterpolator_aa56605e3771f379,
          mid_getAttitudeInterpolator_aa56605e3771f379,
          mid_getMassInterpolator_aa56605e3771f379,
          mid_getOrbitInterpolator_aa56605e3771f379,
          mid_getOutputFrame_cb151471db4570f0,
          mid_getSubInterpolators_d751c1a57012b438,
          mid_interpolate_be02af4cea5d51b2,
          mid_interpolate_f2e8566a577b7b64,
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
        SpacecraftStateInterpolator(jint, jdouble, const ::org::orekit::frames::Frame &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::time::TimeInterpolator &);

        static void checkSampleAndInterpolatorConsistency(const ::java::util::List &, jboolean, jboolean);
        static void checkStatesDefinitionsConsistency(const ::java::util::List &);
        ::java::util::Optional getAbsPVAInterpolator() const;
        ::java::util::Optional getAdditionalStateInterpolator() const;
        ::java::util::Optional getAttitudeInterpolator() const;
        ::java::util::Optional getMassInterpolator() const;
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
