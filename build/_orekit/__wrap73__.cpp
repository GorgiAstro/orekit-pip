#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *ObservationType::class$ = NULL;
            jmethodID *ObservationType::mids$ = NULL;
            bool ObservationType::live$ = false;
            ObservationType *ObservationType::ANGLE_1 = NULL;
            ObservationType *ObservationType::ANGLE_2 = NULL;
            ObservationType *ObservationType::CARRIER_POWER = NULL;
            ObservationType *ObservationType::CLOCK_BIAS = NULL;
            ObservationType *ObservationType::CLOCK_DRIFT = NULL;
            ObservationType *ObservationType::DOPPLER_COUNT = NULL;
            ObservationType *ObservationType::DOPPLER_INSTANTANEOUS = NULL;
            ObservationType *ObservationType::DOPPLER_INTEGRATED = NULL;
            ObservationType *ObservationType::DOR = NULL;
            ObservationType *ObservationType::MAG = NULL;
            ObservationType *ObservationType::PC_N0 = NULL;
            ObservationType *ObservationType::PRESSURE = NULL;
            ObservationType *ObservationType::PR_N0 = NULL;
            ObservationType *ObservationType::RANGE = NULL;
            ObservationType *ObservationType::RCS = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_1 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_2 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_3 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_4 = NULL;
            ObservationType *ObservationType::RECEIVE_FREQ_5 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_1 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_2 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_3 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_4 = NULL;
            ObservationType *ObservationType::RECEIVE_PHASE_CT_5 = NULL;
            ObservationType *ObservationType::RHUMIDITY = NULL;
            ObservationType *ObservationType::STEC = NULL;
            ObservationType *ObservationType::TEMPERATURE = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_1 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_2 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_3 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_4 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_5 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_1 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_2 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_3 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_4 = NULL;
            ObservationType *ObservationType::TRANSMIT_FREQ_RATE_5 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_1 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_2 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_3 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_4 = NULL;
            ObservationType *ObservationType::TRANSMIT_PHASE_CT_5 = NULL;
            ObservationType *ObservationType::TROPO_DRY = NULL;
            ObservationType *ObservationType::TROPO_WET = NULL;
            ObservationType *ObservationType::VLBI_DELAY = NULL;

            jclass ObservationType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/ObservationType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_43511ead8636d4af] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/files/ccsds/ndm/tdm/ObservationsBlock;)Z");
                mids$[mid_rawToSI_a45d20a4a617d919] = env->getMethodID(cls, "rawToSI", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_siToRaw_a45d20a4a617d919] = env->getMethodID(cls, "siToRaw", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_valueOf_d58973731303ed31] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;");
                mids$[mid_values_70d16f61ee10d689] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ANGLE_1 = new ObservationType(env->getStaticObjectField(cls, "ANGLE_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                ANGLE_2 = new ObservationType(env->getStaticObjectField(cls, "ANGLE_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                CARRIER_POWER = new ObservationType(env->getStaticObjectField(cls, "CARRIER_POWER", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                CLOCK_BIAS = new ObservationType(env->getStaticObjectField(cls, "CLOCK_BIAS", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                CLOCK_DRIFT = new ObservationType(env->getStaticObjectField(cls, "CLOCK_DRIFT", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOPPLER_COUNT = new ObservationType(env->getStaticObjectField(cls, "DOPPLER_COUNT", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOPPLER_INSTANTANEOUS = new ObservationType(env->getStaticObjectField(cls, "DOPPLER_INSTANTANEOUS", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOPPLER_INTEGRATED = new ObservationType(env->getStaticObjectField(cls, "DOPPLER_INTEGRATED", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                DOR = new ObservationType(env->getStaticObjectField(cls, "DOR", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                MAG = new ObservationType(env->getStaticObjectField(cls, "MAG", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                PC_N0 = new ObservationType(env->getStaticObjectField(cls, "PC_N0", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                PRESSURE = new ObservationType(env->getStaticObjectField(cls, "PRESSURE", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                PR_N0 = new ObservationType(env->getStaticObjectField(cls, "PR_N0", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RANGE = new ObservationType(env->getStaticObjectField(cls, "RANGE", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RCS = new ObservationType(env->getStaticObjectField(cls, "RCS", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_1 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_2 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_3 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_4 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_FREQ_5 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_FREQ_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_1 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_2 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_3 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_4 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RECEIVE_PHASE_CT_5 = new ObservationType(env->getStaticObjectField(cls, "RECEIVE_PHASE_CT_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                RHUMIDITY = new ObservationType(env->getStaticObjectField(cls, "RHUMIDITY", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                STEC = new ObservationType(env->getStaticObjectField(cls, "STEC", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TEMPERATURE = new ObservationType(env->getStaticObjectField(cls, "TEMPERATURE", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_1 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_2 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_3 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_4 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_5 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_1 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_2 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_3 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_4 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_FREQ_RATE_5 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_FREQ_RATE_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_1 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_1", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_2 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_2", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_3 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_3", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_4 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_4", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TRANSMIT_PHASE_CT_5 = new ObservationType(env->getStaticObjectField(cls, "TRANSMIT_PHASE_CT_5", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TROPO_DRY = new ObservationType(env->getStaticObjectField(cls, "TROPO_DRY", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                TROPO_WET = new ObservationType(env->getStaticObjectField(cls, "TROPO_WET", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                VLBI_DELAY = new ObservationType(env->getStaticObjectField(cls, "VLBI_DELAY", "Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean ObservationType::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a2, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a3, const ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock & a4) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_43511ead8636d4af], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$);
            }

            jdouble ObservationType::rawToSI(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) const
            {
              return env->callDoubleMethod(this$, mids$[mid_rawToSI_a45d20a4a617d919], a0.this$, a1.this$, a2.this$, a3);
            }

            jdouble ObservationType::siToRaw(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) const
            {
              return env->callDoubleMethod(this$, mids$[mid_siToRaw_a45d20a4a617d919], a0.this$, a1.this$, a2.this$, a3);
            }

            ObservationType ObservationType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ObservationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d58973731303ed31], a0.this$));
            }

            JArray< ObservationType > ObservationType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ObservationType >(env->callStaticObjectMethod(cls, mids$[mid_values_70d16f61ee10d689]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_process(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_rawToSI(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_siToRaw(t_ObservationType *self, PyObject *args);
            static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ObservationType_values(PyTypeObject *type);
            static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data);
            static PyGetSetDef t_ObservationType__fields_[] = {
              DECLARE_GET_FIELD(t_ObservationType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ObservationType__methods_[] = {
              DECLARE_METHOD(t_ObservationType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationType, of_, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, process, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, rawToSI, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, siToRaw, METH_VARARGS),
              DECLARE_METHOD(t_ObservationType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ObservationType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ObservationType)[] = {
              { Py_tp_methods, t_ObservationType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ObservationType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ObservationType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ObservationType, t_ObservationType, ObservationType);
            PyObject *t_ObservationType::wrap_Object(const ObservationType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ObservationType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ObservationType *self = (t_ObservationType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ObservationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ObservationType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ObservationType *self = (t_ObservationType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ObservationType::install(PyObject *module)
            {
              installType(&PY_TYPE(ObservationType), &PY_TYPE_DEF(ObservationType), module, "ObservationType", 0);
            }

            void t_ObservationType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "class_", make_descriptor(ObservationType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "wrapfn_", make_descriptor(t_ObservationType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "boxfn_", make_descriptor(boxObject));
              env->getClass(ObservationType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "ANGLE_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::ANGLE_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "ANGLE_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::ANGLE_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CARRIER_POWER", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CARRIER_POWER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CLOCK_BIAS", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CLOCK_BIAS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CLOCK_DRIFT", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CLOCK_DRIFT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOPPLER_COUNT", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOPPLER_COUNT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOPPLER_INSTANTANEOUS", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOPPLER_INSTANTANEOUS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOPPLER_INTEGRATED", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOPPLER_INTEGRATED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DOR", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "MAG", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::MAG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "PC_N0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::PC_N0)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "PRESSURE", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::PRESSURE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "PR_N0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::PR_N0)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RANGE", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RANGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RCS", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RCS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_FREQ_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_FREQ_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RECEIVE_PHASE_CT_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RECEIVE_PHASE_CT_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "RHUMIDITY", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::RHUMIDITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "STEC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::STEC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TEMPERATURE", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TEMPERATURE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_FREQ_RATE_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_FREQ_RATE_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_3", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_4", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TRANSMIT_PHASE_CT_5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TRANSMIT_PHASE_CT_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TROPO_DRY", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TROPO_DRY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "TROPO_WET", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::TROPO_WET)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "VLBI_DELAY", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::VLBI_DELAY)));
            }

            static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ObservationType::initializeClass, 1)))
                return NULL;
              return t_ObservationType::wrap_Object(ObservationType(((t_ObservationType *) arg)->object.this$));
            }
            static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ObservationType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ObservationType_process(t_ObservationType *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a2((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a3((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock a4((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkkkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_ObservationType_rawToSI(t_ObservationType *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "kkkD", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.rawToSI(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "rawToSI", args);
              return NULL;
            }

            static PyObject *t_ObservationType_siToRaw(t_ObservationType *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "kkkD", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.siToRaw(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "siToRaw", args);
              return NULL;
            }

            static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ObservationType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::ObservationType::valueOf(a0));
                return t_ObservationType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ObservationType_values(PyTypeObject *type)
            {
              JArray< ObservationType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::ObservationType::values());
              return JArray<jobject>(result.this$).wrap(t_ObservationType::wrap_jobject);
            }
            static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/LazyLoadedEop.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LazyLoadedFrames::class$ = NULL;
      jmethodID *LazyLoadedFrames::mids$ = NULL;
      bool LazyLoadedFrames::live$ = false;

      jclass LazyLoadedFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LazyLoadedFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_37bead060f7ff2d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/LazyLoadedEop;Lorg/orekit/time/TimeScales;Lorg/orekit/bodies/CelestialBodies;)V");
          mids$[mid_addDefaultEOP1980HistoryLoaders_799a817065a795a1] = env->getMethodID(cls, "addDefaultEOP1980HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addDefaultEOP2000HistoryLoaders_799a817065a795a1] = env->getMethodID(cls, "addDefaultEOP2000HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addEOPHistoryLoader_de5bd84d562632cf] = env->getMethodID(cls, "addEOPHistoryLoader", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/EopHistoryLoader;)V");
          mids$[mid_clearEOPHistoryLoaders_ff7cb6c242604316] = env->getMethodID(cls, "clearEOPHistoryLoaders", "()V");
          mids$[mid_getEOPHistory_5f3b1864e8a02d51] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_setEOPContinuityThreshold_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setEOPContinuityThreshold", "(D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedFrames::LazyLoadedFrames(const ::org::orekit::frames::LazyLoadedEop & a0, const ::org::orekit::time::TimeScales & a1, const ::org::orekit::bodies::CelestialBodies & a2) : ::org::orekit::frames::AbstractFrames(env->newObject(initializeClass, &mids$, mid_init$_37bead060f7ff2d4, a0.this$, a1.this$, a2.this$)) {}

      void LazyLoadedFrames::addDefaultEOP1980HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP1980HistoryLoaders_799a817065a795a1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void LazyLoadedFrames::addDefaultEOP2000HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP2000HistoryLoaders_799a817065a795a1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void LazyLoadedFrames::addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::EopHistoryLoader & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addEOPHistoryLoader_de5bd84d562632cf], a0.this$, a1.this$);
      }

      void LazyLoadedFrames::clearEOPHistoryLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEOPHistoryLoaders_ff7cb6c242604316]);
      }

      ::org::orekit::frames::EOPHistory LazyLoadedFrames::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_5f3b1864e8a02d51], a0.this$, a1));
      }

      void LazyLoadedFrames::setEOPContinuityThreshold(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setEOPContinuityThreshold_1ad26e8c8c0cd65b], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_LazyLoadedFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedFrames_init_(t_LazyLoadedFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedFrames_addDefaultEOP1980HistoryLoaders(t_LazyLoadedFrames *self, PyObject *args);
      static PyObject *t_LazyLoadedFrames_addDefaultEOP2000HistoryLoaders(t_LazyLoadedFrames *self, PyObject *args);
      static PyObject *t_LazyLoadedFrames_addEOPHistoryLoader(t_LazyLoadedFrames *self, PyObject *args);
      static PyObject *t_LazyLoadedFrames_clearEOPHistoryLoaders(t_LazyLoadedFrames *self);
      static PyObject *t_LazyLoadedFrames_getEOPHistory(t_LazyLoadedFrames *self, PyObject *args);
      static PyObject *t_LazyLoadedFrames_setEOPContinuityThreshold(t_LazyLoadedFrames *self, PyObject *arg);
      static int t_LazyLoadedFrames_set__eOPContinuityThreshold(t_LazyLoadedFrames *self, PyObject *arg, void *data);
      static PyGetSetDef t_LazyLoadedFrames__fields_[] = {
        DECLARE_SET_FIELD(t_LazyLoadedFrames, eOPContinuityThreshold),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedFrames__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedFrames, addDefaultEOP1980HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, addDefaultEOP2000HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, addEOPHistoryLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, clearEOPHistoryLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, getEOPHistory, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, setEOPContinuityThreshold, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedFrames)[] = {
        { Py_tp_methods, t_LazyLoadedFrames__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedFrames_init_ },
        { Py_tp_getset, t_LazyLoadedFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedFrames)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::AbstractFrames),
        NULL
      };

      DEFINE_TYPE(LazyLoadedFrames, t_LazyLoadedFrames, LazyLoadedFrames);

      void t_LazyLoadedFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedFrames), &PY_TYPE_DEF(LazyLoadedFrames), module, "LazyLoadedFrames", 0);
      }

      void t_LazyLoadedFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedFrames), "class_", make_descriptor(LazyLoadedFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedFrames), "wrapfn_", make_descriptor(t_LazyLoadedFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedFrames), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedFrames::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedFrames::wrap_Object(LazyLoadedFrames(((t_LazyLoadedFrames *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedFrames_init_(t_LazyLoadedFrames *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::LazyLoadedEop a0((jobject) NULL);
        ::org::orekit::time::TimeScales a1((jobject) NULL);
        ::org::orekit::bodies::CelestialBodies a2((jobject) NULL);
        LazyLoadedFrames object((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::frames::LazyLoadedEop::initializeClass, ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = LazyLoadedFrames(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedFrames_addDefaultEOP1980HistoryLoaders(t_LazyLoadedFrames *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.addDefaultEOP1980HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP1980HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedFrames_addDefaultEOP2000HistoryLoaders(t_LazyLoadedFrames *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.addDefaultEOP2000HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP2000HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedFrames_addEOPHistoryLoader(t_LazyLoadedFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::EopHistoryLoader a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::EopHistoryLoader::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(self->object.addEOPHistoryLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEOPHistoryLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedFrames_clearEOPHistoryLoaders(t_LazyLoadedFrames *self)
      {
        OBJ_CALL(self->object.clearEOPHistoryLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedFrames_getEOPHistory(t_LazyLoadedFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getEOPHistory(a0, a1));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedFrames), (PyObject *) self, "getEOPHistory", args, 2);
      }

      static PyObject *t_LazyLoadedFrames_setEOPContinuityThreshold(t_LazyLoadedFrames *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setEOPContinuityThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEOPContinuityThreshold", arg);
        return NULL;
      }

      static int t_LazyLoadedFrames_set__eOPContinuityThreshold(t_LazyLoadedFrames *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setEOPContinuityThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "eOPContinuityThreshold", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/inertia/InertialForces.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace inertia {

        ::java::lang::Class *InertialForces::class$ = NULL;
        jmethodID *InertialForces::mids$ = NULL;
        bool InertialForces::live$ = false;

        jclass InertialForces::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/inertia/InertialForces");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9725b246c9e25f68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InertialForces::InertialForces(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9725b246c9e25f68, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D InertialForces::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D InertialForces::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        jboolean InertialForces::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }

        ::java::util::List InertialForces::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace inertia {
        static PyObject *t_InertialForces_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InertialForces_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InertialForces_init_(t_InertialForces *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InertialForces_acceleration(t_InertialForces *self, PyObject *args);
        static PyObject *t_InertialForces_dependsOnPositionOnly(t_InertialForces *self);
        static PyObject *t_InertialForces_getParametersDrivers(t_InertialForces *self);
        static PyObject *t_InertialForces_get__parametersDrivers(t_InertialForces *self, void *data);
        static PyGetSetDef t_InertialForces__fields_[] = {
          DECLARE_GET_FIELD(t_InertialForces, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InertialForces__methods_[] = {
          DECLARE_METHOD(t_InertialForces, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialForces, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialForces, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_InertialForces, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_InertialForces, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InertialForces)[] = {
          { Py_tp_methods, t_InertialForces__methods_ },
          { Py_tp_init, (void *) t_InertialForces_init_ },
          { Py_tp_getset, t_InertialForces__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InertialForces)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(InertialForces, t_InertialForces, InertialForces);

        void t_InertialForces::install(PyObject *module)
        {
          installType(&PY_TYPE(InertialForces), &PY_TYPE_DEF(InertialForces), module, "InertialForces", 0);
        }

        void t_InertialForces::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialForces), "class_", make_descriptor(InertialForces::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialForces), "wrapfn_", make_descriptor(t_InertialForces::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialForces), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InertialForces_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InertialForces::initializeClass, 1)))
            return NULL;
          return t_InertialForces::wrap_Object(InertialForces(((t_InertialForces *) arg)->object.this$));
        }
        static PyObject *t_InertialForces_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InertialForces::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InertialForces_init_(t_InertialForces *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          InertialForces object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            INT_CALL(object = InertialForces(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InertialForces_acceleration(t_InertialForces *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_InertialForces_dependsOnPositionOnly(t_InertialForces *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_InertialForces_getParametersDrivers(t_InertialForces *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_InertialForces_get__parametersDrivers(t_InertialForces *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *J2SquaredModel::class$ = NULL;
            jmethodID *J2SquaredModel::mids$ = NULL;
            bool J2SquaredModel::live$ = false;

            jclass J2SquaredModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_639aa05fb2436ba0] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_614616a5f895b25b] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > J2SquaredModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_639aa05fb2436ba0], a0.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > J2SquaredModel::computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeMeanEquinoctialSecondOrderTerms_614616a5f895b25b], a0.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_J2SquaredModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_J2SquaredModel_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_J2SquaredModel_computeMeanEquinoctialSecondOrderTerms(t_J2SquaredModel *self, PyObject *args);

            static PyMethodDef t_J2SquaredModel__methods_[] = {
              DECLARE_METHOD(t_J2SquaredModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_J2SquaredModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_J2SquaredModel, computeMeanEquinoctialSecondOrderTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(J2SquaredModel)[] = {
              { Py_tp_methods, t_J2SquaredModel__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(J2SquaredModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(J2SquaredModel, t_J2SquaredModel, J2SquaredModel);

            void t_J2SquaredModel::install(PyObject *module)
            {
              installType(&PY_TYPE(J2SquaredModel), &PY_TYPE_DEF(J2SquaredModel), module, "J2SquaredModel", 0);
            }

            void t_J2SquaredModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(J2SquaredModel), "class_", make_descriptor(J2SquaredModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(J2SquaredModel), "wrapfn_", make_descriptor(t_J2SquaredModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(J2SquaredModel), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_J2SquaredModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, J2SquaredModel::initializeClass, 1)))
                return NULL;
              return t_J2SquaredModel::wrap_Object(J2SquaredModel(((t_J2SquaredModel *) arg)->object.this$));
            }
            static PyObject *t_J2SquaredModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, J2SquaredModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_J2SquaredModel_computeMeanEquinoctialSecondOrderTerms(t_J2SquaredModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::parameters_))
                  {
                    OBJ_CALL(result = self->object.computeMeanEquinoctialSecondOrderTerms(a0));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "computeMeanEquinoctialSecondOrderTerms", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/StorelessCovariance.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/correlation/StorelessCovariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *StorelessCovariance::class$ = NULL;
        jmethodID *StorelessCovariance::mids$ = NULL;
        bool StorelessCovariance::live$ = false;

        jclass StorelessCovariance::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/StorelessCovariance");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_06c90d8be18d8afa] = env->getMethodID(cls, "<init>", "(IZ)V");
            mids$[mid_append_8151927c1ac14952] = env->getMethodID(cls, "append", "(Lorg/hipparchus/stat/correlation/StorelessCovariance;)V");
            mids$[mid_getCovariance_6d920aab27f0a3d2] = env->getMethodID(cls, "getCovariance", "(II)D");
            mids$[mid_getCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getData_eda3f19b8225f78f] = env->getMethodID(cls, "getData", "()[[D");
            mids$[mid_getN_d6ab429752e7c267] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_increment_a71c45509eaf92d1] = env->getMethodID(cls, "increment", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StorelessCovariance::StorelessCovariance(jint a0) : ::org::hipparchus::stat::correlation::Covariance(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

        StorelessCovariance::StorelessCovariance(jint a0, jboolean a1) : ::org::hipparchus::stat::correlation::Covariance(env->newObject(initializeClass, &mids$, mid_init$_06c90d8be18d8afa, a0, a1)) {}

        void StorelessCovariance::append(const StorelessCovariance & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_append_8151927c1ac14952], a0.this$);
        }

        jdouble StorelessCovariance::getCovariance(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCovariance_6d920aab27f0a3d2], a0, a1);
        }

        ::org::hipparchus::linear::RealMatrix StorelessCovariance::getCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_b2eebabce70526d8]));
        }

        JArray< JArray< jdouble > > StorelessCovariance::getData() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_eda3f19b8225f78f]));
        }

        jint StorelessCovariance::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_d6ab429752e7c267]);
        }

        void StorelessCovariance::increment(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_a71c45509eaf92d1], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {
        static PyObject *t_StorelessCovariance_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessCovariance_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StorelessCovariance_init_(t_StorelessCovariance *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StorelessCovariance_append(t_StorelessCovariance *self, PyObject *arg);
        static PyObject *t_StorelessCovariance_getCovariance(t_StorelessCovariance *self, PyObject *args);
        static PyObject *t_StorelessCovariance_getCovarianceMatrix(t_StorelessCovariance *self, PyObject *args);
        static PyObject *t_StorelessCovariance_getData(t_StorelessCovariance *self);
        static PyObject *t_StorelessCovariance_getN(t_StorelessCovariance *self, PyObject *args);
        static PyObject *t_StorelessCovariance_increment(t_StorelessCovariance *self, PyObject *arg);
        static PyObject *t_StorelessCovariance_get__covarianceMatrix(t_StorelessCovariance *self, void *data);
        static PyObject *t_StorelessCovariance_get__data(t_StorelessCovariance *self, void *data);
        static PyObject *t_StorelessCovariance_get__n(t_StorelessCovariance *self, void *data);
        static PyGetSetDef t_StorelessCovariance__fields_[] = {
          DECLARE_GET_FIELD(t_StorelessCovariance, covarianceMatrix),
          DECLARE_GET_FIELD(t_StorelessCovariance, data),
          DECLARE_GET_FIELD(t_StorelessCovariance, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StorelessCovariance__methods_[] = {
          DECLARE_METHOD(t_StorelessCovariance, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessCovariance, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessCovariance, append, METH_O),
          DECLARE_METHOD(t_StorelessCovariance, getCovariance, METH_VARARGS),
          DECLARE_METHOD(t_StorelessCovariance, getCovarianceMatrix, METH_VARARGS),
          DECLARE_METHOD(t_StorelessCovariance, getData, METH_NOARGS),
          DECLARE_METHOD(t_StorelessCovariance, getN, METH_VARARGS),
          DECLARE_METHOD(t_StorelessCovariance, increment, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StorelessCovariance)[] = {
          { Py_tp_methods, t_StorelessCovariance__methods_ },
          { Py_tp_init, (void *) t_StorelessCovariance_init_ },
          { Py_tp_getset, t_StorelessCovariance__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StorelessCovariance)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::correlation::Covariance),
          NULL
        };

        DEFINE_TYPE(StorelessCovariance, t_StorelessCovariance, StorelessCovariance);

        void t_StorelessCovariance::install(PyObject *module)
        {
          installType(&PY_TYPE(StorelessCovariance), &PY_TYPE_DEF(StorelessCovariance), module, "StorelessCovariance", 0);
        }

        void t_StorelessCovariance::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessCovariance), "class_", make_descriptor(StorelessCovariance::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessCovariance), "wrapfn_", make_descriptor(t_StorelessCovariance::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessCovariance), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StorelessCovariance_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StorelessCovariance::initializeClass, 1)))
            return NULL;
          return t_StorelessCovariance::wrap_Object(StorelessCovariance(((t_StorelessCovariance *) arg)->object.this$));
        }
        static PyObject *t_StorelessCovariance_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StorelessCovariance::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StorelessCovariance_init_(t_StorelessCovariance *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jint a0;
              StorelessCovariance object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = StorelessCovariance(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jint a0;
              jboolean a1;
              StorelessCovariance object((jobject) NULL);

              if (!parseArgs(args, "IZ", &a0, &a1))
              {
                INT_CALL(object = StorelessCovariance(a0, a1));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_StorelessCovariance_append(t_StorelessCovariance *self, PyObject *arg)
        {
          StorelessCovariance a0((jobject) NULL);

          if (!parseArg(arg, "k", StorelessCovariance::initializeClass, &a0))
          {
            OBJ_CALL(self->object.append(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "append", arg);
          return NULL;
        }

        static PyObject *t_StorelessCovariance_getCovariance(t_StorelessCovariance *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getCovariance(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getCovariance", args);
          return NULL;
        }

        static PyObject *t_StorelessCovariance_getCovarianceMatrix(t_StorelessCovariance *self, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getCovarianceMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(StorelessCovariance), (PyObject *) self, "getCovarianceMatrix", args, 2);
        }

        static PyObject *t_StorelessCovariance_getData(t_StorelessCovariance *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_StorelessCovariance_getN(t_StorelessCovariance *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getN());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(StorelessCovariance), (PyObject *) self, "getN", args, 2);
        }

        static PyObject *t_StorelessCovariance_increment(t_StorelessCovariance *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(self->object.increment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "increment", arg);
          return NULL;
        }

        static PyObject *t_StorelessCovariance_get__covarianceMatrix(t_StorelessCovariance *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_StorelessCovariance_get__data(t_StorelessCovariance *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getData());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_StorelessCovariance_get__n(t_StorelessCovariance *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/LinearConstraintSet.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/util/Collection.h"
#include "org/hipparchus/optim/linear/LinearConstraint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *LinearConstraintSet::class$ = NULL;
        jmethodID *LinearConstraintSet::mids$ = NULL;
        bool LinearConstraintSet::live$ = false;

        jclass LinearConstraintSet::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/LinearConstraintSet");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_94d292d8c76cff99] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/optim/linear/LinearConstraint;)V");
            mids$[mid_init$_82af91bc8dfb5029] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
            mids$[mid_getConstraints_3bfef5c77ceb081a] = env->getMethodID(cls, "getConstraints", "()Ljava/util/Collection;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearConstraintSet::LinearConstraintSet(const JArray< ::org::hipparchus::optim::linear::LinearConstraint > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_94d292d8c76cff99, a0.this$)) {}

        LinearConstraintSet::LinearConstraintSet(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_82af91bc8dfb5029, a0.this$)) {}

        ::java::util::Collection LinearConstraintSet::getConstraints() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getConstraints_3bfef5c77ceb081a]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {
        static PyObject *t_LinearConstraintSet_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearConstraintSet_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearConstraintSet_init_(t_LinearConstraintSet *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearConstraintSet_getConstraints(t_LinearConstraintSet *self);
        static PyObject *t_LinearConstraintSet_get__constraints(t_LinearConstraintSet *self, void *data);
        static PyGetSetDef t_LinearConstraintSet__fields_[] = {
          DECLARE_GET_FIELD(t_LinearConstraintSet, constraints),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LinearConstraintSet__methods_[] = {
          DECLARE_METHOD(t_LinearConstraintSet, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraintSet, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraintSet, getConstraints, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearConstraintSet)[] = {
          { Py_tp_methods, t_LinearConstraintSet__methods_ },
          { Py_tp_init, (void *) t_LinearConstraintSet_init_ },
          { Py_tp_getset, t_LinearConstraintSet__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearConstraintSet)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearConstraintSet, t_LinearConstraintSet, LinearConstraintSet);

        void t_LinearConstraintSet::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearConstraintSet), &PY_TYPE_DEF(LinearConstraintSet), module, "LinearConstraintSet", 0);
        }

        void t_LinearConstraintSet::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraintSet), "class_", make_descriptor(LinearConstraintSet::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraintSet), "wrapfn_", make_descriptor(t_LinearConstraintSet::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraintSet), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearConstraintSet_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearConstraintSet::initializeClass, 1)))
            return NULL;
          return t_LinearConstraintSet::wrap_Object(LinearConstraintSet(((t_LinearConstraintSet *) arg)->object.this$));
        }
        static PyObject *t_LinearConstraintSet_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearConstraintSet::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearConstraintSet_init_(t_LinearConstraintSet *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::hipparchus::optim::linear::LinearConstraint > a0((jobject) NULL);
              LinearConstraintSet object((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::linear::LinearConstraint::initializeClass, &a0))
              {
                INT_CALL(object = LinearConstraintSet(a0));
                self->object = object;
                break;
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              LinearConstraintSet object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                INT_CALL(object = LinearConstraintSet(a0));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LinearConstraintSet_getConstraints(t_LinearConstraintSet *self)
        {
          ::java::util::Collection result((jobject) NULL);
          OBJ_CALL(result = self->object.getConstraints());
          return ::java::util::t_Collection::wrap_Object(result, ::org::hipparchus::optim::linear::PY_TYPE(LinearConstraint));
        }

        static PyObject *t_LinearConstraintSet_get__constraints(t_LinearConstraintSet *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getConstraints());
          return ::java::util::t_Collection::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonAbstractPropagatorConverter.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonAbstractPropagatorConverter::class$ = NULL;
        jmethodID *PythonAbstractPropagatorConverter::mids$ = NULL;
        bool PythonAbstractPropagatorConverter::live$ = false;

        jclass PythonAbstractPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonAbstractPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_11ca02e6564da71d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;DI)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getModel_b9638c47db64ddc7] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_getObjectiveFunction_0a4097997512db0b] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractPropagatorConverter::PythonAbstractPropagatorConverter(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, jdouble a1, jint a2) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(env->newObject(initializeClass, &mids$, mid_init$_11ca02e6564da71d, a0.this$, a1, a2)) {}

        void PythonAbstractPropagatorConverter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAbstractPropagatorConverter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAbstractPropagatorConverter::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        static PyObject *t_PythonAbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractPropagatorConverter_init_(t_PythonAbstractPropagatorConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractPropagatorConverter_finalize(t_PythonAbstractPropagatorConverter *self);
        static PyObject *t_PythonAbstractPropagatorConverter_pythonExtension(t_PythonAbstractPropagatorConverter *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractPropagatorConverter_getModel0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractPropagatorConverter_getObjectiveFunction1(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractPropagatorConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractPropagatorConverter_get__self(t_PythonAbstractPropagatorConverter *self, void *data);
        static PyGetSetDef t_PythonAbstractPropagatorConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractPropagatorConverter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractPropagatorConverter)[] = {
          { Py_tp_methods, t_PythonAbstractPropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractPropagatorConverter_init_ },
          { Py_tp_getset, t_PythonAbstractPropagatorConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractPropagatorConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorConverter),
          NULL
        };

        DEFINE_TYPE(PythonAbstractPropagatorConverter, t_PythonAbstractPropagatorConverter, PythonAbstractPropagatorConverter);

        void t_PythonAbstractPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractPropagatorConverter), &PY_TYPE_DEF(PythonAbstractPropagatorConverter), module, "PythonAbstractPropagatorConverter", 1);
        }

        void t_PythonAbstractPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorConverter), "class_", make_descriptor(PythonAbstractPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorConverter), "wrapfn_", make_descriptor(t_PythonAbstractPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorConverter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractPropagatorConverter::initializeClass);
          JNINativeMethod methods[] = {
            { "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;", (void *) t_PythonAbstractPropagatorConverter_getModel0 },
            { "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;", (void *) t_PythonAbstractPropagatorConverter_getObjectiveFunction1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractPropagatorConverter_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractPropagatorConverter::wrap_Object(PythonAbstractPropagatorConverter(((t_PythonAbstractPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractPropagatorConverter_init_(t_PythonAbstractPropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          jdouble a1;
          jint a2;
          PythonAbstractPropagatorConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PythonAbstractPropagatorConverter(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAbstractPropagatorConverter_finalize(t_PythonAbstractPropagatorConverter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractPropagatorConverter_pythonExtension(t_PythonAbstractPropagatorConverter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonAbstractPropagatorConverter_getModel0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getModel", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, &value))
          {
            throwTypeError("getModel", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonAbstractPropagatorConverter_getObjectiveFunction1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::analysis::MultivariateVectorFunction value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObjectiveFunction", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &value))
          {
            throwTypeError("getObjectiveFunction", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonAbstractPropagatorConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractPropagatorConverter_get__self(t_PythonAbstractPropagatorConverter *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AltCovarianceType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/AltCovarianceType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AltCovarianceType::class$ = NULL;
            jmethodID *AltCovarianceType::mids$ = NULL;
            bool AltCovarianceType::live$ = false;
            AltCovarianceType *AltCovarianceType::CSIG3EIGVEC3 = NULL;
            AltCovarianceType *AltCovarianceType::XYZ = NULL;

            jclass AltCovarianceType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AltCovarianceType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_1921a40c4d892594] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;");
                mids$[mid_values_9ede11f9e03464a7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CSIG3EIGVEC3 = new AltCovarianceType(env->getStaticObjectField(cls, "CSIG3EIGVEC3", "Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;"));
                XYZ = new AltCovarianceType(env->getStaticObjectField(cls, "XYZ", "Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AltCovarianceType AltCovarianceType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AltCovarianceType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1921a40c4d892594], a0.this$));
            }

            JArray< AltCovarianceType > AltCovarianceType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AltCovarianceType >(env->callStaticObjectMethod(cls, mids$[mid_values_9ede11f9e03464a7]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_AltCovarianceType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AltCovarianceType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AltCovarianceType_of_(t_AltCovarianceType *self, PyObject *args);
            static PyObject *t_AltCovarianceType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AltCovarianceType_values(PyTypeObject *type);
            static PyObject *t_AltCovarianceType_get__parameters_(t_AltCovarianceType *self, void *data);
            static PyGetSetDef t_AltCovarianceType__fields_[] = {
              DECLARE_GET_FIELD(t_AltCovarianceType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AltCovarianceType__methods_[] = {
              DECLARE_METHOD(t_AltCovarianceType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AltCovarianceType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AltCovarianceType, of_, METH_VARARGS),
              DECLARE_METHOD(t_AltCovarianceType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AltCovarianceType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AltCovarianceType)[] = {
              { Py_tp_methods, t_AltCovarianceType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AltCovarianceType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AltCovarianceType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AltCovarianceType, t_AltCovarianceType, AltCovarianceType);
            PyObject *t_AltCovarianceType::wrap_Object(const AltCovarianceType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AltCovarianceType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AltCovarianceType *self = (t_AltCovarianceType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AltCovarianceType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AltCovarianceType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AltCovarianceType *self = (t_AltCovarianceType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AltCovarianceType::install(PyObject *module)
            {
              installType(&PY_TYPE(AltCovarianceType), &PY_TYPE_DEF(AltCovarianceType), module, "AltCovarianceType", 0);
            }

            void t_AltCovarianceType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "class_", make_descriptor(AltCovarianceType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "wrapfn_", make_descriptor(t_AltCovarianceType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "boxfn_", make_descriptor(boxObject));
              env->getClass(AltCovarianceType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "CSIG3EIGVEC3", make_descriptor(t_AltCovarianceType::wrap_Object(*AltCovarianceType::CSIG3EIGVEC3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AltCovarianceType), "XYZ", make_descriptor(t_AltCovarianceType::wrap_Object(*AltCovarianceType::XYZ)));
            }

            static PyObject *t_AltCovarianceType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AltCovarianceType::initializeClass, 1)))
                return NULL;
              return t_AltCovarianceType::wrap_Object(AltCovarianceType(((t_AltCovarianceType *) arg)->object.this$));
            }
            static PyObject *t_AltCovarianceType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AltCovarianceType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AltCovarianceType_of_(t_AltCovarianceType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AltCovarianceType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AltCovarianceType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::valueOf(a0));
                return t_AltCovarianceType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AltCovarianceType_values(PyTypeObject *type)
            {
              JArray< AltCovarianceType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::values());
              return JArray<jobject>(result.this$).wrap(t_AltCovarianceType::wrap_jobject);
            }
            static PyObject *t_AltCovarianceType_get__parameters_(t_AltCovarianceType *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {

          ::java::lang::Class *ParsedMessage::class$ = NULL;
          jmethodID *ParsedMessage::mids$ = NULL;
          bool ParsedMessage::live$ = false;

          jclass ParsedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ParsedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getTypeCode_d6ab429752e7c267] = env->getMethodID(cls, "getTypeCode", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint ParsedMessage::getTypeCode() const
          {
            return env->callIntMethod(this$, mids$[mid_getTypeCode_d6ab429752e7c267]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          static PyObject *t_ParsedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedMessage_getTypeCode(t_ParsedMessage *self);
          static PyObject *t_ParsedMessage_get__typeCode(t_ParsedMessage *self, void *data);
          static PyGetSetDef t_ParsedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_ParsedMessage, typeCode),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ParsedMessage__methods_[] = {
            DECLARE_METHOD(t_ParsedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedMessage, getTypeCode, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ParsedMessage)[] = {
            { Py_tp_methods, t_ParsedMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ParsedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ParsedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ParsedMessage, t_ParsedMessage, ParsedMessage);

          void t_ParsedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(ParsedMessage), &PY_TYPE_DEF(ParsedMessage), module, "ParsedMessage", 0);
          }

          void t_ParsedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedMessage), "class_", make_descriptor(ParsedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedMessage), "wrapfn_", make_descriptor(t_ParsedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ParsedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ParsedMessage::initializeClass, 1)))
              return NULL;
            return t_ParsedMessage::wrap_Object(ParsedMessage(((t_ParsedMessage *) arg)->object.this$));
          }
          static PyObject *t_ParsedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ParsedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ParsedMessage_getTypeCode(t_ParsedMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTypeCode());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ParsedMessage_get__typeCode(t_ParsedMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTypeCode());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonAbstractMultipleShooting.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonAbstractMultipleShooting::class$ = NULL;
      jmethodID *PythonAbstractMultipleShooting::mids$ = NULL;
      bool PythonAbstractMultipleShooting::live$ = false;

      jclass PythonAbstractMultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonAbstractMultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_05850f9fd1cddc8a] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;DIZLjava/lang/String;)V");
          mids$[mid_computeAdditionalConstraints_f7899d4480f6af2b] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
          mids$[mid_computeAdditionalJacobianMatrix_f1fb8031f2a01da7] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAugmentedInitialState_bc8abbf0245ce660] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractMultipleShooting::PythonAbstractMultipleShooting(const ::java::util::List & a0, const ::java::util::List & a1, jdouble a2, jint a3, jboolean a4, const ::java::lang::String & a5) : ::org::orekit::utils::AbstractMultipleShooting(env->newObject(initializeClass, &mids$, mid_init$_05850f9fd1cddc8a, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

      void PythonAbstractMultipleShooting::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonAbstractMultipleShooting::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonAbstractMultipleShooting::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_PythonAbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractMultipleShooting_init_(t_PythonAbstractMultipleShooting *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractMultipleShooting_finalize(t_PythonAbstractMultipleShooting *self);
      static PyObject *t_PythonAbstractMultipleShooting_pythonExtension(t_PythonAbstractMultipleShooting *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractMultipleShooting_computeAdditionalConstraints0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractMultipleShooting_computeAdditionalJacobianMatrix1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractMultipleShooting_getAugmentedInitialState2(JNIEnv *jenv, jobject jobj, jint a0);
      static void JNICALL t_PythonAbstractMultipleShooting_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractMultipleShooting_get__self(t_PythonAbstractMultipleShooting *self, void *data);
      static PyGetSetDef t_PythonAbstractMultipleShooting__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractMultipleShooting, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractMultipleShooting__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractMultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMultipleShooting, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractMultipleShooting, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMultipleShooting)[] = {
        { Py_tp_methods, t_PythonAbstractMultipleShooting__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractMultipleShooting_init_ },
        { Py_tp_getset, t_PythonAbstractMultipleShooting__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractMultipleShooting)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::AbstractMultipleShooting),
        NULL
      };

      DEFINE_TYPE(PythonAbstractMultipleShooting, t_PythonAbstractMultipleShooting, PythonAbstractMultipleShooting);

      void t_PythonAbstractMultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractMultipleShooting), &PY_TYPE_DEF(PythonAbstractMultipleShooting), module, "PythonAbstractMultipleShooting", 1);
      }

      void t_PythonAbstractMultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMultipleShooting), "class_", make_descriptor(PythonAbstractMultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMultipleShooting), "wrapfn_", make_descriptor(t_PythonAbstractMultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMultipleShooting), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractMultipleShooting::initializeClass);
        JNINativeMethod methods[] = {
          { "computeAdditionalConstraints", "(Ljava/util/List;)[D", (void *) t_PythonAbstractMultipleShooting_computeAdditionalConstraints0 },
          { "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D", (void *) t_PythonAbstractMultipleShooting_computeAdditionalJacobianMatrix1 },
          { "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonAbstractMultipleShooting_getAugmentedInitialState2 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractMultipleShooting_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonAbstractMultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractMultipleShooting::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractMultipleShooting::wrap_Object(PythonAbstractMultipleShooting(((t_PythonAbstractMultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractMultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractMultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractMultipleShooting_init_(t_PythonAbstractMultipleShooting *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        jint a3;
        jboolean a4;
        ::java::lang::String a5((jobject) NULL);
        PythonAbstractMultipleShooting object((jobject) NULL);

        if (!parseArgs(args, "KKDIZs", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &a4, &a5))
        {
          INT_CALL(object = PythonAbstractMultipleShooting(a0, a1, a2, a3, a4, a5));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractMultipleShooting_finalize(t_PythonAbstractMultipleShooting *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractMultipleShooting_pythonExtension(t_PythonAbstractMultipleShooting *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonAbstractMultipleShooting_computeAdditionalConstraints0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
        PyObject *result = PyObject_CallMethod(obj, "computeAdditionalConstraints", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("computeAdditionalConstraints", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractMultipleShooting_computeAdditionalJacobianMatrix1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
        PyObject *result = PyObject_CallMethod(obj, "computeAdditionalJacobianMatrix", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeAdditionalJacobianMatrix", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractMultipleShooting_getAugmentedInitialState2(JNIEnv *jenv, jobject jobj, jint a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAugmentedInitialState", "i", (int) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("getAugmentedInitialState", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonAbstractMultipleShooting_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractMultipleShooting_get__self(t_PythonAbstractMultipleShooting *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *StepNormalizerMode::class$ = NULL;
        jmethodID *StepNormalizerMode::mids$ = NULL;
        bool StepNormalizerMode::live$ = false;
        StepNormalizerMode *StepNormalizerMode::INCREMENT = NULL;
        StepNormalizerMode *StepNormalizerMode::MULTIPLES = NULL;

        jclass StepNormalizerMode::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/StepNormalizerMode");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_1519a6efcf9d378b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/sampling/StepNormalizerMode;");
            mids$[mid_values_87e05c658cf2e115] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/sampling/StepNormalizerMode;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            INCREMENT = new StepNormalizerMode(env->getStaticObjectField(cls, "INCREMENT", "Lorg/hipparchus/ode/sampling/StepNormalizerMode;"));
            MULTIPLES = new StepNormalizerMode(env->getStaticObjectField(cls, "MULTIPLES", "Lorg/hipparchus/ode/sampling/StepNormalizerMode;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepNormalizerMode StepNormalizerMode::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StepNormalizerMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1519a6efcf9d378b], a0.this$));
        }

        JArray< StepNormalizerMode > StepNormalizerMode::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< StepNormalizerMode >(env->callStaticObjectMethod(cls, mids$[mid_values_87e05c658cf2e115]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        static PyObject *t_StepNormalizerMode_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizerMode_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizerMode_of_(t_StepNormalizerMode *self, PyObject *args);
        static PyObject *t_StepNormalizerMode_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_StepNormalizerMode_values(PyTypeObject *type);
        static PyObject *t_StepNormalizerMode_get__parameters_(t_StepNormalizerMode *self, void *data);
        static PyGetSetDef t_StepNormalizerMode__fields_[] = {
          DECLARE_GET_FIELD(t_StepNormalizerMode, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepNormalizerMode__methods_[] = {
          DECLARE_METHOD(t_StepNormalizerMode, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerMode, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerMode, of_, METH_VARARGS),
          DECLARE_METHOD(t_StepNormalizerMode, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerMode, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepNormalizerMode)[] = {
          { Py_tp_methods, t_StepNormalizerMode__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StepNormalizerMode__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepNormalizerMode)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(StepNormalizerMode, t_StepNormalizerMode, StepNormalizerMode);
        PyObject *t_StepNormalizerMode::wrap_Object(const StepNormalizerMode& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StepNormalizerMode::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StepNormalizerMode *self = (t_StepNormalizerMode *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_StepNormalizerMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StepNormalizerMode::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StepNormalizerMode *self = (t_StepNormalizerMode *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_StepNormalizerMode::install(PyObject *module)
        {
          installType(&PY_TYPE(StepNormalizerMode), &PY_TYPE_DEF(StepNormalizerMode), module, "StepNormalizerMode", 0);
        }

        void t_StepNormalizerMode::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "class_", make_descriptor(StepNormalizerMode::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "wrapfn_", make_descriptor(t_StepNormalizerMode::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "boxfn_", make_descriptor(boxObject));
          env->getClass(StepNormalizerMode::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "INCREMENT", make_descriptor(t_StepNormalizerMode::wrap_Object(*StepNormalizerMode::INCREMENT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "MULTIPLES", make_descriptor(t_StepNormalizerMode::wrap_Object(*StepNormalizerMode::MULTIPLES)));
        }

        static PyObject *t_StepNormalizerMode_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepNormalizerMode::initializeClass, 1)))
            return NULL;
          return t_StepNormalizerMode::wrap_Object(StepNormalizerMode(((t_StepNormalizerMode *) arg)->object.this$));
        }
        static PyObject *t_StepNormalizerMode_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepNormalizerMode::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StepNormalizerMode_of_(t_StepNormalizerMode *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_StepNormalizerMode_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          StepNormalizerMode result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::sampling::StepNormalizerMode::valueOf(a0));
            return t_StepNormalizerMode::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_StepNormalizerMode_values(PyTypeObject *type)
        {
          JArray< StepNormalizerMode > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::sampling::StepNormalizerMode::values());
          return JArray<jobject>(result.this$).wrap(t_StepNormalizerMode::wrap_jobject);
        }
        static PyObject *t_StepNormalizerMode_get__parameters_(t_StepNormalizerMode *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/time/OffsetModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIOffsetsLoader::class$ = NULL;
      jmethodID *UTCTAIOffsetsLoader::mids$ = NULL;
      bool UTCTAIOffsetsLoader::live$ = false;

      jclass UTCTAIOffsetsLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIOffsetsLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_loadOffsets_d751c1a57012b438] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List UTCTAIOffsetsLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_d751c1a57012b438]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_UTCTAIOffsetsLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader_loadOffsets(t_UTCTAIOffsetsLoader *self);

      static PyMethodDef t_UTCTAIOffsetsLoader__methods_[] = {
        DECLARE_METHOD(t_UTCTAIOffsetsLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIOffsetsLoader)[] = {
        { Py_tp_methods, t_UTCTAIOffsetsLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIOffsetsLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIOffsetsLoader, t_UTCTAIOffsetsLoader, UTCTAIOffsetsLoader);

      void t_UTCTAIOffsetsLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIOffsetsLoader), &PY_TYPE_DEF(UTCTAIOffsetsLoader), module, "UTCTAIOffsetsLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader), "Parser", make_descriptor(&PY_TYPE_DEF(UTCTAIOffsetsLoader$Parser)));
      }

      void t_UTCTAIOffsetsLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader), "class_", make_descriptor(UTCTAIOffsetsLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader), "wrapfn_", make_descriptor(t_UTCTAIOffsetsLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIOffsetsLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIOffsetsLoader::initializeClass, 1)))
          return NULL;
        return t_UTCTAIOffsetsLoader::wrap_Object(UTCTAIOffsetsLoader(((t_UTCTAIOffsetsLoader *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIOffsetsLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIOffsetsLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCTAIOffsetsLoader_loadOffsets(t_UTCTAIOffsetsLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexSecondaryODE.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexSecondaryODE::class$ = NULL;
      jmethodID *ComplexSecondaryODE::mids$ = NULL;
      bool ComplexSecondaryODE::live$ = false;

      jclass ComplexSecondaryODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexSecondaryODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_6330323c2f2c76f5] = env->getMethodID(cls, "computeDerivatives", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_5dda32ee51117b07] = env->getMethodID(cls, "init", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexSecondaryODE::computeDerivatives(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2, const JArray< ::org::hipparchus::complex::Complex > & a3) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_6330323c2f2c76f5], a0, a1.this$, a2.this$, a3.this$));
      }

      jint ComplexSecondaryODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      void ComplexSecondaryODE::init(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2, jdouble a3) const
      {
        env->callVoidMethod(this$, mids$[mid_init_5dda32ee51117b07], a0, a1.this$, a2.this$, a3);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_ComplexSecondaryODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexSecondaryODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexSecondaryODE_computeDerivatives(t_ComplexSecondaryODE *self, PyObject *args);
      static PyObject *t_ComplexSecondaryODE_getDimension(t_ComplexSecondaryODE *self);
      static PyObject *t_ComplexSecondaryODE_init(t_ComplexSecondaryODE *self, PyObject *args);
      static PyObject *t_ComplexSecondaryODE_get__dimension(t_ComplexSecondaryODE *self, void *data);
      static PyGetSetDef t_ComplexSecondaryODE__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexSecondaryODE, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexSecondaryODE__methods_[] = {
        DECLARE_METHOD(t_ComplexSecondaryODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexSecondaryODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexSecondaryODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_ComplexSecondaryODE, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexSecondaryODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexSecondaryODE)[] = {
        { Py_tp_methods, t_ComplexSecondaryODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ComplexSecondaryODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexSecondaryODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexSecondaryODE, t_ComplexSecondaryODE, ComplexSecondaryODE);

      void t_ComplexSecondaryODE::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexSecondaryODE), &PY_TYPE_DEF(ComplexSecondaryODE), module, "ComplexSecondaryODE", 0);
      }

      void t_ComplexSecondaryODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexSecondaryODE), "class_", make_descriptor(ComplexSecondaryODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexSecondaryODE), "wrapfn_", make_descriptor(t_ComplexSecondaryODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexSecondaryODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexSecondaryODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexSecondaryODE::initializeClass, 1)))
          return NULL;
        return t_ComplexSecondaryODE::wrap_Object(ComplexSecondaryODE(((t_ComplexSecondaryODE *) arg)->object.this$));
      }
      static PyObject *t_ComplexSecondaryODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexSecondaryODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexSecondaryODE_computeDerivatives(t_ComplexSecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > a3((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArgs(args, "D[k[k[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1, a2, a3));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_ComplexSecondaryODE_getDimension(t_ComplexSecondaryODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexSecondaryODE_init(t_ComplexSecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
        jdouble a3;

        if (!parseArgs(args, "D[k[kD", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.init(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ComplexSecondaryODE_get__dimension(t_ComplexSecondaryODE *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/OptimizationProblem.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Incrementor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *OptimizationProblem::class$ = NULL;
      jmethodID *OptimizationProblem::mids$ = NULL;
      bool OptimizationProblem::live$ = false;

      jclass OptimizationProblem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/OptimizationProblem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConvergenceChecker_ecb318336ebe4cc7] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
          mids$[mid_getEvaluationCounter_286bd168b7e14166] = env->getMethodID(cls, "getEvaluationCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_getIterationCounter_286bd168b7e14166] = env->getMethodID(cls, "getIterationCounter", "()Lorg/hipparchus/util/Incrementor;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::optim::ConvergenceChecker OptimizationProblem::getConvergenceChecker() const
      {
        return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_ecb318336ebe4cc7]));
      }

      ::org::hipparchus::util::Incrementor OptimizationProblem::getEvaluationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getEvaluationCounter_286bd168b7e14166]));
      }

      ::org::hipparchus::util::Incrementor OptimizationProblem::getIterationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getIterationCounter_286bd168b7e14166]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_OptimizationProblem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OptimizationProblem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OptimizationProblem_of_(t_OptimizationProblem *self, PyObject *args);
      static PyObject *t_OptimizationProblem_getConvergenceChecker(t_OptimizationProblem *self);
      static PyObject *t_OptimizationProblem_getEvaluationCounter(t_OptimizationProblem *self);
      static PyObject *t_OptimizationProblem_getIterationCounter(t_OptimizationProblem *self);
      static PyObject *t_OptimizationProblem_get__convergenceChecker(t_OptimizationProblem *self, void *data);
      static PyObject *t_OptimizationProblem_get__evaluationCounter(t_OptimizationProblem *self, void *data);
      static PyObject *t_OptimizationProblem_get__iterationCounter(t_OptimizationProblem *self, void *data);
      static PyObject *t_OptimizationProblem_get__parameters_(t_OptimizationProblem *self, void *data);
      static PyGetSetDef t_OptimizationProblem__fields_[] = {
        DECLARE_GET_FIELD(t_OptimizationProblem, convergenceChecker),
        DECLARE_GET_FIELD(t_OptimizationProblem, evaluationCounter),
        DECLARE_GET_FIELD(t_OptimizationProblem, iterationCounter),
        DECLARE_GET_FIELD(t_OptimizationProblem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OptimizationProblem__methods_[] = {
        DECLARE_METHOD(t_OptimizationProblem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OptimizationProblem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OptimizationProblem, of_, METH_VARARGS),
        DECLARE_METHOD(t_OptimizationProblem, getConvergenceChecker, METH_NOARGS),
        DECLARE_METHOD(t_OptimizationProblem, getEvaluationCounter, METH_NOARGS),
        DECLARE_METHOD(t_OptimizationProblem, getIterationCounter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OptimizationProblem)[] = {
        { Py_tp_methods, t_OptimizationProblem__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OptimizationProblem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OptimizationProblem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OptimizationProblem, t_OptimizationProblem, OptimizationProblem);
      PyObject *t_OptimizationProblem::wrap_Object(const OptimizationProblem& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OptimizationProblem::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OptimizationProblem *self = (t_OptimizationProblem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OptimizationProblem::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OptimizationProblem::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OptimizationProblem *self = (t_OptimizationProblem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OptimizationProblem::install(PyObject *module)
      {
        installType(&PY_TYPE(OptimizationProblem), &PY_TYPE_DEF(OptimizationProblem), module, "OptimizationProblem", 0);
      }

      void t_OptimizationProblem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblem), "class_", make_descriptor(OptimizationProblem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblem), "wrapfn_", make_descriptor(t_OptimizationProblem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OptimizationProblem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OptimizationProblem::initializeClass, 1)))
          return NULL;
        return t_OptimizationProblem::wrap_Object(OptimizationProblem(((t_OptimizationProblem *) arg)->object.this$));
      }
      static PyObject *t_OptimizationProblem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OptimizationProblem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OptimizationProblem_of_(t_OptimizationProblem *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OptimizationProblem_getConvergenceChecker(t_OptimizationProblem *self)
      {
        ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
        OBJ_CALL(result = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_OptimizationProblem_getEvaluationCounter(t_OptimizationProblem *self)
      {
        ::org::hipparchus::util::Incrementor result((jobject) NULL);
        OBJ_CALL(result = self->object.getEvaluationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
      }

      static PyObject *t_OptimizationProblem_getIterationCounter(t_OptimizationProblem *self)
      {
        ::org::hipparchus::util::Incrementor result((jobject) NULL);
        OBJ_CALL(result = self->object.getIterationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
      }
      static PyObject *t_OptimizationProblem_get__parameters_(t_OptimizationProblem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OptimizationProblem_get__convergenceChecker(t_OptimizationProblem *self, void *data)
      {
        ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
        OBJ_CALL(value = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
      }

      static PyObject *t_OptimizationProblem_get__evaluationCounter(t_OptimizationProblem *self, void *data)
      {
        ::org::hipparchus::util::Incrementor value((jobject) NULL);
        OBJ_CALL(value = self->object.getEvaluationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
      }

      static PyObject *t_OptimizationProblem_get__iterationCounter(t_OptimizationProblem *self, void *data)
      {
        ::org::hipparchus::util::Incrementor value((jobject) NULL);
        OBJ_CALL(value = self->object.getIterationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldVector::class$ = NULL;
      jmethodID *FieldVector::mids$ = NULL;
      bool FieldVector::live$ = false;

      jclass FieldVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_17fc5256c635037d] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_9576e351eaaaeeff] = env->getMethodID(cls, "append", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_17fc5256c635037d] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_copy_1f378a1e2fafd4da] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_dotProduct_a09dcda702fd70fc] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_ebeDivide_17fc5256c635037d] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_ebeMultiply_17fc5256c635037d] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getEntry_bae57aba20797b29] = env->getMethodID(cls, "getEntry", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getSubVector_ae1290ffdac268ed] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapAdd_9576e351eaaaeeff] = env->getMethodID(cls, "mapAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapAddToSelf_9576e351eaaaeeff] = env->getMethodID(cls, "mapAddToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivide_9576e351eaaaeeff] = env->getMethodID(cls, "mapDivide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivideToSelf_9576e351eaaaeeff] = env->getMethodID(cls, "mapDivideToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInv_1f378a1e2fafd4da] = env->getMethodID(cls, "mapInv", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInvToSelf_1f378a1e2fafd4da] = env->getMethodID(cls, "mapInvToSelf", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiply_9576e351eaaaeeff] = env->getMethodID(cls, "mapMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiplyToSelf_9576e351eaaaeeff] = env->getMethodID(cls, "mapMultiplyToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtract_9576e351eaaaeeff] = env->getMethodID(cls, "mapSubtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtractToSelf_9576e351eaaaeeff] = env->getMethodID(cls, "mapSubtractToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_outerProduct_352168969c692677] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_projection_17fc5256c635037d] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_set_d6f1e197c99df44f] = env->getMethodID(cls, "set", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setEntry_9f3b43c70febfa9a] = env->getMethodID(cls, "setEntry", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubVector_9f6a0cf723c2763b] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_subtract_17fc5256c635037d] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_toArray_eb5e61f0a5585705] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldVector FieldVector::add(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_add_17fc5256c635037d], a0.this$));
      }

      FieldVector FieldVector::append(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_append_9576e351eaaaeeff], a0.this$));
      }

      FieldVector FieldVector::append(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_append_17fc5256c635037d], a0.this$));
      }

      FieldVector FieldVector::copy() const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_copy_1f378a1e2fafd4da]));
      }

      ::org::hipparchus::FieldElement FieldVector::dotProduct(const FieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_a09dcda702fd70fc], a0.this$));
      }

      FieldVector FieldVector::ebeDivide(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_17fc5256c635037d], a0.this$));
      }

      FieldVector FieldVector::ebeMultiply(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_17fc5256c635037d], a0.this$));
      }

      jint FieldVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::FieldElement FieldVector::getEntry(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_bae57aba20797b29], a0));
      }

      ::org::hipparchus::Field FieldVector::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
      }

      FieldVector FieldVector::getSubVector(jint a0, jint a1) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_getSubVector_ae1290ffdac268ed], a0, a1));
      }

      FieldVector FieldVector::mapAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapAdd_9576e351eaaaeeff], a0.this$));
      }

      FieldVector FieldVector::mapAddToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_9576e351eaaaeeff], a0.this$));
      }

      FieldVector FieldVector::mapDivide(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivide_9576e351eaaaeeff], a0.this$));
      }

      FieldVector FieldVector::mapDivideToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_9576e351eaaaeeff], a0.this$));
      }

      FieldVector FieldVector::mapInv() const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapInv_1f378a1e2fafd4da]));
      }

      FieldVector FieldVector::mapInvToSelf() const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapInvToSelf_1f378a1e2fafd4da]));
      }

      FieldVector FieldVector::mapMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_9576e351eaaaeeff], a0.this$));
      }

      FieldVector FieldVector::mapMultiplyToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_9576e351eaaaeeff], a0.this$));
      }

      FieldVector FieldVector::mapSubtract(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_9576e351eaaaeeff], a0.this$));
      }

      FieldVector FieldVector::mapSubtractToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix FieldVector::outerProduct(const FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_352168969c692677], a0.this$));
      }

      FieldVector FieldVector::projection(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_projection_17fc5256c635037d], a0.this$));
      }

      void FieldVector::set(const ::org::hipparchus::FieldElement & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_d6f1e197c99df44f], a0.this$);
      }

      void FieldVector::setEntry(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_9f3b43c70febfa9a], a0, a1.this$);
      }

      void FieldVector::setSubVector(jint a0, const FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_9f6a0cf723c2763b], a0, a1.this$);
      }

      FieldVector FieldVector::subtract(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_subtract_17fc5256c635037d], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > FieldVector::toArray() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_eb5e61f0a5585705]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_FieldVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVector_of_(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_add(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_append(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_copy(t_FieldVector *self);
      static PyObject *t_FieldVector_dotProduct(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_ebeDivide(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_ebeMultiply(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_getDimension(t_FieldVector *self);
      static PyObject *t_FieldVector_getEntry(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_getField(t_FieldVector *self);
      static PyObject *t_FieldVector_getSubVector(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_mapAdd(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapAddToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapDivide(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapDivideToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapInv(t_FieldVector *self);
      static PyObject *t_FieldVector_mapInvToSelf(t_FieldVector *self);
      static PyObject *t_FieldVector_mapMultiply(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapMultiplyToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapSubtract(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapSubtractToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_outerProduct(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_projection(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_set(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_setEntry(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_setSubVector(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_subtract(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_toArray(t_FieldVector *self);
      static PyObject *t_FieldVector_get__dimension(t_FieldVector *self, void *data);
      static PyObject *t_FieldVector_get__field(t_FieldVector *self, void *data);
      static PyObject *t_FieldVector_get__parameters_(t_FieldVector *self, void *data);
      static PyGetSetDef t_FieldVector__fields_[] = {
        DECLARE_GET_FIELD(t_FieldVector, dimension),
        DECLARE_GET_FIELD(t_FieldVector, field),
        DECLARE_GET_FIELD(t_FieldVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldVector__methods_[] = {
        DECLARE_METHOD(t_FieldVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, add, METH_O),
        DECLARE_METHOD(t_FieldVector, append, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, dotProduct, METH_O),
        DECLARE_METHOD(t_FieldVector, ebeDivide, METH_O),
        DECLARE_METHOD(t_FieldVector, ebeMultiply, METH_O),
        DECLARE_METHOD(t_FieldVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, getEntry, METH_O),
        DECLARE_METHOD(t_FieldVector, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, mapAdd, METH_O),
        DECLARE_METHOD(t_FieldVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, mapDivide, METH_O),
        DECLARE_METHOD(t_FieldVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, mapInv, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, mapInvToSelf, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_FieldVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_FieldVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, outerProduct, METH_O),
        DECLARE_METHOD(t_FieldVector, projection, METH_O),
        DECLARE_METHOD(t_FieldVector, set, METH_O),
        DECLARE_METHOD(t_FieldVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, subtract, METH_O),
        DECLARE_METHOD(t_FieldVector, toArray, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldVector)[] = {
        { Py_tp_methods, t_FieldVector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldVector, t_FieldVector, FieldVector);
      PyObject *t_FieldVector::wrap_Object(const FieldVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVector *self = (t_FieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVector *self = (t_FieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldVector::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldVector), &PY_TYPE_DEF(FieldVector), module, "FieldVector", 0);
      }

      void t_FieldVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector), "class_", make_descriptor(FieldVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector), "wrapfn_", make_descriptor(t_FieldVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldVector::initializeClass, 1)))
          return NULL;
        return t_FieldVector::wrap_Object(FieldVector(((t_FieldVector *) arg)->object.this$));
      }
      static PyObject *t_FieldVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldVector_of_(t_FieldVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldVector_add(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_append(t_FieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_FieldVector_copy(t_FieldVector *self)
      {
        FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_dotProduct(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_ebeDivide(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_ebeMultiply(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_getDimension(t_FieldVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldVector_getEntry(t_FieldVector *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_getField(t_FieldVector *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_getSubVector(t_FieldVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        FieldVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_FieldVector_mapAdd(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapAddToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapDivide(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapDivideToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapInv(t_FieldVector *self)
      {
        FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInv());
        return t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_mapInvToSelf(t_FieldVector *self)
      {
        FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInvToSelf());
        return t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_mapMultiply(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapMultiplyToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapSubtract(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapSubtractToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_outerProduct(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.outerProduct(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_projection(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.projection(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "projection", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_set(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "set", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_setEntry(t_FieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_FieldVector_setSubVector(t_FieldVector *self, PyObject *args)
      {
        jint a0;
        FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", FieldVector::initializeClass, &a0, &a1, &p1, t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_FieldVector_subtract(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_toArray(t_FieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }
      static PyObject *t_FieldVector_get__parameters_(t_FieldVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldVector_get__dimension(t_FieldVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldVector_get__field(t_FieldVector *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/IsotropicDrag.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *IsotropicDrag::class$ = NULL;
        jmethodID *IsotropicDrag::mids$ = NULL;
        bool IsotropicDrag::live$ = false;

        jclass IsotropicDrag::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/IsotropicDrag");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_cd5724127cc72e96] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_dragAcceleration_4a6ab2502c320936] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dragAcceleration_73bcdbeb8ff641bb] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDragParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicDrag::IsotropicDrag(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        IsotropicDrag::IsotropicDrag(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd5724127cc72e96, a0, a1, a2, a3)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicDrag::dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_4a6ab2502c320936], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicDrag::dragAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_73bcdbeb8ff641bb], a0.this$, a1, a2.this$, a3.this$));
        }

        ::java::util::List IsotropicDrag::getDragParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDragParametersDrivers_d751c1a57012b438]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {
        static PyObject *t_IsotropicDrag_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicDrag_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicDrag_init_(t_IsotropicDrag *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicDrag_dragAcceleration(t_IsotropicDrag *self, PyObject *args);
        static PyObject *t_IsotropicDrag_getDragParametersDrivers(t_IsotropicDrag *self);
        static PyObject *t_IsotropicDrag_get__dragParametersDrivers(t_IsotropicDrag *self, void *data);
        static PyGetSetDef t_IsotropicDrag__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicDrag, dragParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicDrag__methods_[] = {
          DECLARE_METHOD(t_IsotropicDrag, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicDrag, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicDrag, dragAcceleration, METH_VARARGS),
          DECLARE_METHOD(t_IsotropicDrag, getDragParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicDrag)[] = {
          { Py_tp_methods, t_IsotropicDrag__methods_ },
          { Py_tp_init, (void *) t_IsotropicDrag_init_ },
          { Py_tp_getset, t_IsotropicDrag__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicDrag)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicDrag, t_IsotropicDrag, IsotropicDrag);

        void t_IsotropicDrag::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicDrag), &PY_TYPE_DEF(IsotropicDrag), module, "IsotropicDrag", 0);
        }

        void t_IsotropicDrag::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicDrag), "class_", make_descriptor(IsotropicDrag::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicDrag), "wrapfn_", make_descriptor(t_IsotropicDrag::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicDrag), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicDrag_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicDrag::initializeClass, 1)))
            return NULL;
          return t_IsotropicDrag::wrap_Object(IsotropicDrag(((t_IsotropicDrag *) arg)->object.this$));
        }
        static PyObject *t_IsotropicDrag_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicDrag::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicDrag_init_(t_IsotropicDrag *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              IsotropicDrag object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = IsotropicDrag(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              IsotropicDrag object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = IsotropicDrag(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IsotropicDrag_dragAcceleration(t_IsotropicDrag *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kDk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KKK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "dragAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicDrag_getDragParametersDrivers(t_IsotropicDrag *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicDrag_get__dragParametersDrivers(t_IsotropicDrag *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnscentedKalmanEstimatorBuilder::class$ = NULL;
        jmethodID *UnscentedKalmanEstimatorBuilder::mids$ = NULL;
        bool UnscentedKalmanEstimatorBuilder::live$ = false;

        jclass UnscentedKalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_0a0f4d7c6b86a306] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");
            mids$[mid_build_cd5842dd9bb0ec1c] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/UnscentedKalmanEstimator;");
            mids$[mid_decomposer_b5d4791a2c21fe82] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_8b0abcedc4102e54] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");
            mids$[mid_unscentedTransformProvider_cecfa6a1a35a2223] = env->getMethodID(cls, "unscentedTransformProvider", "(Lorg/hipparchus/util/UnscentedTransformProvider;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnscentedKalmanEstimatorBuilder::UnscentedKalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_0a0f4d7c6b86a306], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::UnscentedKalmanEstimator UnscentedKalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::UnscentedKalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_cd5842dd9bb0ec1c]));
        }

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_b5d4791a2c21fe82], a0.this$));
        }

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_8b0abcedc4102e54], a0.this$, a1.this$));
        }

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::unscentedTransformProvider(const ::org::hipparchus::util::UnscentedTransformProvider & a0) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_unscentedTransformProvider_cecfa6a1a35a2223], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {
        static PyObject *t_UnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnscentedKalmanEstimatorBuilder_init_(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_build(t_UnscentedKalmanEstimatorBuilder *self);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_decomposer(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg);

        static PyMethodDef t_UnscentedKalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, unscentedTransformProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_UnscentedKalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_UnscentedKalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnscentedKalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnscentedKalmanEstimatorBuilder, t_UnscentedKalmanEstimatorBuilder, UnscentedKalmanEstimatorBuilder);

        void t_UnscentedKalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(UnscentedKalmanEstimatorBuilder), &PY_TYPE_DEF(UnscentedKalmanEstimatorBuilder), module, "UnscentedKalmanEstimatorBuilder", 0);
        }

        void t_UnscentedKalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimatorBuilder), "class_", make_descriptor(UnscentedKalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_UnscentedKalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnscentedKalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_UnscentedKalmanEstimatorBuilder::wrap_Object(UnscentedKalmanEstimatorBuilder(((t_UnscentedKalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_UnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnscentedKalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnscentedKalmanEstimatorBuilder_init_(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          UnscentedKalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = UnscentedKalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_build(t_UnscentedKalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::UnscentedKalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_UnscentedKalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_decomposer(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::util::UnscentedTransformProvider a0((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::UnscentedTransformProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.unscentedTransformProvider(a0));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "unscentedTransformProvider", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *MultivariateMatrixFunction::class$ = NULL;
      jmethodID *MultivariateMatrixFunction::mids$ = NULL;
      bool MultivariateMatrixFunction::live$ = false;

      jclass MultivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/MultivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_2d9ee2fffcc89139] = env->getMethodID(cls, "value", "([D)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > MultivariateMatrixFunction::value(const JArray< jdouble > & a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_2d9ee2fffcc89139], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_MultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateMatrixFunction_value(t_MultivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_MultivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_MultivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateMatrixFunction)[] = {
        { Py_tp_methods, t_MultivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateMatrixFunction, t_MultivariateMatrixFunction, MultivariateMatrixFunction);

      void t_MultivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateMatrixFunction), &PY_TYPE_DEF(MultivariateMatrixFunction), module, "MultivariateMatrixFunction", 0);
      }

      void t_MultivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateMatrixFunction), "class_", make_descriptor(MultivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateMatrixFunction), "wrapfn_", make_descriptor(t_MultivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_MultivariateMatrixFunction::wrap_Object(MultivariateMatrixFunction(((t_MultivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_MultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateMatrixFunction_value(t_MultivariateMatrixFunction *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsMoultonFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsMoultonFieldIntegrator::class$ = NULL;
        jmethodID *AdamsMoultonFieldIntegrator::mids$ = NULL;
        bool AdamsMoultonFieldIntegrator::live$ = false;

        jclass AdamsMoultonFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsMoultonFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d184aa390d2d04c4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDD[D[D)V");
            mids$[mid_init$_a87bd547f4148176] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDDDD)V");
            mids$[mid_errorEstimation_6aa3626a66e9d9b5] = env->getMethodID(cls, "errorEstimation", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/FieldMatrix;)D");
            mids$[mid_finalizeStep_0548923e7e2ccdf5] = env->getMethodID(cls, "finalizeStep", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonFieldIntegrator::AdamsMoultonFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_d184aa390d2d04c4, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        AdamsMoultonFieldIntegrator::AdamsMoultonFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a87bd547f4148176, a0.this$, a1, a2, a3, a4, a5)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_AdamsMoultonFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegrator_of_(t_AdamsMoultonFieldIntegrator *self, PyObject *args);
        static int t_AdamsMoultonFieldIntegrator_init_(t_AdamsMoultonFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsMoultonFieldIntegrator_get__parameters_(t_AdamsMoultonFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdamsMoultonFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsMoultonFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsMoultonFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonFieldIntegrator)[] = {
          { Py_tp_methods, t_AdamsMoultonFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonFieldIntegrator_init_ },
          { Py_tp_getset, t_AdamsMoultonFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonFieldIntegrator, t_AdamsMoultonFieldIntegrator, AdamsMoultonFieldIntegrator);
        PyObject *t_AdamsMoultonFieldIntegrator::wrap_Object(const AdamsMoultonFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegrator *self = (t_AdamsMoultonFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsMoultonFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegrator *self = (t_AdamsMoultonFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsMoultonFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonFieldIntegrator), &PY_TYPE_DEF(AdamsMoultonFieldIntegrator), module, "AdamsMoultonFieldIntegrator", 0);
        }

        void t_AdamsMoultonFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegrator), "class_", make_descriptor(AdamsMoultonFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegrator), "wrapfn_", make_descriptor(t_AdamsMoultonFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonFieldIntegrator::wrap_Object(AdamsMoultonFieldIntegrator(((t_AdamsMoultonFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsMoultonFieldIntegrator_of_(t_AdamsMoultonFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsMoultonFieldIntegrator_init_(t_AdamsMoultonFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              AdamsMoultonFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsMoultonFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              AdamsMoultonFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsMoultonFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_AdamsMoultonFieldIntegrator_get__parameters_(t_AdamsMoultonFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/EventState.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *EventState::class$ = NULL;
        jmethodID *EventState::mids$ = NULL;
        bool EventState::live$ = false;

        jclass EventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/EventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_doEvent_85cb4cee6c2ee34d] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/events/EventOccurrence;");
            mids$[mid_evaluateStep_a2d4078e6169b71f] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");
            mids$[mid_getEventTime_9981f74b2d109da6] = env->getMethodID(cls, "getEventTime", "()D");
            mids$[mid_init_25005604bcb94d07] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::EventOccurrence EventState::doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_85cb4cee6c2ee34d], a0.this$));
        }

        jboolean EventState::evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_a2d4078e6169b71f], a0.this$);
        }

        jdouble EventState::getEventTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEventTime_9981f74b2d109da6]);
        }

        void EventState::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_25005604bcb94d07], a0.this$, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_getEventTime(t_EventState *self);
        static PyObject *t_EventState_init(t_EventState *self, PyObject *args);
        static PyObject *t_EventState_get__eventTime(t_EventState *self, void *data);
        static PyGetSetDef t_EventState__fields_[] = {
          DECLARE_GET_FIELD(t_EventState, eventTime),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventState__methods_[] = {
          DECLARE_METHOD(t_EventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, doEvent, METH_O),
          DECLARE_METHOD(t_EventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_EventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_EventState, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventState)[] = {
          { Py_tp_methods, t_EventState__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventState, t_EventState, EventState);

        void t_EventState::install(PyObject *module)
        {
          installType(&PY_TYPE(EventState), &PY_TYPE_DEF(EventState), module, "EventState", 0);
        }

        void t_EventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "class_", make_descriptor(EventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "wrapfn_", make_descriptor(t_EventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventState::initializeClass, 1)))
            return NULL;
          return t_EventState::wrap_Object(EventState(((t_EventState *) arg)->object.this$));
        }
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_EventOccurrence::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_EventState_getEventTime(t_EventState *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEventTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventState_init(t_EventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_EventState_get__eventTime(t_EventState *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEventTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/PythonCelestialBodies.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonCelestialBodies::class$ = NULL;
      jmethodID *PythonCelestialBodies::mids$ = NULL;
      bool PythonCelestialBodies::live$ = false;

      jclass PythonCelestialBodies::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonCelestialBodies");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBody_0ed99bba3e5bd60c] = env->getMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarth_a1474f5cfab89b5e] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_a1474f5cfab89b5e] = env->getMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_a1474f5cfab89b5e] = env->getMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_a1474f5cfab89b5e] = env->getMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_a1474f5cfab89b5e] = env->getMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_a1474f5cfab89b5e] = env->getMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_a1474f5cfab89b5e] = env->getMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_a1474f5cfab89b5e] = env->getMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_a1474f5cfab89b5e] = env->getMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_a1474f5cfab89b5e] = env->getMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_a1474f5cfab89b5e] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_a1474f5cfab89b5e] = env->getMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_a1474f5cfab89b5e] = env->getMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonCelestialBodies::PythonCelestialBodies() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonCelestialBodies::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonCelestialBodies::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonCelestialBodies::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_PythonCelestialBodies_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonCelestialBodies_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonCelestialBodies_init_(t_PythonCelestialBodies *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonCelestialBodies_finalize(t_PythonCelestialBodies *self);
      static PyObject *t_PythonCelestialBodies_pythonExtension(t_PythonCelestialBodies *self, PyObject *args);
      static jobject JNICALL t_PythonCelestialBodies_getBody0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonCelestialBodies_getEarth1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getEarthMoonBarycenter2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getJupiter3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getMars4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getMercury5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getMoon6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getNeptune7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getPluto8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getSaturn9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getSolarSystemBarycenter10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getSun11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getUranus12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getVenus13(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonCelestialBodies_pythonDecRef14(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonCelestialBodies_get__self(t_PythonCelestialBodies *self, void *data);
      static PyGetSetDef t_PythonCelestialBodies__fields_[] = {
        DECLARE_GET_FIELD(t_PythonCelestialBodies, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonCelestialBodies__methods_[] = {
        DECLARE_METHOD(t_PythonCelestialBodies, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodies, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodies, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonCelestialBodies, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonCelestialBodies)[] = {
        { Py_tp_methods, t_PythonCelestialBodies__methods_ },
        { Py_tp_init, (void *) t_PythonCelestialBodies_init_ },
        { Py_tp_getset, t_PythonCelestialBodies__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonCelestialBodies)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonCelestialBodies, t_PythonCelestialBodies, PythonCelestialBodies);

      void t_PythonCelestialBodies::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonCelestialBodies), &PY_TYPE_DEF(PythonCelestialBodies), module, "PythonCelestialBodies", 1);
      }

      void t_PythonCelestialBodies::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodies), "class_", make_descriptor(PythonCelestialBodies::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodies), "wrapfn_", make_descriptor(t_PythonCelestialBodies::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodies), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonCelestialBodies::initializeClass);
        JNINativeMethod methods[] = {
          { "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getBody0 },
          { "getEarth", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getEarth1 },
          { "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getEarthMoonBarycenter2 },
          { "getJupiter", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getJupiter3 },
          { "getMars", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getMars4 },
          { "getMercury", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getMercury5 },
          { "getMoon", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getMoon6 },
          { "getNeptune", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getNeptune7 },
          { "getPluto", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getPluto8 },
          { "getSaturn", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getSaturn9 },
          { "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getSolarSystemBarycenter10 },
          { "getSun", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getSun11 },
          { "getUranus", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getUranus12 },
          { "getVenus", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getVenus13 },
          { "pythonDecRef", "()V", (void *) t_PythonCelestialBodies_pythonDecRef14 },
        };
        env->registerNatives(cls, methods, 15);
      }

      static PyObject *t_PythonCelestialBodies_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonCelestialBodies::initializeClass, 1)))
          return NULL;
        return t_PythonCelestialBodies::wrap_Object(PythonCelestialBodies(((t_PythonCelestialBodies *) arg)->object.this$));
      }
      static PyObject *t_PythonCelestialBodies_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonCelestialBodies::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonCelestialBodies_init_(t_PythonCelestialBodies *self, PyObject *args, PyObject *kwds)
      {
        PythonCelestialBodies object((jobject) NULL);

        INT_CALL(object = PythonCelestialBodies());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonCelestialBodies_finalize(t_PythonCelestialBodies *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonCelestialBodies_pythonExtension(t_PythonCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getBody0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "getBody", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getBody", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getEarth1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarth", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getEarth", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getEarthMoonBarycenter2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarthMoonBarycenter", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getEarthMoonBarycenter", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getJupiter3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJupiter", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getJupiter", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getMars4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMars", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getMars", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getMercury5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMercury", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getMercury", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getMoon6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMoon", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getMoon", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getNeptune7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getNeptune", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getNeptune", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getPluto8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getPluto", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getPluto", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getSaturn9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSaturn", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getSaturn", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getSolarSystemBarycenter10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSolarSystemBarycenter", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getSolarSystemBarycenter", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getSun11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSun", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getSun", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getUranus12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUranus", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getUranus", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getVenus13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getVenus", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getVenus", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonCelestialBodies_pythonDecRef14(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonCelestialBodies_get__self(t_PythonCelestialBodies *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D$NoSubSpaceException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *Sphere1D$NoSubSpaceException::class$ = NULL;
          jmethodID *Sphere1D$NoSubSpaceException::mids$ = NULL;
          bool Sphere1D$NoSubSpaceException::live$ = false;

          jclass Sphere1D$NoSubSpaceException::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/Sphere1D$NoSubSpaceException");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Sphere1D$NoSubSpaceException::Sphere1D$NoSubSpaceException() : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          static PyObject *t_Sphere1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Sphere1D$NoSubSpaceException_init_(t_Sphere1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_Sphere1D$NoSubSpaceException__methods_[] = {
            DECLARE_METHOD(t_Sphere1D$NoSubSpaceException, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D$NoSubSpaceException, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sphere1D$NoSubSpaceException)[] = {
            { Py_tp_methods, t_Sphere1D$NoSubSpaceException__methods_ },
            { Py_tp_init, (void *) t_Sphere1D$NoSubSpaceException_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sphere1D$NoSubSpaceException)[] = {
            &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
            NULL
          };

          DEFINE_TYPE(Sphere1D$NoSubSpaceException, t_Sphere1D$NoSubSpaceException, Sphere1D$NoSubSpaceException);

          void t_Sphere1D$NoSubSpaceException::install(PyObject *module)
          {
            installType(&PY_TYPE(Sphere1D$NoSubSpaceException), &PY_TYPE_DEF(Sphere1D$NoSubSpaceException), module, "Sphere1D$NoSubSpaceException", 0);
          }

          void t_Sphere1D$NoSubSpaceException::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D$NoSubSpaceException), "class_", make_descriptor(Sphere1D$NoSubSpaceException::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D$NoSubSpaceException), "wrapfn_", make_descriptor(t_Sphere1D$NoSubSpaceException::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D$NoSubSpaceException), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Sphere1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sphere1D$NoSubSpaceException::initializeClass, 1)))
              return NULL;
            return t_Sphere1D$NoSubSpaceException::wrap_Object(Sphere1D$NoSubSpaceException(((t_Sphere1D$NoSubSpaceException *) arg)->object.this$));
          }
          static PyObject *t_Sphere1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sphere1D$NoSubSpaceException::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Sphere1D$NoSubSpaceException_init_(t_Sphere1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds)
          {
            Sphere1D$NoSubSpaceException object((jobject) NULL);

            INT_CALL(object = Sphere1D$NoSubSpaceException());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AllowedSolution::class$ = NULL;
        jmethodID *AllowedSolution::mids$ = NULL;
        bool AllowedSolution::live$ = false;
        AllowedSolution *AllowedSolution::ABOVE_SIDE = NULL;
        AllowedSolution *AllowedSolution::ANY_SIDE = NULL;
        AllowedSolution *AllowedSolution::BELOW_SIDE = NULL;
        AllowedSolution *AllowedSolution::LEFT_SIDE = NULL;
        AllowedSolution *AllowedSolution::RIGHT_SIDE = NULL;

        jclass AllowedSolution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AllowedSolution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_894e9cd2dc48ed0d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/analysis/solvers/AllowedSolution;");
            mids$[mid_values_03b5f4feec005c87] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/analysis/solvers/AllowedSolution;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ABOVE_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "ABOVE_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            ANY_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "ANY_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            BELOW_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "BELOW_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            LEFT_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "LEFT_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            RIGHT_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "RIGHT_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AllowedSolution AllowedSolution::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AllowedSolution(env->callStaticObjectMethod(cls, mids$[mid_valueOf_894e9cd2dc48ed0d], a0.this$));
        }

        JArray< AllowedSolution > AllowedSolution::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< AllowedSolution >(env->callStaticObjectMethod(cls, mids$[mid_values_03b5f4feec005c87]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        static PyObject *t_AllowedSolution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AllowedSolution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AllowedSolution_of_(t_AllowedSolution *self, PyObject *args);
        static PyObject *t_AllowedSolution_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_AllowedSolution_values(PyTypeObject *type);
        static PyObject *t_AllowedSolution_get__parameters_(t_AllowedSolution *self, void *data);
        static PyGetSetDef t_AllowedSolution__fields_[] = {
          DECLARE_GET_FIELD(t_AllowedSolution, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AllowedSolution__methods_[] = {
          DECLARE_METHOD(t_AllowedSolution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AllowedSolution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AllowedSolution, of_, METH_VARARGS),
          DECLARE_METHOD(t_AllowedSolution, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AllowedSolution, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AllowedSolution)[] = {
          { Py_tp_methods, t_AllowedSolution__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AllowedSolution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AllowedSolution)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(AllowedSolution, t_AllowedSolution, AllowedSolution);
        PyObject *t_AllowedSolution::wrap_Object(const AllowedSolution& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AllowedSolution::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AllowedSolution *self = (t_AllowedSolution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AllowedSolution::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AllowedSolution::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AllowedSolution *self = (t_AllowedSolution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AllowedSolution::install(PyObject *module)
        {
          installType(&PY_TYPE(AllowedSolution), &PY_TYPE_DEF(AllowedSolution), module, "AllowedSolution", 0);
        }

        void t_AllowedSolution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "class_", make_descriptor(AllowedSolution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "wrapfn_", make_descriptor(t_AllowedSolution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "boxfn_", make_descriptor(boxObject));
          env->getClass(AllowedSolution::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "ABOVE_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::ABOVE_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "ANY_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::ANY_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "BELOW_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::BELOW_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "LEFT_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::LEFT_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "RIGHT_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::RIGHT_SIDE)));
        }

        static PyObject *t_AllowedSolution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AllowedSolution::initializeClass, 1)))
            return NULL;
          return t_AllowedSolution::wrap_Object(AllowedSolution(((t_AllowedSolution *) arg)->object.this$));
        }
        static PyObject *t_AllowedSolution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AllowedSolution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AllowedSolution_of_(t_AllowedSolution *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AllowedSolution_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          AllowedSolution result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::AllowedSolution::valueOf(a0));
            return t_AllowedSolution::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_AllowedSolution_values(PyTypeObject *type)
        {
          JArray< AllowedSolution > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::analysis::solvers::AllowedSolution::values());
          return JArray<jobject>(result.this$).wrap(t_AllowedSolution::wrap_jobject);
        }
        static PyObject *t_AllowedSolution_get__parameters_(t_AllowedSolution *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *EncodedMessage::class$ = NULL;
          jmethodID *EncodedMessage::mids$ = NULL;
          bool EncodedMessage::live$ = false;

          jclass EncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/EncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_extractBits_3453f750066710ab] = env->getMethodID(cls, "extractBits", "(I)J");
              mids$[mid_start_ff7cb6c242604316] = env->getMethodID(cls, "start", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jlong EncodedMessage::extractBits(jint a0) const
          {
            return env->callLongMethod(this$, mids$[mid_extractBits_3453f750066710ab], a0);
          }

          void EncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_ff7cb6c242604316]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_EncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EncodedMessage_extractBits(t_EncodedMessage *self, PyObject *arg);
          static PyObject *t_EncodedMessage_start(t_EncodedMessage *self);

          static PyMethodDef t_EncodedMessage__methods_[] = {
            DECLARE_METHOD(t_EncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EncodedMessage, extractBits, METH_O),
            DECLARE_METHOD(t_EncodedMessage, start, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EncodedMessage)[] = {
            { Py_tp_methods, t_EncodedMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EncodedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EncodedMessage, t_EncodedMessage, EncodedMessage);

          void t_EncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(EncodedMessage), &PY_TYPE_DEF(EncodedMessage), module, "EncodedMessage", 0);
          }

          void t_EncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EncodedMessage), "class_", make_descriptor(EncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EncodedMessage), "wrapfn_", make_descriptor(t_EncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EncodedMessage::initializeClass, 1)))
              return NULL;
            return t_EncodedMessage::wrap_Object(EncodedMessage(((t_EncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_EncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_EncodedMessage_extractBits(t_EncodedMessage *self, PyObject *arg)
          {
            jint a0;
            jlong result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.extractBits(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            PyErr_SetArgsError((PyObject *) self, "extractBits", arg);
            return NULL;
          }

          static PyObject *t_EncodedMessage_start(t_EncodedMessage *self)
          {
            OBJ_CALL(self->object.start());
            Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *ParametricUnivariateFunction::class$ = NULL;
      jmethodID *ParametricUnivariateFunction::mids$ = NULL;
      bool ParametricUnivariateFunction::live$ = false;

      jclass ParametricUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/ParametricUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_gradient_bfc955188bf36f2c] = env->getMethodID(cls, "gradient", "(D[D)[D");
          mids$[mid_value_4f42c7a8793320e4] = env->getMethodID(cls, "value", "(D[D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > ParametricUnivariateFunction::gradient(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_bfc955188bf36f2c], a0, a1.this$));
      }

      jdouble ParametricUnivariateFunction::value(jdouble a0, const JArray< jdouble > & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_4f42c7a8793320e4], a0, a1.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_ParametricUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametricUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametricUnivariateFunction_gradient(t_ParametricUnivariateFunction *self, PyObject *args);
      static PyObject *t_ParametricUnivariateFunction_value(t_ParametricUnivariateFunction *self, PyObject *args);

      static PyMethodDef t_ParametricUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_ParametricUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametricUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametricUnivariateFunction, gradient, METH_VARARGS),
        DECLARE_METHOD(t_ParametricUnivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParametricUnivariateFunction)[] = {
        { Py_tp_methods, t_ParametricUnivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParametricUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParametricUnivariateFunction, t_ParametricUnivariateFunction, ParametricUnivariateFunction);

      void t_ParametricUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(ParametricUnivariateFunction), &PY_TYPE_DEF(ParametricUnivariateFunction), module, "ParametricUnivariateFunction", 0);
      }

      void t_ParametricUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricUnivariateFunction), "class_", make_descriptor(ParametricUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricUnivariateFunction), "wrapfn_", make_descriptor(t_ParametricUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricUnivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParametricUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParametricUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_ParametricUnivariateFunction::wrap_Object(ParametricUnivariateFunction(((t_ParametricUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_ParametricUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParametricUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParametricUnivariateFunction_gradient(t_ParametricUnivariateFunction *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.gradient(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "gradient", args);
        return NULL;
      }

      static PyObject *t_ParametricUnivariateFunction_value(t_ParametricUnivariateFunction *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.value(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/Differentiation.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/ParameterFunction.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/utils/StateFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/StateJacobian.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *Differentiation::class$ = NULL;
      jmethodID *Differentiation::mids$ = NULL;
      bool Differentiation::live$ = false;

      jclass Differentiation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/Differentiation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_differentiate_d501cf84d660fc39] = env->getStaticMethodID(cls, "differentiate", "(Lorg/orekit/utils/ParameterFunction;ID)Lorg/orekit/utils/ParameterFunction;");
          mids$[mid_differentiate_27efd4db76122faa] = env->getStaticMethodID(cls, "differentiate", "(Lorg/orekit/utils/StateFunction;ILorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;DI)Lorg/orekit/utils/StateJacobian;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::ParameterFunction Differentiation::differentiate(const ::org::orekit::utils::ParameterFunction & a0, jint a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::utils::ParameterFunction(env->callStaticObjectMethod(cls, mids$[mid_differentiate_d501cf84d660fc39], a0.this$, a1, a2));
      }

      ::org::orekit::utils::StateJacobian Differentiation::differentiate(const ::org::orekit::utils::StateFunction & a0, jint a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4, jdouble a5, jint a6)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::utils::StateJacobian(env->callStaticObjectMethod(cls, mids$[mid_differentiate_27efd4db76122faa], a0.this$, a1, a2.this$, a3.this$, a4.this$, a5, a6));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_Differentiation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Differentiation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Differentiation_differentiate(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Differentiation__methods_[] = {
        DECLARE_METHOD(t_Differentiation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Differentiation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Differentiation, differentiate, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Differentiation)[] = {
        { Py_tp_methods, t_Differentiation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Differentiation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Differentiation, t_Differentiation, Differentiation);

      void t_Differentiation::install(PyObject *module)
      {
        installType(&PY_TYPE(Differentiation), &PY_TYPE_DEF(Differentiation), module, "Differentiation", 0);
      }

      void t_Differentiation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Differentiation), "class_", make_descriptor(Differentiation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Differentiation), "wrapfn_", make_descriptor(t_Differentiation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Differentiation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Differentiation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Differentiation::initializeClass, 1)))
          return NULL;
        return t_Differentiation::wrap_Object(Differentiation(((t_Differentiation *) arg)->object.this$));
      }
      static PyObject *t_Differentiation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Differentiation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Differentiation_differentiate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::ParameterFunction a0((jobject) NULL);
            jint a1;
            jdouble a2;
            ::org::orekit::utils::ParameterFunction result((jobject) NULL);

            if (!parseArgs(args, "kID", ::org::orekit::utils::ParameterFunction::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::utils::Differentiation::differentiate(a0, a1, a2));
              return ::org::orekit::utils::t_ParameterFunction::wrap_Object(result);
            }
          }
          break;
         case 7:
          {
            ::org::orekit::utils::StateFunction a0((jobject) NULL);
            jint a1;
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            jint a6;
            ::org::orekit::utils::StateJacobian result((jobject) NULL);

            if (!parseArgs(args, "kIkKKDI", ::org::orekit::utils::StateFunction::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a5, &a6))
            {
              OBJ_CALL(result = ::org::orekit::utils::Differentiation::differentiate(a0, a1, a2, a3, a4, a5, a6));
              return ::org::orekit::utils::t_StateJacobian::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "differentiate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/ObservationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *ObservationData::class$ = NULL;
          jmethodID *ObservationData::mids$ = NULL;
          bool ObservationData::live$ = false;

          jclass ObservationData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/ObservationData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e0202a1206436143] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/ObservationType;DII)V");
              mids$[mid_getLossOfLockIndicator_d6ab429752e7c267] = env->getMethodID(cls, "getLossOfLockIndicator", "()I");
              mids$[mid_getObservationType_e80ef1520523663f] = env->getMethodID(cls, "getObservationType", "()Lorg/orekit/gnss/ObservationType;");
              mids$[mid_getSignalStrength_d6ab429752e7c267] = env->getMethodID(cls, "getSignalStrength", "()I");
              mids$[mid_getValue_9981f74b2d109da6] = env->getMethodID(cls, "getValue", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObservationData::ObservationData(const ::org::orekit::gnss::ObservationType & a0, jdouble a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e0202a1206436143, a0.this$, a1, a2, a3)) {}

          jint ObservationData::getLossOfLockIndicator() const
          {
            return env->callIntMethod(this$, mids$[mid_getLossOfLockIndicator_d6ab429752e7c267]);
          }

          ::org::orekit::gnss::ObservationType ObservationData::getObservationType() const
          {
            return ::org::orekit::gnss::ObservationType(env->callObjectMethod(this$, mids$[mid_getObservationType_e80ef1520523663f]));
          }

          jint ObservationData::getSignalStrength() const
          {
            return env->callIntMethod(this$, mids$[mid_getSignalStrength_d6ab429752e7c267]);
          }

          jdouble ObservationData::getValue() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getValue_9981f74b2d109da6]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          static PyObject *t_ObservationData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObservationData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObservationData_init_(t_ObservationData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObservationData_getLossOfLockIndicator(t_ObservationData *self);
          static PyObject *t_ObservationData_getObservationType(t_ObservationData *self);
          static PyObject *t_ObservationData_getSignalStrength(t_ObservationData *self);
          static PyObject *t_ObservationData_getValue(t_ObservationData *self);
          static PyObject *t_ObservationData_get__lossOfLockIndicator(t_ObservationData *self, void *data);
          static PyObject *t_ObservationData_get__observationType(t_ObservationData *self, void *data);
          static PyObject *t_ObservationData_get__signalStrength(t_ObservationData *self, void *data);
          static PyObject *t_ObservationData_get__value(t_ObservationData *self, void *data);
          static PyGetSetDef t_ObservationData__fields_[] = {
            DECLARE_GET_FIELD(t_ObservationData, lossOfLockIndicator),
            DECLARE_GET_FIELD(t_ObservationData, observationType),
            DECLARE_GET_FIELD(t_ObservationData, signalStrength),
            DECLARE_GET_FIELD(t_ObservationData, value),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObservationData__methods_[] = {
            DECLARE_METHOD(t_ObservationData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationData, getLossOfLockIndicator, METH_NOARGS),
            DECLARE_METHOD(t_ObservationData, getObservationType, METH_NOARGS),
            DECLARE_METHOD(t_ObservationData, getSignalStrength, METH_NOARGS),
            DECLARE_METHOD(t_ObservationData, getValue, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObservationData)[] = {
            { Py_tp_methods, t_ObservationData__methods_ },
            { Py_tp_init, (void *) t_ObservationData_init_ },
            { Py_tp_getset, t_ObservationData__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObservationData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObservationData, t_ObservationData, ObservationData);

          void t_ObservationData::install(PyObject *module)
          {
            installType(&PY_TYPE(ObservationData), &PY_TYPE_DEF(ObservationData), module, "ObservationData", 0);
          }

          void t_ObservationData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationData), "class_", make_descriptor(ObservationData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationData), "wrapfn_", make_descriptor(t_ObservationData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationData), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObservationData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObservationData::initializeClass, 1)))
              return NULL;
            return t_ObservationData::wrap_Object(ObservationData(((t_ObservationData *) arg)->object.this$));
          }
          static PyObject *t_ObservationData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObservationData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObservationData_init_(t_ObservationData *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::ObservationType a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jint a2;
            jint a3;
            ObservationData object((jobject) NULL);

            if (!parseArgs(args, "KDII", ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = ObservationData(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObservationData_getLossOfLockIndicator(t_ObservationData *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLossOfLockIndicator());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ObservationData_getObservationType(t_ObservationData *self)
          {
            ::org::orekit::gnss::ObservationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationType());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(result);
          }

          static PyObject *t_ObservationData_getSignalStrength(t_ObservationData *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSignalStrength());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ObservationData_getValue(t_ObservationData *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ObservationData_get__lossOfLockIndicator(t_ObservationData *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLossOfLockIndicator());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ObservationData_get__observationType(t_ObservationData *self, void *data)
          {
            ::org::orekit::gnss::ObservationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationType());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(value);
          }

          static PyObject *t_ObservationData_get__signalStrength(t_ObservationData *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSignalStrength());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ObservationData_get__value(t_ObservationData *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getValue());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresBuilder::class$ = NULL;
            jmethodID *LeastSquaresBuilder::mids$ = NULL;
            bool LeastSquaresBuilder::live$ = false;

            jclass LeastSquaresBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_build_21f6d9bb0e873e6f] = env->getMethodID(cls, "build", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_checker_69c291efc33e3e4c] = env->getMethodID(cls, "checker", "(Lorg/hipparchus/optim/ConvergenceChecker;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_checkerPair_69c291efc33e3e4c] = env->getMethodID(cls, "checkerPair", "(Lorg/hipparchus/optim/ConvergenceChecker;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_lazyEvaluation_4d1a61b7f8762f95] = env->getMethodID(cls, "lazyEvaluation", "(Z)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_maxEvaluations_2132093cc345cde6] = env->getMethodID(cls, "maxEvaluations", "(I)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_maxIterations_2132093cc345cde6] = env->getMethodID(cls, "maxIterations", "(I)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_model_8c1765110dd4770d] = env->getMethodID(cls, "model", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_model_478d22cb99141d51] = env->getMethodID(cls, "model", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;Lorg/hipparchus/analysis/MultivariateMatrixFunction;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_parameterValidator_901cde843f9064fc] = env->getMethodID(cls, "parameterValidator", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_start_788132b8ed7cd309] = env->getMethodID(cls, "start", "([D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_start_333122e1fc2a33d0] = env->getMethodID(cls, "start", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_target_788132b8ed7cd309] = env->getMethodID(cls, "target", "([D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_target_333122e1fc2a33d0] = env->getMethodID(cls, "target", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_weight_2a673b03d3e70441] = env->getMethodID(cls, "weight", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LeastSquaresBuilder::LeastSquaresBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresBuilder::build() const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_21f6d9bb0e873e6f]));
            }

            LeastSquaresBuilder LeastSquaresBuilder::checker(const ::org::hipparchus::optim::ConvergenceChecker & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_checker_69c291efc33e3e4c], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::checkerPair(const ::org::hipparchus::optim::ConvergenceChecker & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_checkerPair_69c291efc33e3e4c], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::lazyEvaluation(jboolean a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_lazyEvaluation_4d1a61b7f8762f95], a0));
            }

            LeastSquaresBuilder LeastSquaresBuilder::maxEvaluations(jint a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_maxEvaluations_2132093cc345cde6], a0));
            }

            LeastSquaresBuilder LeastSquaresBuilder::maxIterations(jint a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_maxIterations_2132093cc345cde6], a0));
            }

            LeastSquaresBuilder LeastSquaresBuilder::model(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_model_8c1765110dd4770d], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::model(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const ::org::hipparchus::analysis::MultivariateMatrixFunction & a1) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_model_478d22cb99141d51], a0.this$, a1.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::parameterValidator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_parameterValidator_901cde843f9064fc], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::start(const JArray< jdouble > & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_start_788132b8ed7cd309], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::start(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_start_333122e1fc2a33d0], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::target(const JArray< jdouble > & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_target_788132b8ed7cd309], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::target(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_target_333122e1fc2a33d0], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::weight(const ::org::hipparchus::linear::RealMatrix & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_weight_2a673b03d3e70441], a0.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LeastSquaresBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LeastSquaresBuilder_init_(t_LeastSquaresBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LeastSquaresBuilder_build(t_LeastSquaresBuilder *self);
            static PyObject *t_LeastSquaresBuilder_checker(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_checkerPair(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_lazyEvaluation(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_maxEvaluations(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_maxIterations(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_model(t_LeastSquaresBuilder *self, PyObject *args);
            static PyObject *t_LeastSquaresBuilder_parameterValidator(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_start(t_LeastSquaresBuilder *self, PyObject *args);
            static PyObject *t_LeastSquaresBuilder_target(t_LeastSquaresBuilder *self, PyObject *args);
            static PyObject *t_LeastSquaresBuilder_weight(t_LeastSquaresBuilder *self, PyObject *arg);

            static PyMethodDef t_LeastSquaresBuilder__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresBuilder, build, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, checker, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, checkerPair, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, lazyEvaluation, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, maxEvaluations, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, maxIterations, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, model, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, parameterValidator, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, start, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, target, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, weight, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresBuilder)[] = {
              { Py_tp_methods, t_LeastSquaresBuilder__methods_ },
              { Py_tp_init, (void *) t_LeastSquaresBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresBuilder, t_LeastSquaresBuilder, LeastSquaresBuilder);

            void t_LeastSquaresBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresBuilder), &PY_TYPE_DEF(LeastSquaresBuilder), module, "LeastSquaresBuilder", 0);
            }

            void t_LeastSquaresBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresBuilder), "class_", make_descriptor(LeastSquaresBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresBuilder), "wrapfn_", make_descriptor(t_LeastSquaresBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresBuilder::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresBuilder::wrap_Object(LeastSquaresBuilder(((t_LeastSquaresBuilder *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LeastSquaresBuilder_init_(t_LeastSquaresBuilder *self, PyObject *args, PyObject *kwds)
            {
              LeastSquaresBuilder object((jobject) NULL);

              INT_CALL(object = LeastSquaresBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_LeastSquaresBuilder_build(t_LeastSquaresBuilder *self)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);
              OBJ_CALL(result = self->object.build());
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresBuilder_checker(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
              PyTypeObject **p0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                OBJ_CALL(result = self->object.checker(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "checker", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_checkerPair(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
              PyTypeObject **p0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                OBJ_CALL(result = self->object.checkerPair(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "checkerPair", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_lazyEvaluation(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              jboolean a0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(result = self->object.lazyEvaluation(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "lazyEvaluation", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_maxEvaluations(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              jint a0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.maxEvaluations(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_maxIterations(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              jint a0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.maxIterations(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "maxIterations", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_model(t_LeastSquaresBuilder *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.model(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
                break;
               case 2:
                {
                  ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                  ::org::hipparchus::analysis::MultivariateMatrixFunction a1((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::analysis::MultivariateMatrixFunction::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.model(a0, a1));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "model", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_parameterValidator(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator a0((jobject) NULL);
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.parameterValidator(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parameterValidator", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_start(t_LeastSquaresBuilder *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    OBJ_CALL(result = self->object.start(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.start(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "start", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_target(t_LeastSquaresBuilder *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    OBJ_CALL(result = self->object.target(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.target(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "target", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_weight(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.weight(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "weight", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PythonMeasurementBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonMeasurementBuilder::class$ = NULL;
          jmethodID *PythonMeasurementBuilder::mids$ = NULL;
          bool PythonMeasurementBuilder::live$ = false;

          jclass PythonMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addModifier_a3bed5360bec47d0] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_build_9dac2855d37640dd] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getModifiers_d751c1a57012b438] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_27bb228995072af3] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_ce7d94fe97fdcf55] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMeasurementBuilder::PythonMeasurementBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonMeasurementBuilder::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonMeasurementBuilder::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonMeasurementBuilder::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_PythonMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementBuilder_of_(t_PythonMeasurementBuilder *self, PyObject *args);
          static int t_PythonMeasurementBuilder_init_(t_PythonMeasurementBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMeasurementBuilder_finalize(t_PythonMeasurementBuilder *self);
          static PyObject *t_PythonMeasurementBuilder_pythonExtension(t_PythonMeasurementBuilder *self, PyObject *args);
          static void JNICALL t_PythonMeasurementBuilder_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonMeasurementBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonMeasurementBuilder_getModifiers2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonMeasurementBuilder_getSatellites3(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonMeasurementBuilder_init4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonMeasurementBuilder_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMeasurementBuilder_get__self(t_PythonMeasurementBuilder *self, void *data);
          static PyObject *t_PythonMeasurementBuilder_get__parameters_(t_PythonMeasurementBuilder *self, void *data);
          static PyGetSetDef t_PythonMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMeasurementBuilder, self),
            DECLARE_GET_FIELD(t_PythonMeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_PythonMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMeasurementBuilder)[] = {
            { Py_tp_methods, t_PythonMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) t_PythonMeasurementBuilder_init_ },
            { Py_tp_getset, t_PythonMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMeasurementBuilder, t_PythonMeasurementBuilder, PythonMeasurementBuilder);
          PyObject *t_PythonMeasurementBuilder::wrap_Object(const PythonMeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementBuilder *self = (t_PythonMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonMeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementBuilder *self = (t_PythonMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMeasurementBuilder), &PY_TYPE_DEF(PythonMeasurementBuilder), module, "PythonMeasurementBuilder", 1);
          }

          void t_PythonMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementBuilder), "class_", make_descriptor(PythonMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementBuilder), "wrapfn_", make_descriptor(t_PythonMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMeasurementBuilder::initializeClass);
            JNINativeMethod methods[] = {
              { "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V", (void *) t_PythonMeasurementBuilder_addModifier0 },
              { "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;", (void *) t_PythonMeasurementBuilder_build1 },
              { "getModifiers", "()Ljava/util/List;", (void *) t_PythonMeasurementBuilder_getModifiers2 },
              { "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;", (void *) t_PythonMeasurementBuilder_getSatellites3 },
              { "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonMeasurementBuilder_init4 },
              { "pythonDecRef", "()V", (void *) t_PythonMeasurementBuilder_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_PythonMeasurementBuilder::wrap_Object(PythonMeasurementBuilder(((t_PythonMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_PythonMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonMeasurementBuilder_of_(t_PythonMeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonMeasurementBuilder_init_(t_PythonMeasurementBuilder *self, PyObject *args, PyObject *kwds)
          {
            PythonMeasurementBuilder object((jobject) NULL);

            INT_CALL(object = PythonMeasurementBuilder());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMeasurementBuilder_finalize(t_PythonMeasurementBuilder *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMeasurementBuilder_pythonExtension(t_PythonMeasurementBuilder *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static void JNICALL t_PythonMeasurementBuilder_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimationModifier::wrap_Object(::org::orekit::estimation::measurements::EstimationModifier(a0));
            PyObject *result = PyObject_CallMethod(obj, "addModifier", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static jobject JNICALL t_PythonMeasurementBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::java::util::t_Map::wrap_Object(::java::util::Map(a1));
            PyObject *result = PyObject_CallMethod(obj, "build", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &value))
            {
              throwTypeError("build", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonMeasurementBuilder_getModifiers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getModifiers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getModifiers", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonMeasurementBuilder_getSatellites3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &value))
            {
              throwTypeError("getSatellites", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static void JNICALL t_PythonMeasurementBuilder_init4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonMeasurementBuilder_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMeasurementBuilder_get__self(t_PythonMeasurementBuilder *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
          static PyObject *t_PythonMeasurementBuilder_get__parameters_(t_PythonMeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Class.h"
#include "java/lang/InstantiationException.h"
#include "java/io/Serializable.h"
#include "java/io/InputStream.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/SecurityException.h"
#include "java/lang/Package.h"
#include "java/lang/Module.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Class::class$ = NULL;
    jmethodID *Class::mids$ = NULL;
    bool Class::live$ = false;

    jclass Class::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Class");

        mids$ = new jmethodID[max_mid];
        mids$[mid_asSubclass_f9a283d4dd9d381f] = env->getMethodID(cls, "asSubclass", "(Ljava/lang/Class;)Ljava/lang/Class;");
        mids$[mid_cast_05290476c26136d7] = env->getMethodID(cls, "cast", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_desiredAssertionStatus_eee3de00fe971136] = env->getMethodID(cls, "desiredAssertionStatus", "()Z");
        mids$[mid_forName_460cf69d907ca8bf] = env->getStaticMethodID(cls, "forName", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_forName_7bd6bba181ab0758] = env->getStaticMethodID(cls, "forName", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_forName_8328a6bb3cdd123e] = env->getStaticMethodID(cls, "forName", "(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class;");
        mids$[mid_getCanonicalName_d2c8eb4129821f0e] = env->getMethodID(cls, "getCanonicalName", "()Ljava/lang/String;");
        mids$[mid_getClassLoader_7e232a6d8e4f63bc] = env->getMethodID(cls, "getClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getClasses_43ba7a5d6b18fc61] = env->getMethodID(cls, "getClasses", "()[Ljava/lang/Class;");
        mids$[mid_getComponentType_d5247e4b166c4ce8] = env->getMethodID(cls, "getComponentType", "()Ljava/lang/Class;");
        mids$[mid_getDeclaredClasses_43ba7a5d6b18fc61] = env->getMethodID(cls, "getDeclaredClasses", "()[Ljava/lang/Class;");
        mids$[mid_getDeclaringClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getDeclaringClass", "()Ljava/lang/Class;");
        mids$[mid_getEnclosingClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getEnclosingClass", "()Ljava/lang/Class;");
        mids$[mid_getEnumConstants_2ab86268ef7a6631] = env->getMethodID(cls, "getEnumConstants", "()[Ljava/lang/Object;");
        mids$[mid_getInterfaces_43ba7a5d6b18fc61] = env->getMethodID(cls, "getInterfaces", "()[Ljava/lang/Class;");
        mids$[mid_getModifiers_d6ab429752e7c267] = env->getMethodID(cls, "getModifiers", "()I");
        mids$[mid_getModule_61f66fcaa02aad4a] = env->getMethodID(cls, "getModule", "()Ljava/lang/Module;");
        mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getNestHost_d5247e4b166c4ce8] = env->getMethodID(cls, "getNestHost", "()Ljava/lang/Class;");
        mids$[mid_getNestMembers_43ba7a5d6b18fc61] = env->getMethodID(cls, "getNestMembers", "()[Ljava/lang/Class;");
        mids$[mid_getPackage_8d05763394d733bc] = env->getMethodID(cls, "getPackage", "()Ljava/lang/Package;");
        mids$[mid_getPackageName_d2c8eb4129821f0e] = env->getMethodID(cls, "getPackageName", "()Ljava/lang/String;");
        mids$[mid_getResource_549d2318dcb16c72] = env->getMethodID(cls, "getResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getResourceAsStream_05f5377821499489] = env->getMethodID(cls, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_getSigners_2ab86268ef7a6631] = env->getMethodID(cls, "getSigners", "()[Ljava/lang/Object;");
        mids$[mid_getSimpleName_d2c8eb4129821f0e] = env->getMethodID(cls, "getSimpleName", "()Ljava/lang/String;");
        mids$[mid_getSuperclass_d5247e4b166c4ce8] = env->getMethodID(cls, "getSuperclass", "()Ljava/lang/Class;");
        mids$[mid_getTypeName_d2c8eb4129821f0e] = env->getMethodID(cls, "getTypeName", "()Ljava/lang/String;");
        mids$[mid_isAnnotation_eee3de00fe971136] = env->getMethodID(cls, "isAnnotation", "()Z");
        mids$[mid_isAnonymousClass_eee3de00fe971136] = env->getMethodID(cls, "isAnonymousClass", "()Z");
        mids$[mid_isArray_eee3de00fe971136] = env->getMethodID(cls, "isArray", "()Z");
        mids$[mid_isAssignableFrom_2d405d48789924af] = env->getMethodID(cls, "isAssignableFrom", "(Ljava/lang/Class;)Z");
        mids$[mid_isEnum_eee3de00fe971136] = env->getMethodID(cls, "isEnum", "()Z");
        mids$[mid_isInstance_72faff9b05f5ed5e] = env->getMethodID(cls, "isInstance", "(Ljava/lang/Object;)Z");
        mids$[mid_isInterface_eee3de00fe971136] = env->getMethodID(cls, "isInterface", "()Z");
        mids$[mid_isLocalClass_eee3de00fe971136] = env->getMethodID(cls, "isLocalClass", "()Z");
        mids$[mid_isMemberClass_eee3de00fe971136] = env->getMethodID(cls, "isMemberClass", "()Z");
        mids$[mid_isNestmateOf_2d405d48789924af] = env->getMethodID(cls, "isNestmateOf", "(Ljava/lang/Class;)Z");
        mids$[mid_isPrimitive_eee3de00fe971136] = env->getMethodID(cls, "isPrimitive", "()Z");
        mids$[mid_isSynthetic_eee3de00fe971136] = env->getMethodID(cls, "isSynthetic", "()Z");
        mids$[mid_newInstance_704a5bee58538972] = env->getMethodID(cls, "newInstance", "()Ljava/lang/Object;");
        mids$[mid_toGenericString_d2c8eb4129821f0e] = env->getMethodID(cls, "toGenericString", "()Ljava/lang/String;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Class Class::asSubclass(const Class & a0) const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_asSubclass_f9a283d4dd9d381f], a0.this$));
    }

    ::java::lang::Object Class::cast(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_cast_05290476c26136d7], a0.this$));
    }

    jboolean Class::desiredAssertionStatus() const
    {
      return env->callBooleanMethod(this$, mids$[mid_desiredAssertionStatus_eee3de00fe971136]);
    }

    Class Class::forName(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Class(env->callStaticObjectMethod(cls, mids$[mid_forName_460cf69d907ca8bf], a0.this$));
    }

    Class Class::forName(const ::java::lang::Module & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Class(env->callStaticObjectMethod(cls, mids$[mid_forName_7bd6bba181ab0758], a0.this$, a1.this$));
    }

    Class Class::forName(const ::java::lang::String & a0, jboolean a1, const ::java::lang::ClassLoader & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return Class(env->callStaticObjectMethod(cls, mids$[mid_forName_8328a6bb3cdd123e], a0.this$, a1, a2.this$));
    }

    ::java::lang::String Class::getCanonicalName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCanonicalName_d2c8eb4129821f0e]));
    }

    ::java::lang::ClassLoader Class::getClassLoader() const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_getClassLoader_7e232a6d8e4f63bc]));
    }

    JArray< Class > Class::getClasses() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getClasses_43ba7a5d6b18fc61]));
    }

    Class Class::getComponentType() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getComponentType_d5247e4b166c4ce8]));
    }

    JArray< Class > Class::getDeclaredClasses() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getDeclaredClasses_43ba7a5d6b18fc61]));
    }

    Class Class::getDeclaringClass() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getDeclaringClass_d5247e4b166c4ce8]));
    }

    Class Class::getEnclosingClass() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getEnclosingClass_d5247e4b166c4ce8]));
    }

    JArray< ::java::lang::Object > Class::getEnumConstants() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getEnumConstants_2ab86268ef7a6631]));
    }

    JArray< Class > Class::getInterfaces() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getInterfaces_43ba7a5d6b18fc61]));
    }

    jint Class::getModifiers() const
    {
      return env->callIntMethod(this$, mids$[mid_getModifiers_d6ab429752e7c267]);
    }

    ::java::lang::Module Class::getModule() const
    {
      return ::java::lang::Module(env->callObjectMethod(this$, mids$[mid_getModule_61f66fcaa02aad4a]));
    }

    ::java::lang::String Class::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
    }

    Class Class::getNestHost() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getNestHost_d5247e4b166c4ce8]));
    }

    JArray< Class > Class::getNestMembers() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getNestMembers_43ba7a5d6b18fc61]));
    }

    ::java::lang::Package Class::getPackage() const
    {
      return ::java::lang::Package(env->callObjectMethod(this$, mids$[mid_getPackage_8d05763394d733bc]));
    }

    ::java::lang::String Class::getPackageName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPackageName_d2c8eb4129821f0e]));
    }

    ::java::net::URL Class::getResource(const ::java::lang::String & a0) const
    {
      return ::java::net::URL(env->callObjectMethod(this$, mids$[mid_getResource_549d2318dcb16c72], a0.this$));
    }

    ::java::io::InputStream Class::getResourceAsStream(const ::java::lang::String & a0) const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_getResourceAsStream_05f5377821499489], a0.this$));
    }

    JArray< ::java::lang::Object > Class::getSigners() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getSigners_2ab86268ef7a6631]));
    }

    ::java::lang::String Class::getSimpleName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSimpleName_d2c8eb4129821f0e]));
    }

    Class Class::getSuperclass() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getSuperclass_d5247e4b166c4ce8]));
    }

    ::java::lang::String Class::getTypeName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTypeName_d2c8eb4129821f0e]));
    }

    jboolean Class::isAnnotation() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAnnotation_eee3de00fe971136]);
    }

    jboolean Class::isAnonymousClass() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAnonymousClass_eee3de00fe971136]);
    }

    jboolean Class::isArray() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isArray_eee3de00fe971136]);
    }

    jboolean Class::isAssignableFrom(const Class & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAssignableFrom_2d405d48789924af], a0.this$);
    }

    jboolean Class::isEnum() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEnum_eee3de00fe971136]);
    }

    jboolean Class::isInstance(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInstance_72faff9b05f5ed5e], a0.this$);
    }

    jboolean Class::isInterface() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInterface_eee3de00fe971136]);
    }

    jboolean Class::isLocalClass() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isLocalClass_eee3de00fe971136]);
    }

    jboolean Class::isMemberClass() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isMemberClass_eee3de00fe971136]);
    }

    jboolean Class::isNestmateOf(const Class & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNestmateOf_2d405d48789924af], a0.this$);
    }

    jboolean Class::isPrimitive() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPrimitive_eee3de00fe971136]);
    }

    jboolean Class::isSynthetic() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isSynthetic_eee3de00fe971136]);
    }

    ::java::lang::Object Class::newInstance() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_newInstance_704a5bee58538972]));
    }

    ::java::lang::String Class::toGenericString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toGenericString_d2c8eb4129821f0e]));
    }

    ::java::lang::String Class::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Class_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Class_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Class_of_(t_Class *self, PyObject *args);
    static PyObject *t_Class_asSubclass(t_Class *self, PyObject *arg);
    static PyObject *t_Class_cast(t_Class *self, PyObject *arg);
    static PyObject *t_Class_desiredAssertionStatus(t_Class *self);
    static PyObject *t_Class_forName(PyTypeObject *type, PyObject *args);
    static PyObject *t_Class_getCanonicalName(t_Class *self);
    static PyObject *t_Class_getClassLoader(t_Class *self);
    static PyObject *t_Class_getClasses(t_Class *self);
    static PyObject *t_Class_getComponentType(t_Class *self);
    static PyObject *t_Class_getDeclaredClasses(t_Class *self);
    static PyObject *t_Class_getDeclaringClass(t_Class *self);
    static PyObject *t_Class_getEnclosingClass(t_Class *self);
    static PyObject *t_Class_getEnumConstants(t_Class *self);
    static PyObject *t_Class_getInterfaces(t_Class *self);
    static PyObject *t_Class_getModifiers(t_Class *self);
    static PyObject *t_Class_getModule(t_Class *self);
    static PyObject *t_Class_getName(t_Class *self);
    static PyObject *t_Class_getNestHost(t_Class *self);
    static PyObject *t_Class_getNestMembers(t_Class *self);
    static PyObject *t_Class_getPackage(t_Class *self);
    static PyObject *t_Class_getPackageName(t_Class *self);
    static PyObject *t_Class_getResource(t_Class *self, PyObject *arg);
    static PyObject *t_Class_getResourceAsStream(t_Class *self, PyObject *arg);
    static PyObject *t_Class_getSigners(t_Class *self);
    static PyObject *t_Class_getSimpleName(t_Class *self);
    static PyObject *t_Class_getSuperclass(t_Class *self);
    static PyObject *t_Class_getTypeName(t_Class *self);
    static PyObject *t_Class_isAnnotation(t_Class *self);
    static PyObject *t_Class_isAnonymousClass(t_Class *self);
    static PyObject *t_Class_isArray(t_Class *self);
    static PyObject *t_Class_isAssignableFrom(t_Class *self, PyObject *arg);
    static PyObject *t_Class_isEnum(t_Class *self);
    static PyObject *t_Class_isInstance(t_Class *self, PyObject *arg);
    static PyObject *t_Class_isInterface(t_Class *self);
    static PyObject *t_Class_isLocalClass(t_Class *self);
    static PyObject *t_Class_isMemberClass(t_Class *self);
    static PyObject *t_Class_isNestmateOf(t_Class *self, PyObject *arg);
    static PyObject *t_Class_isPrimitive(t_Class *self);
    static PyObject *t_Class_isSynthetic(t_Class *self);
    static PyObject *t_Class_newInstance(t_Class *self);
    static PyObject *t_Class_toGenericString(t_Class *self);
    static PyObject *t_Class_toString(t_Class *self, PyObject *args);
    static PyObject *t_Class_get__annotation(t_Class *self, void *data);
    static PyObject *t_Class_get__anonymousClass(t_Class *self, void *data);
    static PyObject *t_Class_get__array(t_Class *self, void *data);
    static PyObject *t_Class_get__canonicalName(t_Class *self, void *data);
    static PyObject *t_Class_get__classLoader(t_Class *self, void *data);
    static PyObject *t_Class_get__classes(t_Class *self, void *data);
    static PyObject *t_Class_get__componentType(t_Class *self, void *data);
    static PyObject *t_Class_get__declaredClasses(t_Class *self, void *data);
    static PyObject *t_Class_get__declaringClass(t_Class *self, void *data);
    static PyObject *t_Class_get__enclosingClass(t_Class *self, void *data);
    static PyObject *t_Class_get__enum(t_Class *self, void *data);
    static PyObject *t_Class_get__enumConstants(t_Class *self, void *data);
    static PyObject *t_Class_get__interface(t_Class *self, void *data);
    static PyObject *t_Class_get__interfaces(t_Class *self, void *data);
    static PyObject *t_Class_get__localClass(t_Class *self, void *data);
    static PyObject *t_Class_get__memberClass(t_Class *self, void *data);
    static PyObject *t_Class_get__modifiers(t_Class *self, void *data);
    static PyObject *t_Class_get__module(t_Class *self, void *data);
    static PyObject *t_Class_get__name(t_Class *self, void *data);
    static PyObject *t_Class_get__nestHost(t_Class *self, void *data);
    static PyObject *t_Class_get__nestMembers(t_Class *self, void *data);
    static PyObject *t_Class_get__package(t_Class *self, void *data);
    static PyObject *t_Class_get__packageName(t_Class *self, void *data);
    static PyObject *t_Class_get__primitive(t_Class *self, void *data);
    static PyObject *t_Class_get__signers(t_Class *self, void *data);
    static PyObject *t_Class_get__simpleName(t_Class *self, void *data);
    static PyObject *t_Class_get__superclass(t_Class *self, void *data);
    static PyObject *t_Class_get__synthetic(t_Class *self, void *data);
    static PyObject *t_Class_get__typeName(t_Class *self, void *data);
    static PyObject *t_Class_get__parameters_(t_Class *self, void *data);
    static PyGetSetDef t_Class__fields_[] = {
      DECLARE_GET_FIELD(t_Class, annotation),
      DECLARE_GET_FIELD(t_Class, anonymousClass),
      DECLARE_GET_FIELD(t_Class, array),
      DECLARE_GET_FIELD(t_Class, canonicalName),
      DECLARE_GET_FIELD(t_Class, classLoader),
      DECLARE_GET_FIELD(t_Class, classes),
      DECLARE_GET_FIELD(t_Class, componentType),
      DECLARE_GET_FIELD(t_Class, declaredClasses),
      DECLARE_GET_FIELD(t_Class, declaringClass),
      DECLARE_GET_FIELD(t_Class, enclosingClass),
      DECLARE_GET_FIELD(t_Class, enum),
      DECLARE_GET_FIELD(t_Class, enumConstants),
      DECLARE_GET_FIELD(t_Class, interface),
      DECLARE_GET_FIELD(t_Class, interfaces),
      DECLARE_GET_FIELD(t_Class, localClass),
      DECLARE_GET_FIELD(t_Class, memberClass),
      DECLARE_GET_FIELD(t_Class, modifiers),
      DECLARE_GET_FIELD(t_Class, module),
      DECLARE_GET_FIELD(t_Class, name),
      DECLARE_GET_FIELD(t_Class, nestHost),
      DECLARE_GET_FIELD(t_Class, nestMembers),
      DECLARE_GET_FIELD(t_Class, package),
      DECLARE_GET_FIELD(t_Class, packageName),
      DECLARE_GET_FIELD(t_Class, primitive),
      DECLARE_GET_FIELD(t_Class, signers),
      DECLARE_GET_FIELD(t_Class, simpleName),
      DECLARE_GET_FIELD(t_Class, superclass),
      DECLARE_GET_FIELD(t_Class, synthetic),
      DECLARE_GET_FIELD(t_Class, typeName),
      DECLARE_GET_FIELD(t_Class, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Class__methods_[] = {
      DECLARE_METHOD(t_Class, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Class, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Class, of_, METH_VARARGS),
      DECLARE_METHOD(t_Class, asSubclass, METH_O),
      DECLARE_METHOD(t_Class, cast, METH_O),
      DECLARE_METHOD(t_Class, desiredAssertionStatus, METH_NOARGS),
      DECLARE_METHOD(t_Class, forName, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Class, getCanonicalName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getClassLoader, METH_NOARGS),
      DECLARE_METHOD(t_Class, getClasses, METH_NOARGS),
      DECLARE_METHOD(t_Class, getComponentType, METH_NOARGS),
      DECLARE_METHOD(t_Class, getDeclaredClasses, METH_NOARGS),
      DECLARE_METHOD(t_Class, getDeclaringClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, getEnclosingClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, getEnumConstants, METH_NOARGS),
      DECLARE_METHOD(t_Class, getInterfaces, METH_NOARGS),
      DECLARE_METHOD(t_Class, getModifiers, METH_NOARGS),
      DECLARE_METHOD(t_Class, getModule, METH_NOARGS),
      DECLARE_METHOD(t_Class, getName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getNestHost, METH_NOARGS),
      DECLARE_METHOD(t_Class, getNestMembers, METH_NOARGS),
      DECLARE_METHOD(t_Class, getPackage, METH_NOARGS),
      DECLARE_METHOD(t_Class, getPackageName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getResource, METH_O),
      DECLARE_METHOD(t_Class, getResourceAsStream, METH_O),
      DECLARE_METHOD(t_Class, getSigners, METH_NOARGS),
      DECLARE_METHOD(t_Class, getSimpleName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getSuperclass, METH_NOARGS),
      DECLARE_METHOD(t_Class, getTypeName, METH_NOARGS),
      DECLARE_METHOD(t_Class, isAnnotation, METH_NOARGS),
      DECLARE_METHOD(t_Class, isAnonymousClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, isArray, METH_NOARGS),
      DECLARE_METHOD(t_Class, isAssignableFrom, METH_O),
      DECLARE_METHOD(t_Class, isEnum, METH_NOARGS),
      DECLARE_METHOD(t_Class, isInstance, METH_O),
      DECLARE_METHOD(t_Class, isInterface, METH_NOARGS),
      DECLARE_METHOD(t_Class, isLocalClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, isMemberClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, isNestmateOf, METH_O),
      DECLARE_METHOD(t_Class, isPrimitive, METH_NOARGS),
      DECLARE_METHOD(t_Class, isSynthetic, METH_NOARGS),
      DECLARE_METHOD(t_Class, newInstance, METH_NOARGS),
      DECLARE_METHOD(t_Class, toGenericString, METH_NOARGS),
      DECLARE_METHOD(t_Class, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Class)[] = {
      { Py_tp_methods, t_Class__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Class__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Class)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Class, t_Class, Class);
    PyObject *t_Class::wrap_Object(const Class& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Class::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Class *self = (t_Class *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Class::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Class::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Class *self = (t_Class *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Class::install(PyObject *module)
    {
      installType(&PY_TYPE(Class), &PY_TYPE_DEF(Class), module, "Class", 0);
    }

    void t_Class::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Class), "class_", make_descriptor(Class::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Class), "wrapfn_", make_descriptor(t_Class::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Class), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Class_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Class::initializeClass, 1)))
        return NULL;
      return t_Class::wrap_Object(Class(((t_Class *) arg)->object.this$));
    }
    static PyObject *t_Class_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Class::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Class_of_(t_Class *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Class_asSubclass(t_Class *self, PyObject *arg)
    {
      Class a0((jobject) NULL);
      PyTypeObject **p0;
      Class result((jobject) NULL);

      if (!parseArg(arg, "K", Class::initializeClass, &a0, &p0, t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.asSubclass(a0));
        return t_Class::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "asSubclass", arg);
      return NULL;
    }

    static PyObject *t_Class_cast(t_Class *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.cast(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "cast", arg);
      return NULL;
    }

    static PyObject *t_Class_desiredAssertionStatus(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.desiredAssertionStatus());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_forName(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Class result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Class::forName(a0));
            return t_Class::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Module a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          Class result((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::lang::Module::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Class::forName(a0, a1));
            return t_Class::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean a1;
          ::java::lang::ClassLoader a2((jobject) NULL);
          Class result((jobject) NULL);

          if (!parseArgs(args, "sZk", ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Class::forName(a0, a1, a2));
            return t_Class::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "forName", args);
      return NULL;
    }

    static PyObject *t_Class_getCanonicalName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCanonicalName());
      return j2p(result);
    }

    static PyObject *t_Class_getClassLoader(t_Class *self)
    {
      ::java::lang::ClassLoader result((jobject) NULL);
      OBJ_CALL(result = self->object.getClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(result);
    }

    static PyObject *t_Class_getClasses(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getClasses());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getComponentType(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getComponentType());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getDeclaredClasses(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getDeclaredClasses());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getDeclaringClass(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getDeclaringClass());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getEnclosingClass(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getEnclosingClass());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getEnumConstants(t_Class *self)
    {
      JArray< ::java::lang::Object > result((jobject) NULL);
      OBJ_CALL(result = self->object.getEnumConstants());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_getInterfaces(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getInterfaces());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getModifiers(t_Class *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getModifiers());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Class_getModule(t_Class *self)
    {
      ::java::lang::Module result((jobject) NULL);
      OBJ_CALL(result = self->object.getModule());
      return ::java::lang::t_Module::wrap_Object(result);
    }

    static PyObject *t_Class_getName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_Class_getNestHost(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getNestHost());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getNestMembers(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getNestMembers());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getPackage(t_Class *self)
    {
      ::java::lang::Package result((jobject) NULL);
      OBJ_CALL(result = self->object.getPackage());
      return ::java::lang::t_Package::wrap_Object(result);
    }

    static PyObject *t_Class_getPackageName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPackageName());
      return j2p(result);
    }

    static PyObject *t_Class_getResource(t_Class *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::net::URL result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getResource(a0));
        return ::java::net::t_URL::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getResource", arg);
      return NULL;
    }

    static PyObject *t_Class_getResourceAsStream(t_Class *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::io::InputStream result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getResourceAsStream(a0));
        return ::java::io::t_InputStream::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getResourceAsStream", arg);
      return NULL;
    }

    static PyObject *t_Class_getSigners(t_Class *self)
    {
      JArray< ::java::lang::Object > result((jobject) NULL);
      OBJ_CALL(result = self->object.getSigners());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_getSimpleName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getSimpleName());
      return j2p(result);
    }

    static PyObject *t_Class_getSuperclass(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getSuperclass());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getTypeName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getTypeName());
      return j2p(result);
    }

    static PyObject *t_Class_isAnnotation(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAnnotation());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isAnonymousClass(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAnonymousClass());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isArray(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isArray());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isAssignableFrom(t_Class *self, PyObject *arg)
    {
      Class a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Class::initializeClass, &a0, &p0, t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.isAssignableFrom(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isAssignableFrom", arg);
      return NULL;
    }

    static PyObject *t_Class_isEnum(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEnum());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isInstance(t_Class *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.isInstance(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isInstance", arg);
      return NULL;
    }

    static PyObject *t_Class_isInterface(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInterface());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isLocalClass(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isLocalClass());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isMemberClass(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isMemberClass());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isNestmateOf(t_Class *self, PyObject *arg)
    {
      Class a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Class::initializeClass, &a0, &p0, t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.isNestmateOf(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isNestmateOf", arg);
      return NULL;
    }

    static PyObject *t_Class_isPrimitive(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isPrimitive());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isSynthetic(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isSynthetic());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_newInstance(t_Class *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.newInstance());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Class_toGenericString(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toGenericString());
      return j2p(result);
    }

    static PyObject *t_Class_toString(t_Class *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Class), (PyObject *) self, "toString", args, 2);
    }
    static PyObject *t_Class_get__parameters_(t_Class *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Class_get__annotation(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAnnotation());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__anonymousClass(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAnonymousClass());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__array(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isArray());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__canonicalName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCanonicalName());
      return j2p(value);
    }

    static PyObject *t_Class_get__classLoader(t_Class *self, void *data)
    {
      ::java::lang::ClassLoader value((jobject) NULL);
      OBJ_CALL(value = self->object.getClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(value);
    }

    static PyObject *t_Class_get__classes(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getClasses());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__componentType(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getComponentType());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__declaredClasses(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getDeclaredClasses());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__declaringClass(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getDeclaringClass());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__enclosingClass(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getEnclosingClass());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__enum(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEnum());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__enumConstants(t_Class *self, void *data)
    {
      JArray< ::java::lang::Object > value((jobject) NULL);
      OBJ_CALL(value = self->object.getEnumConstants());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_get__interface(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInterface());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__interfaces(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getInterfaces());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__localClass(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isLocalClass());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__memberClass(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isMemberClass());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__modifiers(t_Class *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getModifiers());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Class_get__module(t_Class *self, void *data)
    {
      ::java::lang::Module value((jobject) NULL);
      OBJ_CALL(value = self->object.getModule());
      return ::java::lang::t_Module::wrap_Object(value);
    }

    static PyObject *t_Class_get__name(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_Class_get__nestHost(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getNestHost());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__nestMembers(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getNestMembers());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__package(t_Class *self, void *data)
    {
      ::java::lang::Package value((jobject) NULL);
      OBJ_CALL(value = self->object.getPackage());
      return ::java::lang::t_Package::wrap_Object(value);
    }

    static PyObject *t_Class_get__packageName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPackageName());
      return j2p(value);
    }

    static PyObject *t_Class_get__primitive(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isPrimitive());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__signers(t_Class *self, void *data)
    {
      JArray< ::java::lang::Object > value((jobject) NULL);
      OBJ_CALL(value = self->object.getSigners());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_get__simpleName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getSimpleName());
      return j2p(value);
    }

    static PyObject *t_Class_get__superclass(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getSuperclass());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__synthetic(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isSynthetic());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__typeName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getTypeName());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *Propagator::class$ = NULL;
      jmethodID *Propagator::mids$ = NULL;
      bool Propagator::live$ = false;
      jdouble Propagator::DEFAULT_MASS = (jdouble) 0;

      jclass Propagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/Propagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_b928bf8cc239d256] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_addEventDetector_d5d8be0538a03d97] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_ff7cb6c242604316] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_clearStepHandlers_ff7cb6c242604316] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getAdditionalStateProviders_d751c1a57012b438] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getDefaultLaw_f1f7bce7e37c6844] = env->getStaticMethodID(cls, "getDefaultLaw", "(Lorg/orekit/frames/Frames;)Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_9f3d902ece22e1af] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_3bfef5c77ceb081a] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_8fbfa58855031235] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_f81c0644d57ae495] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_ddcdca7ad3c7f5e9] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_1e982279849c3b65] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_propagate_aaae977c62060398] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setStepHandler_a99d5b52ca8703a8] = env->getMethodID(cls, "setStepHandler", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");
          mids$[mid_setStepHandler_e1387cf2cfecde7f] = env->getMethodID(cls, "setStepHandler", "(DLorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
          mids$[mid_setupMatricesComputation_0a26c8b4f543ed52] = env->getMethodID(cls, "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_MASS = env->getStaticDoubleField(cls, "DEFAULT_MASS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void Propagator::addAdditionalStateProvider(const ::org::orekit::propagation::AdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_b928bf8cc239d256], a0.this$);
      }

      void Propagator::addEventDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_d5d8be0538a03d97], a0.this$);
      }

      void Propagator::clearEventsDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_ff7cb6c242604316]);
      }

      void Propagator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_ff7cb6c242604316]);
      }

      ::java::util::List Propagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_d751c1a57012b438]));
      }

      ::org::orekit::attitudes::AttitudeProvider Propagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c]));
      }

      ::org::orekit::attitudes::AttitudeProvider Propagator::getDefaultLaw(const ::org::orekit::frames::Frames & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::attitudes::AttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_getDefaultLaw_f1f7bce7e37c6844], a0.this$));
      }

      ::org::orekit::propagation::EphemerisGenerator Propagator::getEphemerisGenerator() const
      {
        return ::org::orekit::propagation::EphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_9f3d902ece22e1af]));
      }

      ::java::util::Collection Propagator::getEventsDetectors() const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_3bfef5c77ceb081a]));
      }

      ::org::orekit::frames::Frame Propagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
      }

      ::org::orekit::propagation::SpacecraftState Propagator::getInitialState() const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_8fbfa58855031235]));
      }

      JArray< ::java::lang::String > Propagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_f81c0644d57ae495]));
      }

      ::org::orekit::propagation::sampling::StepHandlerMultiplexer Propagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::StepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_ddcdca7ad3c7f5e9]));
      }

      jboolean Propagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41], a0.this$);
      }

      ::org::orekit::propagation::SpacecraftState Propagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_1e982279849c3b65], a0.this$));
      }

      ::org::orekit::propagation::SpacecraftState Propagator::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_aaae977c62060398], a0.this$, a1.this$));
      }

      void Propagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_72b846eb87f3af9a], a0.this$);
      }

      void Propagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
      }

      void Propagator::setStepHandler(const ::org::orekit::propagation::sampling::OrekitStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_a99d5b52ca8703a8], a0.this$);
      }

      void Propagator::setStepHandler(jdouble a0, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_e1387cf2cfecde7f], a0, a1.this$);
      }

      ::org::orekit::propagation::MatricesHarvester Propagator::setupMatricesComputation(const ::java::lang::String & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) const
      {
        return ::org::orekit::propagation::MatricesHarvester(env->callObjectMethod(this$, mids$[mid_setupMatricesComputation_0a26c8b4f543ed52], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      static PyObject *t_Propagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Propagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Propagator_addAdditionalStateProvider(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_addEventDetector(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_clearEventsDetectors(t_Propagator *self);
      static PyObject *t_Propagator_clearStepHandlers(t_Propagator *self);
      static PyObject *t_Propagator_getAdditionalStateProviders(t_Propagator *self);
      static PyObject *t_Propagator_getAttitudeProvider(t_Propagator *self);
      static PyObject *t_Propagator_getDefaultLaw(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Propagator_getEphemerisGenerator(t_Propagator *self);
      static PyObject *t_Propagator_getEventsDetectors(t_Propagator *self);
      static PyObject *t_Propagator_getFrame(t_Propagator *self);
      static PyObject *t_Propagator_getInitialState(t_Propagator *self);
      static PyObject *t_Propagator_getManagedAdditionalStates(t_Propagator *self);
      static PyObject *t_Propagator_getMultiplexer(t_Propagator *self);
      static PyObject *t_Propagator_isAdditionalStateManaged(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_propagate(t_Propagator *self, PyObject *args);
      static PyObject *t_Propagator_resetInitialState(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_setAttitudeProvider(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_setStepHandler(t_Propagator *self, PyObject *args);
      static PyObject *t_Propagator_setupMatricesComputation(t_Propagator *self, PyObject *args);
      static PyObject *t_Propagator_get__additionalStateProviders(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__attitudeProvider(t_Propagator *self, void *data);
      static int t_Propagator_set__attitudeProvider(t_Propagator *self, PyObject *arg, void *data);
      static PyObject *t_Propagator_get__ephemerisGenerator(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__eventsDetectors(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__frame(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__initialState(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__managedAdditionalStates(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__multiplexer(t_Propagator *self, void *data);
      static int t_Propagator_set__stepHandler(t_Propagator *self, PyObject *arg, void *data);
      static PyGetSetDef t_Propagator__fields_[] = {
        DECLARE_GET_FIELD(t_Propagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_Propagator, attitudeProvider),
        DECLARE_GET_FIELD(t_Propagator, ephemerisGenerator),
        DECLARE_GET_FIELD(t_Propagator, eventsDetectors),
        DECLARE_GET_FIELD(t_Propagator, frame),
        DECLARE_GET_FIELD(t_Propagator, initialState),
        DECLARE_GET_FIELD(t_Propagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_Propagator, multiplexer),
        DECLARE_SET_FIELD(t_Propagator, stepHandler),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Propagator__methods_[] = {
        DECLARE_METHOD(t_Propagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Propagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Propagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_Propagator, addEventDetector, METH_O),
        DECLARE_METHOD(t_Propagator, clearEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getDefaultLaw, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Propagator, getEphemerisGenerator, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_Propagator, propagate, METH_VARARGS),
        DECLARE_METHOD(t_Propagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_Propagator, setAttitudeProvider, METH_O),
        DECLARE_METHOD(t_Propagator, setStepHandler, METH_VARARGS),
        DECLARE_METHOD(t_Propagator, setupMatricesComputation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Propagator)[] = {
        { Py_tp_methods, t_Propagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Propagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Propagator)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::PVCoordinatesProvider),
        NULL
      };

      DEFINE_TYPE(Propagator, t_Propagator, Propagator);

      void t_Propagator::install(PyObject *module)
      {
        installType(&PY_TYPE(Propagator), &PY_TYPE_DEF(Propagator), module, "Propagator", 0);
      }

      void t_Propagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "class_", make_descriptor(Propagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "wrapfn_", make_descriptor(t_Propagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "boxfn_", make_descriptor(boxObject));
        env->getClass(Propagator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "DEFAULT_MASS", make_descriptor(Propagator::DEFAULT_MASS));
      }

      static PyObject *t_Propagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Propagator::initializeClass, 1)))
          return NULL;
        return t_Propagator::wrap_Object(Propagator(((t_Propagator *) arg)->object.this$));
      }
      static PyObject *t_Propagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Propagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Propagator_addAdditionalStateProvider(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::AdditionalStateProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::AdditionalStateProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_Propagator_addEventDetector(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_Propagator_clearEventsDetectors(t_Propagator *self)
      {
        OBJ_CALL(self->object.clearEventsDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_Propagator_clearStepHandlers(t_Propagator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_Propagator_getAdditionalStateProviders(t_Propagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(AdditionalStateProvider));
      }

      static PyObject *t_Propagator_getAttitudeProvider(t_Propagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_Propagator_getDefaultLaw(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Frames a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frames::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::propagation::Propagator::getDefaultLaw(a0));
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getDefaultLaw", arg);
        return NULL;
      }

      static PyObject *t_Propagator_getEphemerisGenerator(t_Propagator *self)
      {
        ::org::orekit::propagation::EphemerisGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(result);
      }

      static PyObject *t_Propagator_getEventsDetectors(t_Propagator *self)
      {
        ::java::util::Collection result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
      }

      static PyObject *t_Propagator_getFrame(t_Propagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Propagator_getInitialState(t_Propagator *self)
      {
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
      }

      static PyObject *t_Propagator_getManagedAdditionalStates(t_Propagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_Propagator_getMultiplexer(t_Propagator *self)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(result);
      }

      static PyObject *t_Propagator_isAdditionalStateManaged(t_Propagator *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAdditionalStateManaged", arg);
        return NULL;
      }

      static PyObject *t_Propagator_propagate(t_Propagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagate(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.propagate(a0, a1));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", args);
        return NULL;
      }

      static PyObject *t_Propagator_resetInitialState(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_Propagator_setAttitudeProvider(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setAttitudeProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
        return NULL;
      }

      static PyObject *t_Propagator_setStepHandler(t_Propagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::sampling::OrekitStepHandler a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setStepHandler(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            ::org::orekit::propagation::sampling::OrekitFixedStepHandler a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setStepHandler(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setStepHandler", args);
        return NULL;
      }

      static PyObject *t_Propagator_setupMatricesComputation(t_Propagator *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
        ::org::orekit::propagation::MatricesHarvester result((jobject) NULL);

        if (!parseArgs(args, "skk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.setupMatricesComputation(a0, a1, a2));
          return ::org::orekit::propagation::t_MatricesHarvester::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "setupMatricesComputation", args);
        return NULL;
      }

      static PyObject *t_Propagator_get__additionalStateProviders(t_Propagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__attitudeProvider(t_Propagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_Propagator_set__attitudeProvider(t_Propagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
          {
            INT_CALL(self->object.setAttitudeProvider(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
        return -1;
      }

      static PyObject *t_Propagator_get__ephemerisGenerator(t_Propagator *self, void *data)
      {
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__eventsDetectors(t_Propagator *self, void *data)
      {
        ::java::util::Collection value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__frame(t_Propagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__initialState(t_Propagator *self, void *data)
      {
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__managedAdditionalStates(t_Propagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_Propagator_get__multiplexer(t_Propagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(value);
      }

      static int t_Propagator_set__stepHandler(t_Propagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::sampling::OrekitStepHandler value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &value))
          {
            INT_CALL(self->object.setStepHandler(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "stepHandler", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockRangeModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockRangeModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockRangeModifier::mids$ = NULL;
          bool RelativisticJ2ClockRangeModifier::live$ = false;

          jclass RelativisticJ2ClockRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockRangeModifier::RelativisticJ2ClockRangeModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void RelativisticJ2ClockRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_RelativisticJ2ClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockRangeModifier_init_(t_RelativisticJ2ClockRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockRangeModifier_getParametersDrivers(t_RelativisticJ2ClockRangeModifier *self);
          static PyObject *t_RelativisticJ2ClockRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockRangeModifier, t_RelativisticJ2ClockRangeModifier, RelativisticJ2ClockRangeModifier);

          void t_RelativisticJ2ClockRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockRangeModifier), &PY_TYPE_DEF(RelativisticJ2ClockRangeModifier), module, "RelativisticJ2ClockRangeModifier", 0);
          }

          void t_RelativisticJ2ClockRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockRangeModifier), "class_", make_descriptor(RelativisticJ2ClockRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockRangeModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockRangeModifier::wrap_Object(RelativisticJ2ClockRangeModifier(((t_RelativisticJ2ClockRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockRangeModifier_init_(t_RelativisticJ2ClockRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_getParametersDrivers(t_RelativisticJ2ClockRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockRangeModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockRangeModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
