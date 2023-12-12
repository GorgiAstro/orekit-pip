#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/IterationListener.h"
#include "org/hipparchus/util/IterationEvent.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *IterationListener::class$ = NULL;
      jmethodID *IterationListener::mids$ = NULL;
      bool IterationListener::live$ = false;

      jclass IterationListener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/IterationListener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_initializationPerformed_68991010a72f5d93] = env->getMethodID(cls, "initializationPerformed", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_iterationPerformed_68991010a72f5d93] = env->getMethodID(cls, "iterationPerformed", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_iterationStarted_68991010a72f5d93] = env->getMethodID(cls, "iterationStarted", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_terminationPerformed_68991010a72f5d93] = env->getMethodID(cls, "terminationPerformed", "(Lorg/hipparchus/util/IterationEvent;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void IterationListener::initializationPerformed(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_initializationPerformed_68991010a72f5d93], a0.this$);
      }

      void IterationListener::iterationPerformed(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_iterationPerformed_68991010a72f5d93], a0.this$);
      }

      void IterationListener::iterationStarted(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_iterationStarted_68991010a72f5d93], a0.this$);
      }

      void IterationListener::terminationPerformed(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_terminationPerformed_68991010a72f5d93], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_IterationListener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationListener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationListener_initializationPerformed(t_IterationListener *self, PyObject *arg);
      static PyObject *t_IterationListener_iterationPerformed(t_IterationListener *self, PyObject *arg);
      static PyObject *t_IterationListener_iterationStarted(t_IterationListener *self, PyObject *arg);
      static PyObject *t_IterationListener_terminationPerformed(t_IterationListener *self, PyObject *arg);

      static PyMethodDef t_IterationListener__methods_[] = {
        DECLARE_METHOD(t_IterationListener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationListener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationListener, initializationPerformed, METH_O),
        DECLARE_METHOD(t_IterationListener, iterationPerformed, METH_O),
        DECLARE_METHOD(t_IterationListener, iterationStarted, METH_O),
        DECLARE_METHOD(t_IterationListener, terminationPerformed, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterationListener)[] = {
        { Py_tp_methods, t_IterationListener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterationListener)[] = {
        &PY_TYPE_DEF(::java::util::EventListener),
        NULL
      };

      DEFINE_TYPE(IterationListener, t_IterationListener, IterationListener);

      void t_IterationListener::install(PyObject *module)
      {
        installType(&PY_TYPE(IterationListener), &PY_TYPE_DEF(IterationListener), module, "IterationListener", 0);
      }

      void t_IterationListener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationListener), "class_", make_descriptor(IterationListener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationListener), "wrapfn_", make_descriptor(t_IterationListener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationListener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterationListener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterationListener::initializeClass, 1)))
          return NULL;
        return t_IterationListener::wrap_Object(IterationListener(((t_IterationListener *) arg)->object.this$));
      }
      static PyObject *t_IterationListener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterationListener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IterationListener_initializationPerformed(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.initializationPerformed(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "initializationPerformed", arg);
        return NULL;
      }

      static PyObject *t_IterationListener_iterationPerformed(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.iterationPerformed(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "iterationPerformed", arg);
        return NULL;
      }

      static PyObject *t_IterationListener_iterationStarted(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.iterationStarted(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "iterationStarted", arg);
        return NULL;
      }

      static PyObject *t_IterationListener_terminationPerformed(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.terminationPerformed(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "terminationPerformed", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/OneWayGNSSPhaseBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *OneWayGNSSPhaseBuilder::class$ = NULL;
          jmethodID *OneWayGNSSPhaseBuilder::mids$ = NULL;
          bool OneWayGNSSPhaseBuilder::live$ = false;

          jclass OneWayGNSSPhaseBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/OneWayGNSSPhaseBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_build_6de94fdf3d4eb161] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/OneWayGNSSPhase;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::OneWayGNSSPhase OneWayGNSSPhaseBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::OneWayGNSSPhase(env->callObjectMethod(this$, mids$[mid_build_6de94fdf3d4eb161], a0.this$, a1.this$));
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
          static PyObject *t_OneWayGNSSPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseBuilder_of_(t_OneWayGNSSPhaseBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSPhaseBuilder_build(t_OneWayGNSSPhaseBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSPhaseBuilder_get__parameters_(t_OneWayGNSSPhaseBuilder *self, void *data);
          static PyGetSetDef t_OneWayGNSSPhaseBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSPhaseBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSPhaseBuilder__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_OneWayGNSSPhaseBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSPhaseBuilder)[] = {
            { Py_tp_methods, t_OneWayGNSSPhaseBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OneWayGNSSPhaseBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSPhaseBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSPhaseBuilder, t_OneWayGNSSPhaseBuilder, OneWayGNSSPhaseBuilder);
          PyObject *t_OneWayGNSSPhaseBuilder::wrap_Object(const OneWayGNSSPhaseBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhaseBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhaseBuilder *self = (t_OneWayGNSSPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSPhaseBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhaseBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhaseBuilder *self = (t_OneWayGNSSPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSPhaseBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSPhaseBuilder), &PY_TYPE_DEF(OneWayGNSSPhaseBuilder), module, "OneWayGNSSPhaseBuilder", 0);
          }

          void t_OneWayGNSSPhaseBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseBuilder), "class_", make_descriptor(OneWayGNSSPhaseBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseBuilder), "wrapfn_", make_descriptor(t_OneWayGNSSPhaseBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OneWayGNSSPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSPhaseBuilder::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSPhaseBuilder::wrap_Object(OneWayGNSSPhaseBuilder(((t_OneWayGNSSPhaseBuilder *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSPhaseBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSPhaseBuilder_of_(t_OneWayGNSSPhaseBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OneWayGNSSPhaseBuilder_build(t_OneWayGNSSPhaseBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::OneWayGNSSPhase result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_OneWayGNSSPhase::wrap_Object(result);
            }

            return callSuper(PY_TYPE(OneWayGNSSPhaseBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_OneWayGNSSPhaseBuilder_get__parameters_(t_OneWayGNSSPhaseBuilder *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeStateHistoryMetadataKey::class$ = NULL;
              jmethodID *AttitudeStateHistoryMetadataKey::mids$ = NULL;
              bool AttitudeStateHistoryMetadataKey::live$ = false;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_BASIS = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_BASIS_ID = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_ID = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_PREV_ID = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_TYPE = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::COMMENT = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::EULER_ROT_SEQ = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::NUMBER_STATES = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::RATE_TYPE = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::REF_FRAME_A = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::REF_FRAME_B = NULL;

              jclass AttitudeStateHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_5d44bf4d68707328] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata;)Z");
                  mids$[mid_valueOf_6b45aeb714266abd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;");
                  mids$[mid_values_e75632f7806315e8] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ATT_BASIS = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_BASIS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_BASIS_ID = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_ID = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_PREV_ID = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_TYPE = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  COMMENT = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  EULER_ROT_SEQ = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  NUMBER_STATES = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "NUMBER_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  RATE_TYPE = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "RATE_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  REF_FRAME_A = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  REF_FRAME_B = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeStateHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_5d44bf4d68707328], a0.this$, a1.this$, a2.this$);
              }

              AttitudeStateHistoryMetadataKey AttitudeStateHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeStateHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6b45aeb714266abd], a0.this$));
              }

              JArray< AttitudeStateHistoryMetadataKey > AttitudeStateHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeStateHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_e75632f7806315e8]));
              }
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
          namespace adm {
            namespace acm {
              static PyObject *t_AttitudeStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadataKey_of_(t_AttitudeStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadataKey_process(t_AttitudeStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeStateHistoryMetadataKey_get__parameters_(t_AttitudeStateHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_AttitudeStateHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeStateHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeStateHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeStateHistoryMetadataKey)[] = {
                { Py_tp_methods, t_AttitudeStateHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeStateHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeStateHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeStateHistoryMetadataKey, t_AttitudeStateHistoryMetadataKey, AttitudeStateHistoryMetadataKey);
              PyObject *t_AttitudeStateHistoryMetadataKey::wrap_Object(const AttitudeStateHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeStateHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeStateHistoryMetadataKey *self = (t_AttitudeStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeStateHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeStateHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeStateHistoryMetadataKey *self = (t_AttitudeStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeStateHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeStateHistoryMetadataKey), &PY_TYPE_DEF(AttitudeStateHistoryMetadataKey), module, "AttitudeStateHistoryMetadataKey", 0);
              }

              void t_AttitudeStateHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "class_", make_descriptor(AttitudeStateHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "wrapfn_", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeStateHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_BASIS", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_BASIS_ID", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_ID", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_PREV_ID", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_TYPE", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "COMMENT", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "EULER_ROT_SEQ", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "NUMBER_STATES", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::NUMBER_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "RATE_TYPE", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::RATE_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "REF_FRAME_A", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "REF_FRAME_B", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::REF_FRAME_B)));
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeStateHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeStateHistoryMetadataKey::wrap_Object(AttitudeStateHistoryMetadataKey(((t_AttitudeStateHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeStateHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_of_(t_AttitudeStateHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_process(t_AttitudeStateHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeStateHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadataKey::valueOf(a0));
                  return t_AttitudeStateHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< AttitudeStateHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeStateHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_AttitudeStateHistoryMetadataKey_get__parameters_(t_AttitudeStateHistoryMetadataKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/JB2008SpaceEnvironmentData.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *JB2008SpaceEnvironmentData::class$ = NULL;
            jmethodID *JB2008SpaceEnvironmentData::mids$ = NULL;
            bool JB2008SpaceEnvironmentData::live$ = false;
            ::java::lang::String *JB2008SpaceEnvironmentData::DEFAULT_SUPPORTED_NAMES_DTC = NULL;
            ::java::lang::String *JB2008SpaceEnvironmentData::DEFAULT_SUPPORTED_NAMES_SOLFSMY = NULL;

            jclass JB2008SpaceEnvironmentData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/JB2008SpaceEnvironmentData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_630071dd94c59169] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
                mids$[mid_init$_fd7250d9a4ba58ec] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/data/DataSource;)V");
                mids$[mid_init$_e77392bf2c8f03c3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_063c99087c77d3f0] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDSTDTC_b0b988f941da47d8] = env->getMethodID(cls, "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getF10_b0b988f941da47d8] = env->getMethodID(cls, "getF10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getF10B_b0b988f941da47d8] = env->getMethodID(cls, "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getS10_b0b988f941da47d8] = env->getMethodID(cls, "getS10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getS10B_b0b988f941da47d8] = env->getMethodID(cls, "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getXM10_b0b988f941da47d8] = env->getMethodID(cls, "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getXM10B_b0b988f941da47d8] = env->getMethodID(cls, "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getY10_b0b988f941da47d8] = env->getMethodID(cls, "getY10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getY10B_b0b988f941da47d8] = env->getMethodID(cls, "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_SUPPORTED_NAMES_DTC = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES_DTC", "Ljava/lang/String;"));
                DEFAULT_SUPPORTED_NAMES_SOLFSMY = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES_SOLFSMY", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_630071dd94c59169, a0.this$, a1.this$)) {}

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::data::DataSource & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fd7250d9a4ba58ec, a0.this$, a1.this$)) {}

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::data::DataSource & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e77392bf2c8f03c3, a0.this$, a1.this$, a2.this$)) {}

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_063c99087c77d3f0, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            jdouble JB2008SpaceEnvironmentData::getDSTDTC(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDSTDTC_b0b988f941da47d8], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getF10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10_b0b988f941da47d8], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getF10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10B_b0b988f941da47d8], a0.this$);
            }

            ::org::orekit::time::AbsoluteDate JB2008SpaceEnvironmentData::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
            }

            ::org::orekit::time::AbsoluteDate JB2008SpaceEnvironmentData::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
            }

            jdouble JB2008SpaceEnvironmentData::getS10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10_b0b988f941da47d8], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getS10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10B_b0b988f941da47d8], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getXM10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10_b0b988f941da47d8], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getXM10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10B_b0b988f941da47d8], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getY10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10_b0b988f941da47d8], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getY10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10B_b0b988f941da47d8], a0.this$);
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_JB2008SpaceEnvironmentData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_JB2008SpaceEnvironmentData_init_(t_JB2008SpaceEnvironmentData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_JB2008SpaceEnvironmentData_getDSTDTC(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getF10(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getF10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getMaxDate(t_JB2008SpaceEnvironmentData *self);
            static PyObject *t_JB2008SpaceEnvironmentData_getMinDate(t_JB2008SpaceEnvironmentData *self);
            static PyObject *t_JB2008SpaceEnvironmentData_getS10(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getS10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getXM10(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getXM10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getY10(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getY10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_get__maxDate(t_JB2008SpaceEnvironmentData *self, void *data);
            static PyObject *t_JB2008SpaceEnvironmentData_get__minDate(t_JB2008SpaceEnvironmentData *self, void *data);
            static PyGetSetDef t_JB2008SpaceEnvironmentData__fields_[] = {
              DECLARE_GET_FIELD(t_JB2008SpaceEnvironmentData, maxDate),
              DECLARE_GET_FIELD(t_JB2008SpaceEnvironmentData, minDate),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_JB2008SpaceEnvironmentData__methods_[] = {
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getDSTDTC, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getF10, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getF10B, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getS10, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getS10B, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getXM10, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getXM10B, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getY10, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getY10B, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(JB2008SpaceEnvironmentData)[] = {
              { Py_tp_methods, t_JB2008SpaceEnvironmentData__methods_ },
              { Py_tp_init, (void *) t_JB2008SpaceEnvironmentData_init_ },
              { Py_tp_getset, t_JB2008SpaceEnvironmentData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(JB2008SpaceEnvironmentData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(JB2008SpaceEnvironmentData, t_JB2008SpaceEnvironmentData, JB2008SpaceEnvironmentData);

            void t_JB2008SpaceEnvironmentData::install(PyObject *module)
            {
              installType(&PY_TYPE(JB2008SpaceEnvironmentData), &PY_TYPE_DEF(JB2008SpaceEnvironmentData), module, "JB2008SpaceEnvironmentData", 0);
            }

            void t_JB2008SpaceEnvironmentData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "class_", make_descriptor(JB2008SpaceEnvironmentData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "wrapfn_", make_descriptor(t_JB2008SpaceEnvironmentData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "boxfn_", make_descriptor(boxObject));
              env->getClass(JB2008SpaceEnvironmentData::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "DEFAULT_SUPPORTED_NAMES_DTC", make_descriptor(j2p(*JB2008SpaceEnvironmentData::DEFAULT_SUPPORTED_NAMES_DTC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "DEFAULT_SUPPORTED_NAMES_SOLFSMY", make_descriptor(j2p(*JB2008SpaceEnvironmentData::DEFAULT_SUPPORTED_NAMES_SOLFSMY)));
            }

            static PyObject *t_JB2008SpaceEnvironmentData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, JB2008SpaceEnvironmentData::initializeClass, 1)))
                return NULL;
              return t_JB2008SpaceEnvironmentData::wrap_Object(JB2008SpaceEnvironmentData(((t_JB2008SpaceEnvironmentData *) arg)->object.this$));
            }
            static PyObject *t_JB2008SpaceEnvironmentData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, JB2008SpaceEnvironmentData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_JB2008SpaceEnvironmentData_init_(t_JB2008SpaceEnvironmentData *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::String a1((jobject) NULL);
                  JB2008SpaceEnvironmentData object((jobject) NULL);

                  if (!parseArgs(args, "ss", &a0, &a1))
                  {
                    INT_CALL(object = JB2008SpaceEnvironmentData(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::data::DataSource a1((jobject) NULL);
                  JB2008SpaceEnvironmentData object((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::data::DataSource::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = JB2008SpaceEnvironmentData(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::data::DataSource a1((jobject) NULL);
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  JB2008SpaceEnvironmentData object((jobject) NULL);

                  if (!parseArgs(args, "kkk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = JB2008SpaceEnvironmentData(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::String a1((jobject) NULL);
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  JB2008SpaceEnvironmentData object((jobject) NULL);

                  if (!parseArgs(args, "sskk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = JB2008SpaceEnvironmentData(a0, a1, a2, a3));
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

            static PyObject *t_JB2008SpaceEnvironmentData_getDSTDTC(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDSTDTC(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDSTDTC", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getF10(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getF10(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getF10", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getF10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getF10B(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getF10B", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getMaxDate(t_JB2008SpaceEnvironmentData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getMinDate(t_JB2008SpaceEnvironmentData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getS10(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getS10(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getS10", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getS10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getS10B(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getS10B", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getXM10(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getXM10(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getXM10", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getXM10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getXM10B(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getXM10B", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getY10(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getY10(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getY10", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getY10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getY10B(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getY10B", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_get__maxDate(t_JB2008SpaceEnvironmentData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_JB2008SpaceEnvironmentData_get__minDate(t_JB2008SpaceEnvironmentData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/IntegrationReference.h"
#include "org/orekit/files/ccsds/ndm/tdm/CorrectionApplied.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "org/orekit/files/ccsds/ndm/tdm/TrackingMode.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnits.h"
#include "org/orekit/files/ccsds/ndm/tdm/AngleType.h"
#include "org/orekit/files/ccsds/ndm/tdm/DataQuality.h"
#include "java/lang/Double.h"
#include "org/orekit/files/ccsds/ndm/tdm/TimetagReference.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeMode.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmMetadata::class$ = NULL;
            jmethodID *TdmMetadata::mids$ = NULL;
            bool TdmMetadata::live$ = false;

            jclass TdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addEphemerisName_da9d52f3cfda13c8] = env->getMethodID(cls, "addEphemerisName", "(ILjava/lang/String;)V");
                mids$[mid_addParticipant_da9d52f3cfda13c8] = env->getMethodID(cls, "addParticipant", "(ILjava/lang/String;)V");
                mids$[mid_addReceiveDelay_89aad365fb0ed8da] = env->getMethodID(cls, "addReceiveDelay", "(ID)V");
                mids$[mid_addTransmitDelay_89aad365fb0ed8da] = env->getMethodID(cls, "addTransmitDelay", "(ID)V");
                mids$[mid_getAngleType_ef405ad40cd92a7e] = env->getMethodID(cls, "getAngleType", "()Lorg/orekit/files/ccsds/ndm/tdm/AngleType;");
                mids$[mid_getCorrectionAberrationDiurnal_557b8123390d8d0c] = env->getMethodID(cls, "getCorrectionAberrationDiurnal", "()D");
                mids$[mid_getCorrectionAberrationYearly_557b8123390d8d0c] = env->getMethodID(cls, "getCorrectionAberrationYearly", "()D");
                mids$[mid_getCorrectionAngle1_557b8123390d8d0c] = env->getMethodID(cls, "getCorrectionAngle1", "()D");
                mids$[mid_getCorrectionAngle2_557b8123390d8d0c] = env->getMethodID(cls, "getCorrectionAngle2", "()D");
                mids$[mid_getCorrectionDoppler_557b8123390d8d0c] = env->getMethodID(cls, "getCorrectionDoppler", "()D");
                mids$[mid_getCorrectionMagnitude_557b8123390d8d0c] = env->getMethodID(cls, "getCorrectionMagnitude", "()D");
                mids$[mid_getCorrectionRange_4a1bf2149c39693a] = env->getMethodID(cls, "getCorrectionRange", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)D");
                mids$[mid_getCorrectionRcs_557b8123390d8d0c] = env->getMethodID(cls, "getCorrectionRcs", "()D");
                mids$[mid_getCorrectionReceive_557b8123390d8d0c] = env->getMethodID(cls, "getCorrectionReceive", "()D");
                mids$[mid_getCorrectionTransmit_557b8123390d8d0c] = env->getMethodID(cls, "getCorrectionTransmit", "()D");
                mids$[mid_getCorrectionsApplied_6df1a95227c350c6] = env->getMethodID(cls, "getCorrectionsApplied", "()Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;");
                mids$[mid_getDataQuality_425db0c040a6afcc] = env->getMethodID(cls, "getDataQuality", "()Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;");
                mids$[mid_getDataTypes_0d9551367f7ecdef] = env->getMethodID(cls, "getDataTypes", "()Ljava/util/List;");
                mids$[mid_getDopplerCountBias_557b8123390d8d0c] = env->getMethodID(cls, "getDopplerCountBias", "()D");
                mids$[mid_getDopplerCountScale_557b8123390d8d0c] = env->getMethodID(cls, "getDopplerCountScale", "()D");
                mids$[mid_getEphemerisNames_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getEphemerisNames", "()Ljava/util/Map;");
                mids$[mid_getFreqOffset_557b8123390d8d0c] = env->getMethodID(cls, "getFreqOffset", "()D");
                mids$[mid_getIntegrationInterval_557b8123390d8d0c] = env->getMethodID(cls, "getIntegrationInterval", "()D");
                mids$[mid_getIntegrationRef_f030f85e9f3bdae3] = env->getMethodID(cls, "getIntegrationRef", "()Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;");
                mids$[mid_getInterpolationDegree_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                mids$[mid_getInterpolationMethod_3cffd47377eca18a] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                mids$[mid_getMode_9f8d1c4bf7ce4ce2] = env->getMethodID(cls, "getMode", "()Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;");
                mids$[mid_getParticipants_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getParticipants", "()Ljava/util/Map;");
                mids$[mid_getPath_1b41cf9ebf653611] = env->getMethodID(cls, "getPath", "()[I");
                mids$[mid_getPath1_1b41cf9ebf653611] = env->getMethodID(cls, "getPath1", "()[I");
                mids$[mid_getPath2_1b41cf9ebf653611] = env->getMethodID(cls, "getPath2", "()[I");
                mids$[mid_getRangeMode_0f63cbed32b786d1] = env->getMethodID(cls, "getRangeMode", "()Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;");
                mids$[mid_getRangeModulus_4a1bf2149c39693a] = env->getMethodID(cls, "getRangeModulus", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)D");
                mids$[mid_getRangeUnits_b0ed1cfe82e0e171] = env->getMethodID(cls, "getRangeUnits", "()Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;");
                mids$[mid_getRawCorrectionRange_557b8123390d8d0c] = env->getMethodID(cls, "getRawCorrectionRange", "()D");
                mids$[mid_getRawRangeModulus_557b8123390d8d0c] = env->getMethodID(cls, "getRawRangeModulus", "()D");
                mids$[mid_getReceiveBand_3cffd47377eca18a] = env->getMethodID(cls, "getReceiveBand", "()Ljava/lang/String;");
                mids$[mid_getReceiveDelays_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getReceiveDelays", "()Ljava/util/Map;");
                mids$[mid_getReferenceFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getStartTime_7a97f7e149e79afb] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getStopTime_7a97f7e149e79afb] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTimetagRef_d21e6b8027892887] = env->getMethodID(cls, "getTimetagRef", "()Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;");
                mids$[mid_getTrackId_3cffd47377eca18a] = env->getMethodID(cls, "getTrackId", "()Ljava/lang/String;");
                mids$[mid_getTransmitBand_3cffd47377eca18a] = env->getMethodID(cls, "getTransmitBand", "()Ljava/lang/String;");
                mids$[mid_getTransmitDelays_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getTransmitDelays", "()Ljava/util/Map;");
                mids$[mid_getTurnaroundDenominator_412668abc8d889e9] = env->getMethodID(cls, "getTurnaroundDenominator", "()I");
                mids$[mid_getTurnaroundNumerator_412668abc8d889e9] = env->getMethodID(cls, "getTurnaroundNumerator", "()I");
                mids$[mid_hasDopplerCountRollover_89b302893bdbe1f1] = env->getMethodID(cls, "hasDopplerCountRollover", "()Z");
                mids$[mid_setAngleType_5cf2f2232df75738] = env->getMethodID(cls, "setAngleType", "(Lorg/orekit/files/ccsds/ndm/tdm/AngleType;)V");
                mids$[mid_setCorrectionAberrationDiurnal_10f281d777284cea] = env->getMethodID(cls, "setCorrectionAberrationDiurnal", "(D)V");
                mids$[mid_setCorrectionAberrationYearly_10f281d777284cea] = env->getMethodID(cls, "setCorrectionAberrationYearly", "(D)V");
                mids$[mid_setCorrectionAngle1_10f281d777284cea] = env->getMethodID(cls, "setCorrectionAngle1", "(D)V");
                mids$[mid_setCorrectionAngle2_10f281d777284cea] = env->getMethodID(cls, "setCorrectionAngle2", "(D)V");
                mids$[mid_setCorrectionDoppler_10f281d777284cea] = env->getMethodID(cls, "setCorrectionDoppler", "(D)V");
                mids$[mid_setCorrectionMagnitude_10f281d777284cea] = env->getMethodID(cls, "setCorrectionMagnitude", "(D)V");
                mids$[mid_setCorrectionRcs_10f281d777284cea] = env->getMethodID(cls, "setCorrectionRcs", "(D)V");
                mids$[mid_setCorrectionReceive_10f281d777284cea] = env->getMethodID(cls, "setCorrectionReceive", "(D)V");
                mids$[mid_setCorrectionTransmit_10f281d777284cea] = env->getMethodID(cls, "setCorrectionTransmit", "(D)V");
                mids$[mid_setCorrectionsApplied_853aba3eca5df956] = env->getMethodID(cls, "setCorrectionsApplied", "(Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;)V");
                mids$[mid_setDataQuality_b4d3240497d1d1f8] = env->getMethodID(cls, "setDataQuality", "(Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;)V");
                mids$[mid_setDataTypes_4ccaedadb068bdeb] = env->getMethodID(cls, "setDataTypes", "(Ljava/util/List;)V");
                mids$[mid_setDopplerCountBias_10f281d777284cea] = env->getMethodID(cls, "setDopplerCountBias", "(D)V");
                mids$[mid_setDopplerCountRollover_ed2afdb8506b9742] = env->getMethodID(cls, "setDopplerCountRollover", "(Z)V");
                mids$[mid_setDopplerCountScale_10f281d777284cea] = env->getMethodID(cls, "setDopplerCountScale", "(D)V");
                mids$[mid_setEphemerisNames_6ba01303bcce0307] = env->getMethodID(cls, "setEphemerisNames", "(Ljava/util/Map;)V");
                mids$[mid_setFreqOffset_10f281d777284cea] = env->getMethodID(cls, "setFreqOffset", "(D)V");
                mids$[mid_setIntegrationInterval_10f281d777284cea] = env->getMethodID(cls, "setIntegrationInterval", "(D)V");
                mids$[mid_setIntegrationRef_151c4a44acd6ee3d] = env->getMethodID(cls, "setIntegrationRef", "(Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;)V");
                mids$[mid_setInterpolationDegree_a3da1a935cb37f7b] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                mids$[mid_setInterpolationMethod_f5ffdf29129ef90a] = env->getMethodID(cls, "setInterpolationMethod", "(Ljava/lang/String;)V");
                mids$[mid_setMode_ea7e7f2a295e89e0] = env->getMethodID(cls, "setMode", "(Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;)V");
                mids$[mid_setParticipants_6ba01303bcce0307] = env->getMethodID(cls, "setParticipants", "(Ljava/util/Map;)V");
                mids$[mid_setPath_ec63cb8a58ef5a54] = env->getMethodID(cls, "setPath", "([I)V");
                mids$[mid_setPath1_ec63cb8a58ef5a54] = env->getMethodID(cls, "setPath1", "([I)V");
                mids$[mid_setPath2_ec63cb8a58ef5a54] = env->getMethodID(cls, "setPath2", "([I)V");
                mids$[mid_setRangeMode_7d31aa302f033c9a] = env->getMethodID(cls, "setRangeMode", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;)V");
                mids$[mid_setRangeUnits_dc3a41de9e28ac2a] = env->getMethodID(cls, "setRangeUnits", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;)V");
                mids$[mid_setRawCorrectionRange_10f281d777284cea] = env->getMethodID(cls, "setRawCorrectionRange", "(D)V");
                mids$[mid_setRawRangeModulus_10f281d777284cea] = env->getMethodID(cls, "setRawRangeModulus", "(D)V");
                mids$[mid_setReceiveBand_f5ffdf29129ef90a] = env->getMethodID(cls, "setReceiveBand", "(Ljava/lang/String;)V");
                mids$[mid_setReceiveDelays_6ba01303bcce0307] = env->getMethodID(cls, "setReceiveDelays", "(Ljava/util/Map;)V");
                mids$[mid_setReferenceFrame_f55eee1236275bb1] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setStartTime_20affcbd28542333] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setStopTime_20affcbd28542333] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTimetagRef_2388f3920669c732] = env->getMethodID(cls, "setTimetagRef", "(Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;)V");
                mids$[mid_setTrackId_f5ffdf29129ef90a] = env->getMethodID(cls, "setTrackId", "(Ljava/lang/String;)V");
                mids$[mid_setTransmitBand_f5ffdf29129ef90a] = env->getMethodID(cls, "setTransmitBand", "(Ljava/lang/String;)V");
                mids$[mid_setTransmitDelays_6ba01303bcce0307] = env->getMethodID(cls, "setTransmitDelays", "(Ljava/util/Map;)V");
                mids$[mid_setTurnaroundDenominator_a3da1a935cb37f7b] = env->getMethodID(cls, "setTurnaroundDenominator", "(I)V");
                mids$[mid_setTurnaroundNumerator_a3da1a935cb37f7b] = env->getMethodID(cls, "setTurnaroundNumerator", "(I)V");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TdmMetadata::TdmMetadata() : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void TdmMetadata::addEphemerisName(jint a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addEphemerisName_da9d52f3cfda13c8], a0, a1.this$);
            }

            void TdmMetadata::addParticipant(jint a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addParticipant_da9d52f3cfda13c8], a0, a1.this$);
            }

            void TdmMetadata::addReceiveDelay(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addReceiveDelay_89aad365fb0ed8da], a0, a1);
            }

            void TdmMetadata::addTransmitDelay(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addTransmitDelay_89aad365fb0ed8da], a0, a1);
            }

            ::org::orekit::files::ccsds::ndm::tdm::AngleType TdmMetadata::getAngleType() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::AngleType(env->callObjectMethod(this$, mids$[mid_getAngleType_ef405ad40cd92a7e]));
            }

            jdouble TdmMetadata::getCorrectionAberrationDiurnal() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAberrationDiurnal_557b8123390d8d0c]);
            }

            jdouble TdmMetadata::getCorrectionAberrationYearly() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAberrationYearly_557b8123390d8d0c]);
            }

            jdouble TdmMetadata::getCorrectionAngle1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAngle1_557b8123390d8d0c]);
            }

            jdouble TdmMetadata::getCorrectionAngle2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAngle2_557b8123390d8d0c]);
            }

            jdouble TdmMetadata::getCorrectionDoppler() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionDoppler_557b8123390d8d0c]);
            }

            jdouble TdmMetadata::getCorrectionMagnitude() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionMagnitude_557b8123390d8d0c]);
            }

            jdouble TdmMetadata::getCorrectionRange(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionRange_4a1bf2149c39693a], a0.this$);
            }

            jdouble TdmMetadata::getCorrectionRcs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionRcs_557b8123390d8d0c]);
            }

            jdouble TdmMetadata::getCorrectionReceive() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionReceive_557b8123390d8d0c]);
            }

            jdouble TdmMetadata::getCorrectionTransmit() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionTransmit_557b8123390d8d0c]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied TdmMetadata::getCorrectionsApplied() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied(env->callObjectMethod(this$, mids$[mid_getCorrectionsApplied_6df1a95227c350c6]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::DataQuality TdmMetadata::getDataQuality() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::DataQuality(env->callObjectMethod(this$, mids$[mid_getDataQuality_425db0c040a6afcc]));
            }

            ::java::util::List TdmMetadata::getDataTypes() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataTypes_0d9551367f7ecdef]));
            }

            jdouble TdmMetadata::getDopplerCountBias() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDopplerCountBias_557b8123390d8d0c]);
            }

            jdouble TdmMetadata::getDopplerCountScale() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDopplerCountScale_557b8123390d8d0c]);
            }

            ::java::util::Map TdmMetadata::getEphemerisNames() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getEphemerisNames_1e62c2f73fbdd1c4]));
            }

            jdouble TdmMetadata::getFreqOffset() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getFreqOffset_557b8123390d8d0c]);
            }

            jdouble TdmMetadata::getIntegrationInterval() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIntegrationInterval_557b8123390d8d0c]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference TdmMetadata::getIntegrationRef() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference(env->callObjectMethod(this$, mids$[mid_getIntegrationRef_f030f85e9f3bdae3]));
            }

            jint TdmMetadata::getInterpolationDegree() const
            {
              return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_412668abc8d889e9]);
            }

            ::java::lang::String TdmMetadata::getInterpolationMethod() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_3cffd47377eca18a]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::TrackingMode TdmMetadata::getMode() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::TrackingMode(env->callObjectMethod(this$, mids$[mid_getMode_9f8d1c4bf7ce4ce2]));
            }

            ::java::util::Map TdmMetadata::getParticipants() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getParticipants_1e62c2f73fbdd1c4]));
            }

            JArray< jint > TdmMetadata::getPath() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPath_1b41cf9ebf653611]));
            }

            JArray< jint > TdmMetadata::getPath1() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPath1_1b41cf9ebf653611]));
            }

            JArray< jint > TdmMetadata::getPath2() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPath2_1b41cf9ebf653611]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::RangeMode TdmMetadata::getRangeMode() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::RangeMode(env->callObjectMethod(this$, mids$[mid_getRangeMode_0f63cbed32b786d1]));
            }

            jdouble TdmMetadata::getRangeModulus(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRangeModulus_4a1bf2149c39693a], a0.this$);
            }

            ::org::orekit::files::ccsds::ndm::tdm::RangeUnits TdmMetadata::getRangeUnits() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::RangeUnits(env->callObjectMethod(this$, mids$[mid_getRangeUnits_b0ed1cfe82e0e171]));
            }

            jdouble TdmMetadata::getRawCorrectionRange() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRawCorrectionRange_557b8123390d8d0c]);
            }

            jdouble TdmMetadata::getRawRangeModulus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRawRangeModulus_557b8123390d8d0c]);
            }

            ::java::lang::String TdmMetadata::getReceiveBand() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiveBand_3cffd47377eca18a]));
            }

            ::java::util::Map TdmMetadata::getReceiveDelays() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getReceiveDelays_1e62c2f73fbdd1c4]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade TdmMetadata::getReferenceFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_98f5fcaff3e3f9d2]));
            }

            ::org::orekit::time::AbsoluteDate TdmMetadata::getStartTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_7a97f7e149e79afb]));
            }

            ::org::orekit::time::AbsoluteDate TdmMetadata::getStopTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_7a97f7e149e79afb]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::TimetagReference TdmMetadata::getTimetagRef() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::TimetagReference(env->callObjectMethod(this$, mids$[mid_getTimetagRef_d21e6b8027892887]));
            }

            ::java::lang::String TdmMetadata::getTrackId() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrackId_3cffd47377eca18a]));
            }

            ::java::lang::String TdmMetadata::getTransmitBand() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTransmitBand_3cffd47377eca18a]));
            }

            ::java::util::Map TdmMetadata::getTransmitDelays() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getTransmitDelays_1e62c2f73fbdd1c4]));
            }

            jint TdmMetadata::getTurnaroundDenominator() const
            {
              return env->callIntMethod(this$, mids$[mid_getTurnaroundDenominator_412668abc8d889e9]);
            }

            jint TdmMetadata::getTurnaroundNumerator() const
            {
              return env->callIntMethod(this$, mids$[mid_getTurnaroundNumerator_412668abc8d889e9]);
            }

            jboolean TdmMetadata::hasDopplerCountRollover() const
            {
              return env->callBooleanMethod(this$, mids$[mid_hasDopplerCountRollover_89b302893bdbe1f1]);
            }

            void TdmMetadata::setAngleType(const ::org::orekit::files::ccsds::ndm::tdm::AngleType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAngleType_5cf2f2232df75738], a0.this$);
            }

            void TdmMetadata::setCorrectionAberrationDiurnal(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAberrationDiurnal_10f281d777284cea], a0);
            }

            void TdmMetadata::setCorrectionAberrationYearly(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAberrationYearly_10f281d777284cea], a0);
            }

            void TdmMetadata::setCorrectionAngle1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAngle1_10f281d777284cea], a0);
            }

            void TdmMetadata::setCorrectionAngle2(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAngle2_10f281d777284cea], a0);
            }

            void TdmMetadata::setCorrectionDoppler(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionDoppler_10f281d777284cea], a0);
            }

            void TdmMetadata::setCorrectionMagnitude(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionMagnitude_10f281d777284cea], a0);
            }

            void TdmMetadata::setCorrectionRcs(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionRcs_10f281d777284cea], a0);
            }

            void TdmMetadata::setCorrectionReceive(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionReceive_10f281d777284cea], a0);
            }

            void TdmMetadata::setCorrectionTransmit(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionTransmit_10f281d777284cea], a0);
            }

            void TdmMetadata::setCorrectionsApplied(const ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionsApplied_853aba3eca5df956], a0.this$);
            }

            void TdmMetadata::setDataQuality(const ::org::orekit::files::ccsds::ndm::tdm::DataQuality & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDataQuality_b4d3240497d1d1f8], a0.this$);
            }

            void TdmMetadata::setDataTypes(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDataTypes_4ccaedadb068bdeb], a0.this$);
            }

            void TdmMetadata::setDopplerCountBias(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDopplerCountBias_10f281d777284cea], a0);
            }

            void TdmMetadata::setDopplerCountRollover(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDopplerCountRollover_ed2afdb8506b9742], a0);
            }

            void TdmMetadata::setDopplerCountScale(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDopplerCountScale_10f281d777284cea], a0);
            }

            void TdmMetadata::setEphemerisNames(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEphemerisNames_6ba01303bcce0307], a0.this$);
            }

            void TdmMetadata::setFreqOffset(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFreqOffset_10f281d777284cea], a0);
            }

            void TdmMetadata::setIntegrationInterval(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntegrationInterval_10f281d777284cea], a0);
            }

            void TdmMetadata::setIntegrationRef(const ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntegrationRef_151c4a44acd6ee3d], a0.this$);
            }

            void TdmMetadata::setInterpolationDegree(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_a3da1a935cb37f7b], a0);
            }

            void TdmMetadata::setInterpolationMethod(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_f5ffdf29129ef90a], a0.this$);
            }

            void TdmMetadata::setMode(const ::org::orekit::files::ccsds::ndm::tdm::TrackingMode & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMode_ea7e7f2a295e89e0], a0.this$);
            }

            void TdmMetadata::setParticipants(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setParticipants_6ba01303bcce0307], a0.this$);
            }

            void TdmMetadata::setPath(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPath_ec63cb8a58ef5a54], a0.this$);
            }

            void TdmMetadata::setPath1(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPath1_ec63cb8a58ef5a54], a0.this$);
            }

            void TdmMetadata::setPath2(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPath2_ec63cb8a58ef5a54], a0.this$);
            }

            void TdmMetadata::setRangeMode(const ::org::orekit::files::ccsds::ndm::tdm::RangeMode & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRangeMode_7d31aa302f033c9a], a0.this$);
            }

            void TdmMetadata::setRangeUnits(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnits & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRangeUnits_dc3a41de9e28ac2a], a0.this$);
            }

            void TdmMetadata::setRawCorrectionRange(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRawCorrectionRange_10f281d777284cea], a0);
            }

            void TdmMetadata::setRawRangeModulus(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRawRangeModulus_10f281d777284cea], a0);
            }

            void TdmMetadata::setReceiveBand(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReceiveBand_f5ffdf29129ef90a], a0.this$);
            }

            void TdmMetadata::setReceiveDelays(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReceiveDelays_6ba01303bcce0307], a0.this$);
            }

            void TdmMetadata::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReferenceFrame_f55eee1236275bb1], a0.this$);
            }

            void TdmMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStartTime_20affcbd28542333], a0.this$);
            }

            void TdmMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStopTime_20affcbd28542333], a0.this$);
            }

            void TdmMetadata::setTimetagRef(const ::org::orekit::files::ccsds::ndm::tdm::TimetagReference & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimetagRef_2388f3920669c732], a0.this$);
            }

            void TdmMetadata::setTrackId(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTrackId_f5ffdf29129ef90a], a0.this$);
            }

            void TdmMetadata::setTransmitBand(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTransmitBand_f5ffdf29129ef90a], a0.this$);
            }

            void TdmMetadata::setTransmitDelays(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTransmitDelays_6ba01303bcce0307], a0.this$);
            }

            void TdmMetadata::setTurnaroundDenominator(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTurnaroundDenominator_a3da1a935cb37f7b], a0);
            }

            void TdmMetadata::setTurnaroundNumerator(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTurnaroundNumerator_a3da1a935cb37f7b], a0);
            }

            void TdmMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
            static PyObject *t_TdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_TdmMetadata_init_(t_TdmMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_TdmMetadata_addEphemerisName(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_addParticipant(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_addReceiveDelay(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_addTransmitDelay(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_getAngleType(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAberrationDiurnal(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAberrationYearly(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAngle1(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAngle2(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionDoppler(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionMagnitude(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionRange(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_getCorrectionRcs(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionReceive(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionTransmit(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionsApplied(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDataQuality(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDataTypes(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDopplerCountBias(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDopplerCountScale(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getEphemerisNames(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getFreqOffset(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getIntegrationInterval(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getIntegrationRef(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getInterpolationDegree(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getInterpolationMethod(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getMode(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getParticipants(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getPath(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getPath1(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getPath2(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRangeMode(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRangeModulus(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_getRangeUnits(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRawCorrectionRange(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRawRangeModulus(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getReceiveBand(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getReceiveDelays(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getReferenceFrame(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getStartTime(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getStopTime(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTimetagRef(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTrackId(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTransmitBand(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTransmitDelays(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTurnaroundDenominator(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTurnaroundNumerator(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_hasDopplerCountRollover(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_setAngleType(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAberrationYearly(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAngle1(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAngle2(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionDoppler(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionMagnitude(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionRcs(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionReceive(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionTransmit(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionsApplied(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDataQuality(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDataTypes(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDopplerCountBias(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDopplerCountRollover(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDopplerCountScale(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setEphemerisNames(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setFreqOffset(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setIntegrationInterval(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setIntegrationRef(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setInterpolationDegree(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setInterpolationMethod(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setMode(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setParticipants(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setPath(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setPath1(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setPath2(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRangeMode(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRangeUnits(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRawCorrectionRange(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRawRangeModulus(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setReceiveBand(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setReceiveDelays(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setReferenceFrame(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setStartTime(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setStopTime(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTimetagRef(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTrackId(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTransmitBand(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTransmitDelays(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTurnaroundDenominator(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTurnaroundNumerator(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_validate(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_get__angleType(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__angleType(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAberrationDiurnal(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAberrationYearly(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAberrationYearly(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAngle1(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAngle1(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAngle2(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAngle2(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionDoppler(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionDoppler(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionMagnitude(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionMagnitude(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionRcs(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionRcs(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionReceive(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionReceive(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionTransmit(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionTransmit(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionsApplied(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionsApplied(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dataQuality(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dataQuality(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dataTypes(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dataTypes(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dopplerCountBias(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dopplerCountBias(t_TdmMetadata *self, PyObject *arg, void *data);
            static int t_TdmMetadata_set__dopplerCountRollover(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dopplerCountScale(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dopplerCountScale(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__ephemerisNames(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__ephemerisNames(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__freqOffset(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__freqOffset(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__integrationInterval(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__integrationInterval(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__integrationRef(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__integrationRef(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__interpolationDegree(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__interpolationDegree(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__interpolationMethod(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__interpolationMethod(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__mode(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__mode(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__participants(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__participants(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__path(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__path(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__path1(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__path1(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__path2(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__path2(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rangeMode(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rangeMode(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rangeUnits(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rangeUnits(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rawCorrectionRange(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rawCorrectionRange(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rawRangeModulus(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rawRangeModulus(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__receiveBand(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__receiveBand(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__receiveDelays(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__receiveDelays(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__referenceFrame(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__referenceFrame(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__startTime(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__startTime(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__stopTime(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__stopTime(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__timetagRef(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__timetagRef(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__trackId(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__trackId(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__transmitBand(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__transmitBand(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__transmitDelays(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__transmitDelays(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__turnaroundDenominator(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__turnaroundDenominator(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__turnaroundNumerator(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__turnaroundNumerator(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_TdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_TdmMetadata, angleType),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAberrationDiurnal),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAberrationYearly),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAngle1),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAngle2),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionDoppler),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionMagnitude),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionRcs),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionReceive),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionTransmit),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionsApplied),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dataQuality),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dataTypes),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dopplerCountBias),
              DECLARE_SET_FIELD(t_TdmMetadata, dopplerCountRollover),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dopplerCountScale),
              DECLARE_GETSET_FIELD(t_TdmMetadata, ephemerisNames),
              DECLARE_GETSET_FIELD(t_TdmMetadata, freqOffset),
              DECLARE_GETSET_FIELD(t_TdmMetadata, integrationInterval),
              DECLARE_GETSET_FIELD(t_TdmMetadata, integrationRef),
              DECLARE_GETSET_FIELD(t_TdmMetadata, interpolationDegree),
              DECLARE_GETSET_FIELD(t_TdmMetadata, interpolationMethod),
              DECLARE_GETSET_FIELD(t_TdmMetadata, mode),
              DECLARE_GETSET_FIELD(t_TdmMetadata, participants),
              DECLARE_GETSET_FIELD(t_TdmMetadata, path),
              DECLARE_GETSET_FIELD(t_TdmMetadata, path1),
              DECLARE_GETSET_FIELD(t_TdmMetadata, path2),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rangeMode),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rangeUnits),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rawCorrectionRange),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rawRangeModulus),
              DECLARE_GETSET_FIELD(t_TdmMetadata, receiveBand),
              DECLARE_GETSET_FIELD(t_TdmMetadata, receiveDelays),
              DECLARE_GETSET_FIELD(t_TdmMetadata, referenceFrame),
              DECLARE_GETSET_FIELD(t_TdmMetadata, startTime),
              DECLARE_GETSET_FIELD(t_TdmMetadata, stopTime),
              DECLARE_GETSET_FIELD(t_TdmMetadata, timetagRef),
              DECLARE_GETSET_FIELD(t_TdmMetadata, trackId),
              DECLARE_GETSET_FIELD(t_TdmMetadata, transmitBand),
              DECLARE_GETSET_FIELD(t_TdmMetadata, transmitDelays),
              DECLARE_GETSET_FIELD(t_TdmMetadata, turnaroundDenominator),
              DECLARE_GETSET_FIELD(t_TdmMetadata, turnaroundNumerator),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmMetadata__methods_[] = {
              DECLARE_METHOD(t_TdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadata, addEphemerisName, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, addParticipant, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, addReceiveDelay, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, addTransmitDelay, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, getAngleType, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAberrationDiurnal, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAberrationYearly, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAngle1, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAngle2, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionDoppler, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionMagnitude, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionRange, METH_O),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionRcs, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionReceive, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionTransmit, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionsApplied, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDataQuality, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDataTypes, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDopplerCountBias, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDopplerCountScale, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getEphemerisNames, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getFreqOffset, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getIntegrationInterval, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getIntegrationRef, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getInterpolationDegree, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getInterpolationMethod, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getMode, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getParticipants, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getPath, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getPath1, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getPath2, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRangeMode, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRangeModulus, METH_O),
              DECLARE_METHOD(t_TdmMetadata, getRangeUnits, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRawCorrectionRange, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRawRangeModulus, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getReceiveBand, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getReceiveDelays, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getReferenceFrame, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getStartTime, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getStopTime, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTimetagRef, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTrackId, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTransmitBand, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTransmitDelays, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTurnaroundDenominator, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTurnaroundNumerator, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, hasDopplerCountRollover, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, setAngleType, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAberrationDiurnal, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAberrationYearly, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAngle1, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAngle2, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionDoppler, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionMagnitude, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionRcs, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionReceive, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionTransmit, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionsApplied, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDataQuality, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDataTypes, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDopplerCountBias, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDopplerCountRollover, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDopplerCountScale, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setEphemerisNames, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setFreqOffset, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setIntegrationInterval, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setIntegrationRef, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setInterpolationDegree, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setInterpolationMethod, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setMode, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setParticipants, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setPath, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setPath1, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setPath2, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRangeMode, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRangeUnits, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRawCorrectionRange, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRawRangeModulus, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setReceiveBand, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setReceiveDelays, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setReferenceFrame, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setStartTime, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setStopTime, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTimetagRef, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTrackId, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTransmitBand, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTransmitDelays, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTurnaroundDenominator, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTurnaroundNumerator, METH_O),
              DECLARE_METHOD(t_TdmMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmMetadata)[] = {
              { Py_tp_methods, t_TdmMetadata__methods_ },
              { Py_tp_init, (void *) t_TdmMetadata_init_ },
              { Py_tp_getset, t_TdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(TdmMetadata, t_TdmMetadata, TdmMetadata);

            void t_TdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmMetadata), &PY_TYPE_DEF(TdmMetadata), module, "TdmMetadata", 0);
            }

            void t_TdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadata), "class_", make_descriptor(TdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadata), "wrapfn_", make_descriptor(t_TdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmMetadata::initializeClass, 1)))
                return NULL;
              return t_TdmMetadata::wrap_Object(TdmMetadata(((t_TdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_TdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_TdmMetadata_init_(t_TdmMetadata *self, PyObject *args, PyObject *kwds)
            {
              TdmMetadata object((jobject) NULL);

              INT_CALL(object = TdmMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_TdmMetadata_addEphemerisName(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "Is", &a0, &a1))
              {
                OBJ_CALL(self->object.addEphemerisName(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addEphemerisName", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_addParticipant(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "Is", &a0, &a1))
              {
                OBJ_CALL(self->object.addParticipant(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addParticipant", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_addReceiveDelay(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.addReceiveDelay(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addReceiveDelay", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_addTransmitDelay(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.addTransmitDelay(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addTransmitDelay", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_getAngleType(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::AngleType result((jobject) NULL);
              OBJ_CALL(result = self->object.getAngleType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_AngleType::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAberrationDiurnal(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAberrationDiurnal());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAberrationYearly(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAberrationYearly());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAngle1(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAngle1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAngle2(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAngle2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionDoppler(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionDoppler());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionMagnitude(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionMagnitude());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionRange(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getCorrectionRange(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCorrectionRange", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_getCorrectionRcs(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionRcs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionReceive(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionReceive());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionTransmit(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionTransmit());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionsApplied(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied result((jobject) NULL);
              OBJ_CALL(result = self->object.getCorrectionsApplied());
              return ::org::orekit::files::ccsds::ndm::tdm::t_CorrectionApplied::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getDataQuality(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::DataQuality result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataQuality());
              return ::org::orekit::files::ccsds::ndm::tdm::t_DataQuality::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getDataTypes(t_TdmMetadata *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataTypes());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(ObservationType));
            }

            static PyObject *t_TdmMetadata_getDopplerCountBias(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDopplerCountBias());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getDopplerCountScale(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDopplerCountScale());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getEphemerisNames(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getEphemerisNames());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_TdmMetadata_getFreqOffset(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getFreqOffset());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getIntegrationInterval(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIntegrationInterval());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getIntegrationRef(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference result((jobject) NULL);
              OBJ_CALL(result = self->object.getIntegrationRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_IntegrationReference::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getInterpolationDegree(t_TdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getInterpolationDegree());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_TdmMetadata_getInterpolationMethod(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getInterpolationMethod());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getMode(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TrackingMode result((jobject) NULL);
              OBJ_CALL(result = self->object.getMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TrackingMode::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getParticipants(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getParticipants());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_TdmMetadata_getPath(t_TdmMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPath());
              return result.wrap();
            }

            static PyObject *t_TdmMetadata_getPath1(t_TdmMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPath1());
              return result.wrap();
            }

            static PyObject *t_TdmMetadata_getPath2(t_TdmMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPath2());
              return result.wrap();
            }

            static PyObject *t_TdmMetadata_getRangeMode(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeMode result((jobject) NULL);
              OBJ_CALL(result = self->object.getRangeMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeMode::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getRangeModulus(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getRangeModulus(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getRangeModulus", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_getRangeUnits(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnits result((jobject) NULL);
              OBJ_CALL(result = self->object.getRangeUnits());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnits::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getRawCorrectionRange(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRawCorrectionRange());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getRawRangeModulus(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRawRangeModulus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getReceiveBand(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getReceiveBand());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getReceiveDelays(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getReceiveDelays());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_TdmMetadata_getReferenceFrame(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getStartTime(t_TdmMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStartTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getStopTime(t_TdmMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStopTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getTimetagRef(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TimetagReference result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimetagRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TimetagReference::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getTrackId(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getTrackId());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getTransmitBand(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getTransmitBand());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getTransmitDelays(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getTransmitDelays());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_TdmMetadata_getTurnaroundDenominator(t_TdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTurnaroundDenominator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_TdmMetadata_getTurnaroundNumerator(t_TdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTurnaroundNumerator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_TdmMetadata_hasDopplerCountRollover(t_TdmMetadata *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.hasDopplerCountRollover());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_TdmMetadata_setAngleType(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::AngleType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::AngleType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_AngleType::parameters_))
              {
                OBJ_CALL(self->object.setAngleType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAngleType", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAberrationDiurnal(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAberrationDiurnal", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAberrationYearly(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAberrationYearly(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAberrationYearly", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAngle1(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAngle1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAngle1", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAngle2(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAngle2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAngle2", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionDoppler(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionDoppler(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionDoppler", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionMagnitude(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionMagnitude(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionMagnitude", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionRcs(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionRcs(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionRcs", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionReceive(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionReceive(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionReceive", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionTransmit(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionTransmit(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionTransmit", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionsApplied(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_CorrectionApplied::parameters_))
              {
                OBJ_CALL(self->object.setCorrectionsApplied(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionsApplied", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDataQuality(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::DataQuality a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::DataQuality::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_DataQuality::parameters_))
              {
                OBJ_CALL(self->object.setDataQuality(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDataQuality", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDataTypes(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.setDataTypes(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDataTypes", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDopplerCountBias(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDopplerCountBias(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDopplerCountBias", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDopplerCountRollover(t_TdmMetadata *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.setDopplerCountRollover(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDopplerCountRollover", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDopplerCountScale(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDopplerCountScale(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDopplerCountScale", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setEphemerisNames(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setEphemerisNames(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEphemerisNames", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setFreqOffset(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setFreqOffset(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFreqOffset", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setIntegrationInterval(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIntegrationInterval(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntegrationInterval", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setIntegrationRef(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_IntegrationReference::parameters_))
              {
                OBJ_CALL(self->object.setIntegrationRef(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntegrationRef", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setInterpolationDegree(t_TdmMetadata *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setInterpolationDegree(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setInterpolationMethod(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setInterpolationMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setMode(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TrackingMode a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_TrackingMode::parameters_))
              {
                OBJ_CALL(self->object.setMode(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMode", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setParticipants(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setParticipants(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setParticipants", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setPath(t_TdmMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setPath(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPath", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setPath1(t_TdmMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setPath1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPath1", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setPath2(t_TdmMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setPath2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPath2", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRangeMode(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeMode a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::RangeMode::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_RangeMode::parameters_))
              {
                OBJ_CALL(self->object.setRangeMode(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRangeMode", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRangeUnits(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnits a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnits::parameters_))
              {
                OBJ_CALL(self->object.setRangeUnits(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRangeUnits", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRawCorrectionRange(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRawCorrectionRange(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRawCorrectionRange", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRawRangeModulus(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRawRangeModulus(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRawRangeModulus", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setReceiveBand(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setReceiveBand(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReceiveBand", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setReceiveDelays(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setReceiveDelays(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReceiveDelays", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setReferenceFrame(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setReferenceFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReferenceFrame", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setStartTime(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStartTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStartTime", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setStopTime(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStopTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStopTime", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTimetagRef(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TimetagReference a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_TimetagReference::parameters_))
              {
                OBJ_CALL(self->object.setTimetagRef(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimetagRef", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTrackId(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setTrackId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTrackId", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTransmitBand(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setTransmitBand(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTransmitBand", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTransmitDelays(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setTransmitDelays(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTransmitDelays", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTurnaroundDenominator(t_TdmMetadata *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setTurnaroundDenominator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTurnaroundDenominator", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTurnaroundNumerator(t_TdmMetadata *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setTurnaroundNumerator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTurnaroundNumerator", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_validate(t_TdmMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(TdmMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_TdmMetadata_get__angleType(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::AngleType value((jobject) NULL);
              OBJ_CALL(value = self->object.getAngleType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_AngleType::wrap_Object(value);
            }
            static int t_TdmMetadata_set__angleType(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::AngleType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::AngleType::initializeClass, &value))
                {
                  INT_CALL(self->object.setAngleType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "angleType", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAberrationDiurnal(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAberrationDiurnal());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAberrationDiurnal(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAberrationDiurnal", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAberrationYearly(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAberrationYearly());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAberrationYearly(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAberrationYearly(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAberrationYearly", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAngle1(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAngle1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAngle1(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAngle1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAngle1", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAngle2(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAngle2());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAngle2(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAngle2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAngle2", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionDoppler(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionDoppler());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionDoppler(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionDoppler(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionDoppler", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionMagnitude(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionMagnitude());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionMagnitude(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionMagnitude(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionMagnitude", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionRcs(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionRcs());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionRcs(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionRcs(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionRcs", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionReceive(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionReceive());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionReceive(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionReceive(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionReceive", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionTransmit(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionTransmit());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionTransmit(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionTransmit(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionTransmit", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionsApplied(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied value((jobject) NULL);
              OBJ_CALL(value = self->object.getCorrectionsApplied());
              return ::org::orekit::files::ccsds::ndm::tdm::t_CorrectionApplied::wrap_Object(value);
            }
            static int t_TdmMetadata_set__correctionsApplied(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::initializeClass, &value))
                {
                  INT_CALL(self->object.setCorrectionsApplied(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionsApplied", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dataQuality(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::DataQuality value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataQuality());
              return ::org::orekit::files::ccsds::ndm::tdm::t_DataQuality::wrap_Object(value);
            }
            static int t_TdmMetadata_set__dataQuality(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::DataQuality value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::DataQuality::initializeClass, &value))
                {
                  INT_CALL(self->object.setDataQuality(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dataQuality", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dataTypes(t_TdmMetadata *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataTypes());
              return ::java::util::t_List::wrap_Object(value);
            }
            static int t_TdmMetadata_set__dataTypes(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::List value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                {
                  INT_CALL(self->object.setDataTypes(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dataTypes", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dopplerCountBias(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDopplerCountBias());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__dopplerCountBias(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDopplerCountBias(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dopplerCountBias", arg);
              return -1;
            }

            static int t_TdmMetadata_set__dopplerCountRollover(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jboolean value;
                if (!parseArg(arg, "Z", &value))
                {
                  INT_CALL(self->object.setDopplerCountRollover(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dopplerCountRollover", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dopplerCountScale(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDopplerCountScale());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__dopplerCountScale(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDopplerCountScale(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dopplerCountScale", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__ephemerisNames(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getEphemerisNames());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__ephemerisNames(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setEphemerisNames(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ephemerisNames", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__freqOffset(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getFreqOffset());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__freqOffset(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setFreqOffset(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "freqOffset", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__integrationInterval(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIntegrationInterval());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__integrationInterval(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIntegrationInterval(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "integrationInterval", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__integrationRef(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference value((jobject) NULL);
              OBJ_CALL(value = self->object.getIntegrationRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_IntegrationReference::wrap_Object(value);
            }
            static int t_TdmMetadata_set__integrationRef(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::initializeClass, &value))
                {
                  INT_CALL(self->object.setIntegrationRef(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "integrationRef", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__interpolationDegree(t_TdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getInterpolationDegree());
              return PyLong_FromLong((long) value);
            }
            static int t_TdmMetadata_set__interpolationDegree(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setInterpolationDegree(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__interpolationMethod(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getInterpolationMethod());
              return j2p(value);
            }
            static int t_TdmMetadata_set__interpolationMethod(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setInterpolationMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__mode(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TrackingMode value((jobject) NULL);
              OBJ_CALL(value = self->object.getMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TrackingMode::wrap_Object(value);
            }
            static int t_TdmMetadata_set__mode(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::TrackingMode value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::initializeClass, &value))
                {
                  INT_CALL(self->object.setMode(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mode", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__participants(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getParticipants());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__participants(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setParticipants(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "participants", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__path(t_TdmMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPath());
              return value.wrap();
            }
            static int t_TdmMetadata_set__path(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setPath(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "path", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__path1(t_TdmMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPath1());
              return value.wrap();
            }
            static int t_TdmMetadata_set__path1(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setPath1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "path1", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__path2(t_TdmMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPath2());
              return value.wrap();
            }
            static int t_TdmMetadata_set__path2(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setPath2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "path2", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rangeMode(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeMode value((jobject) NULL);
              OBJ_CALL(value = self->object.getRangeMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeMode::wrap_Object(value);
            }
            static int t_TdmMetadata_set__rangeMode(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::RangeMode value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeMode::initializeClass, &value))
                {
                  INT_CALL(self->object.setRangeMode(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rangeMode", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rangeUnits(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnits value((jobject) NULL);
              OBJ_CALL(value = self->object.getRangeUnits());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnits::wrap_Object(value);
            }
            static int t_TdmMetadata_set__rangeUnits(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::RangeUnits value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::initializeClass, &value))
                {
                  INT_CALL(self->object.setRangeUnits(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rangeUnits", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rawCorrectionRange(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRawCorrectionRange());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__rawCorrectionRange(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRawCorrectionRange(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rawCorrectionRange", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rawRangeModulus(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRawRangeModulus());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__rawRangeModulus(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRawRangeModulus(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rawRangeModulus", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__receiveBand(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getReceiveBand());
              return j2p(value);
            }
            static int t_TdmMetadata_set__receiveBand(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setReceiveBand(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "receiveBand", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__receiveDelays(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getReceiveDelays());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__receiveDelays(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setReceiveDelays(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "receiveDelays", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__referenceFrame(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_TdmMetadata_set__referenceFrame(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setReferenceFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "referenceFrame", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__startTime(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStartTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_TdmMetadata_set__startTime(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStartTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "startTime", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__stopTime(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStopTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_TdmMetadata_set__stopTime(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStopTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "stopTime", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__timetagRef(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TimetagReference value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimetagRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TimetagReference::wrap_Object(value);
            }
            static int t_TdmMetadata_set__timetagRef(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::TimetagReference value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimetagRef(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timetagRef", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__trackId(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getTrackId());
              return j2p(value);
            }
            static int t_TdmMetadata_set__trackId(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setTrackId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "trackId", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__transmitBand(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getTransmitBand());
              return j2p(value);
            }
            static int t_TdmMetadata_set__transmitBand(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setTransmitBand(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "transmitBand", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__transmitDelays(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getTransmitDelays());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__transmitDelays(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setTransmitDelays(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "transmitDelays", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__turnaroundDenominator(t_TdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTurnaroundDenominator());
              return PyLong_FromLong((long) value);
            }
            static int t_TdmMetadata_set__turnaroundDenominator(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setTurnaroundDenominator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "turnaroundDenominator", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__turnaroundNumerator(t_TdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTurnaroundNumerator());
              return PyLong_FromLong((long) value);
            }
            static int t_TdmMetadata_set__turnaroundNumerator(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setTurnaroundNumerator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "turnaroundNumerator", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmSatelliteEphemeris::class$ = NULL;
              jmethodID *OcmSatelliteEphemeris::mids$ = NULL;
              bool OcmSatelliteEphemeris::live$ = false;

              jclass OcmSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f5014c1d3796dec5] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLjava/util/List;)V");
                  mids$[mid_getId_3cffd47377eca18a] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getSegments_0d9551367f7ecdef] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmSatelliteEphemeris::OcmSatelliteEphemeris(const ::java::lang::String & a0, jdouble a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5014c1d3796dec5, a0.this$, a1, a2.this$)) {}

              ::java::lang::String OcmSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_3cffd47377eca18a]));
              }

              jdouble OcmSatelliteEphemeris::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
              }

              ::java::util::List OcmSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_0d9551367f7ecdef]));
              }

              ::org::orekit::time::AbsoluteDate OcmSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate OcmSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
              }
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
          namespace odm {
            namespace ocm {
              static PyObject *t_OcmSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OcmSatelliteEphemeris_init_(t_OcmSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmSatelliteEphemeris_getId(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getMu(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getSegments(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getStart(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getStop(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_get__id(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__mu(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__segments(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__start(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__stop(t_OcmSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_OcmSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, mu),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_OcmSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getMu, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmSatelliteEphemeris)[] = {
                { Py_tp_methods, t_OcmSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_OcmSatelliteEphemeris_init_ },
                { Py_tp_getset, t_OcmSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OcmSatelliteEphemeris, t_OcmSatelliteEphemeris, OcmSatelliteEphemeris);

              void t_OcmSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmSatelliteEphemeris), &PY_TYPE_DEF(OcmSatelliteEphemeris), module, "OcmSatelliteEphemeris", 0);
              }

              void t_OcmSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmSatelliteEphemeris), "class_", make_descriptor(OcmSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmSatelliteEphemeris), "wrapfn_", make_descriptor(t_OcmSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OcmSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_OcmSatelliteEphemeris::wrap_Object(OcmSatelliteEphemeris(((t_OcmSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_OcmSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OcmSatelliteEphemeris_init_(t_OcmSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                OcmSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sDK", ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OcmSatelliteEphemeris(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmSatelliteEphemeris_getId(t_OcmSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_OcmSatelliteEphemeris_getMu(t_OcmSatelliteEphemeris *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmSatelliteEphemeris_getSegments(t_OcmSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(TrajectoryStateHistory));
              }

              static PyObject *t_OcmSatelliteEphemeris_getStart(t_OcmSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmSatelliteEphemeris_getStop(t_OcmSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__id(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__mu(t_OcmSatelliteEphemeris *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__segments(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__start(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__stop(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/ViennaModelType.h"
#include "java/lang/String.h"
#include "org/orekit/models/earth/troposphere/ViennaModelType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaModelType::class$ = NULL;
          jmethodID *ViennaModelType::mids$ = NULL;
          bool ViennaModelType::live$ = false;
          ViennaModelType *ViennaModelType::VIENNA_ONE = NULL;
          ViennaModelType *ViennaModelType::VIENNA_THREE = NULL;

          jclass ViennaModelType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaModelType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_025dfa9fc7bdd4d9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/models/earth/troposphere/ViennaModelType;");
              mids$[mid_values_1ec8861a05bd23c3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/models/earth/troposphere/ViennaModelType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              VIENNA_ONE = new ViennaModelType(env->getStaticObjectField(cls, "VIENNA_ONE", "Lorg/orekit/models/earth/troposphere/ViennaModelType;"));
              VIENNA_THREE = new ViennaModelType(env->getStaticObjectField(cls, "VIENNA_THREE", "Lorg/orekit/models/earth/troposphere/ViennaModelType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaModelType ViennaModelType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ViennaModelType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_025dfa9fc7bdd4d9], a0.this$));
          }

          JArray< ViennaModelType > ViennaModelType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ViennaModelType >(env->callStaticObjectMethod(cls, mids$[mid_values_1ec8861a05bd23c3]));
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_ViennaModelType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaModelType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaModelType_of_(t_ViennaModelType *self, PyObject *args);
          static PyObject *t_ViennaModelType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_ViennaModelType_values(PyTypeObject *type);
          static PyObject *t_ViennaModelType_get__parameters_(t_ViennaModelType *self, void *data);
          static PyGetSetDef t_ViennaModelType__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaModelType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaModelType__methods_[] = {
            DECLARE_METHOD(t_ViennaModelType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelType, of_, METH_VARARGS),
            DECLARE_METHOD(t_ViennaModelType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaModelType)[] = {
            { Py_tp_methods, t_ViennaModelType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ViennaModelType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaModelType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(ViennaModelType, t_ViennaModelType, ViennaModelType);
          PyObject *t_ViennaModelType::wrap_Object(const ViennaModelType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ViennaModelType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ViennaModelType *self = (t_ViennaModelType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ViennaModelType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ViennaModelType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ViennaModelType *self = (t_ViennaModelType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ViennaModelType::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaModelType), &PY_TYPE_DEF(ViennaModelType), module, "ViennaModelType", 0);
          }

          void t_ViennaModelType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "class_", make_descriptor(ViennaModelType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "wrapfn_", make_descriptor(t_ViennaModelType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "boxfn_", make_descriptor(boxObject));
            env->getClass(ViennaModelType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "VIENNA_ONE", make_descriptor(t_ViennaModelType::wrap_Object(*ViennaModelType::VIENNA_ONE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "VIENNA_THREE", make_descriptor(t_ViennaModelType::wrap_Object(*ViennaModelType::VIENNA_THREE)));
          }

          static PyObject *t_ViennaModelType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaModelType::initializeClass, 1)))
              return NULL;
            return t_ViennaModelType::wrap_Object(ViennaModelType(((t_ViennaModelType *) arg)->object.this$));
          }
          static PyObject *t_ViennaModelType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaModelType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ViennaModelType_of_(t_ViennaModelType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_ViennaModelType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ViennaModelType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::models::earth::troposphere::ViennaModelType::valueOf(a0));
              return t_ViennaModelType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_ViennaModelType_values(PyTypeObject *type)
          {
            JArray< ViennaModelType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::models::earth::troposphere::ViennaModelType::values());
            return JArray<jobject>(result.this$).wrap(t_ViennaModelType::wrap_jobject);
          }
          static PyObject *t_ViennaModelType_get__parameters_(t_ViennaModelType *self, void *data)
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
#include "org/orekit/propagation/sampling/PythonFieldOrekitFixedStepHandler.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonFieldOrekitFixedStepHandler::class$ = NULL;
        jmethodID *PythonFieldOrekitFixedStepHandler::mids$ = NULL;
        bool PythonFieldOrekitFixedStepHandler::live$ = false;

        jclass PythonFieldOrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonFieldOrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_b66c84a5711243d5] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_b66c84a5711243d5] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_init_1b5a30d717840b16] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOrekitFixedStepHandler::PythonFieldOrekitFixedStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonFieldOrekitFixedStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonFieldOrekitFixedStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonFieldOrekitFixedStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      namespace sampling {
        static PyObject *t_PythonFieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_of_(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args);
        static int t_PythonFieldOrekitFixedStepHandler_init_(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_finalize(t_PythonFieldOrekitFixedStepHandler *self);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_pythonExtension(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args);
        static void JNICALL t_PythonFieldOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_get__self(t_PythonFieldOrekitFixedStepHandler *self, void *data);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_get__parameters_(t_PythonFieldOrekitFixedStepHandler *self, void *data);
        static PyGetSetDef t_PythonFieldOrekitFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOrekitFixedStepHandler, self),
          DECLARE_GET_FIELD(t_PythonFieldOrekitFixedStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_PythonFieldOrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOrekitFixedStepHandler_init_ },
          { Py_tp_getset, t_PythonFieldOrekitFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOrekitFixedStepHandler, t_PythonFieldOrekitFixedStepHandler, PythonFieldOrekitFixedStepHandler);
        PyObject *t_PythonFieldOrekitFixedStepHandler::wrap_Object(const PythonFieldOrekitFixedStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitFixedStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitFixedStepHandler *self = (t_PythonFieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldOrekitFixedStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitFixedStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitFixedStepHandler *self = (t_PythonFieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldOrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOrekitFixedStepHandler), &PY_TYPE_DEF(PythonFieldOrekitFixedStepHandler), module, "PythonFieldOrekitFixedStepHandler", 1);
        }

        void t_PythonFieldOrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitFixedStepHandler), "class_", make_descriptor(PythonFieldOrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitFixedStepHandler), "wrapfn_", make_descriptor(t_PythonFieldOrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOrekitFixedStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldOrekitFixedStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldOrekitFixedStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldOrekitFixedStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOrekitFixedStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOrekitFixedStepHandler::wrap_Object(PythonFieldOrekitFixedStepHandler(((t_PythonFieldOrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_of_(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldOrekitFixedStepHandler_init_(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOrekitFixedStepHandler object((jobject) NULL);

          INT_CALL(object = PythonFieldOrekitFixedStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_finalize(t_PythonFieldOrekitFixedStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_pythonExtension(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonFieldOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
          PyObject *result = PyObject_CallMethod(obj, "init", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_get__self(t_PythonFieldOrekitFixedStepHandler *self, void *data)
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
        static PyObject *t_PythonFieldOrekitFixedStepHandler_get__parameters_(t_PythonFieldOrekitFixedStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVector.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *StateVectorKey::class$ = NULL;
            jmethodID *StateVectorKey::mids$ = NULL;
            bool StateVectorKey::live$ = false;
            StateVectorKey *StateVectorKey::COMMENT = NULL;
            StateVectorKey *StateVectorKey::X = NULL;
            StateVectorKey *StateVectorKey::X_DOT = NULL;
            StateVectorKey *StateVectorKey::Y = NULL;
            StateVectorKey *StateVectorKey::Y_DOT = NULL;
            StateVectorKey *StateVectorKey::Z = NULL;
            StateVectorKey *StateVectorKey::Z_DOT = NULL;

            jclass StateVectorKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/StateVectorKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_5cc64f3494a3e9df] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;)Z");
                mids$[mid_valueOf_3ff27fc10a384ffc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;");
                mids$[mid_values_6787e3fc16c4dc2a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new StateVectorKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                X = new StateVectorKey(env->getStaticObjectField(cls, "X", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                X_DOT = new StateVectorKey(env->getStaticObjectField(cls, "X_DOT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Y = new StateVectorKey(env->getStaticObjectField(cls, "Y", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Y_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Y_DOT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Z = new StateVectorKey(env->getStaticObjectField(cls, "Z", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Z_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Z_DOT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean StateVectorKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_5cc64f3494a3e9df], a0.this$, a1.this$, a2.this$);
            }

            StateVectorKey StateVectorKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return StateVectorKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3ff27fc10a384ffc], a0.this$));
            }

            JArray< StateVectorKey > StateVectorKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< StateVectorKey >(env->callStaticObjectMethod(cls, mids$[mid_values_6787e3fc16c4dc2a]));
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
            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_StateVectorKey_values(PyTypeObject *type);
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data);
            static PyGetSetDef t_StateVectorKey__fields_[] = {
              DECLARE_GET_FIELD(t_StateVectorKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVectorKey__methods_[] = {
              DECLARE_METHOD(t_StateVectorKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, process, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorKey)[] = {
              { Py_tp_methods, t_StateVectorKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_StateVectorKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(StateVectorKey, t_StateVectorKey, StateVectorKey);
            PyObject *t_StateVectorKey::wrap_Object(const StateVectorKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_StateVectorKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_StateVectorKey::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorKey), &PY_TYPE_DEF(StateVectorKey), module, "StateVectorKey", 0);
            }

            void t_StateVectorKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "class_", make_descriptor(StateVectorKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "wrapfn_", make_descriptor(t_StateVectorKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(StateVectorKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "COMMENT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z_DOT)));
            }

            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorKey::initializeClass, 1)))
                return NULL;
              return t_StateVectorKey::wrap_Object(StateVectorKey(((t_StateVectorKey *) arg)->object.this$));
            }
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::StateVector a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              StateVectorKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::StateVectorKey::valueOf(a0));
                return t_StateVectorKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_StateVectorKey_values(PyTypeObject *type)
            {
              JArray< StateVectorKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::StateVectorKey::values());
              return JArray<jobject>(result.this$).wrap(t_StateVectorKey::wrap_jobject);
            }
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data)
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
#include "org/hipparchus/stat/correlation/KendallsCorrelation.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *KendallsCorrelation::class$ = NULL;
        jmethodID *KendallsCorrelation::mids$ = NULL;
        bool KendallsCorrelation::live$ = false;

        jclass KendallsCorrelation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/KendallsCorrelation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_edb361bfdd1ad9ae] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_computeCorrelationMatrix_05cc2960cde80114] = env->getMethodID(cls, "computeCorrelationMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCorrelationMatrix_340b47d21842d02c] = env->getMethodID(cls, "computeCorrelationMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correlation_628a76297e217f13] = env->getMethodID(cls, "correlation", "([D[D)D");
            mids$[mid_getCorrelationMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getCorrelationMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KendallsCorrelation::KendallsCorrelation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        KendallsCorrelation::KendallsCorrelation(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_edb361bfdd1ad9ae, a0.this$)) {}

        KendallsCorrelation::KendallsCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

        ::org::hipparchus::linear::RealMatrix KendallsCorrelation::computeCorrelationMatrix(const JArray< JArray< jdouble > > & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_05cc2960cde80114], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix KendallsCorrelation::computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_340b47d21842d02c], a0.this$));
        }

        jdouble KendallsCorrelation::correlation(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_correlation_628a76297e217f13], a0.this$, a1.this$);
        }

        ::org::hipparchus::linear::RealMatrix KendallsCorrelation::getCorrelationMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationMatrix_70a207fcbc031df2]));
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
        static PyObject *t_KendallsCorrelation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KendallsCorrelation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KendallsCorrelation_init_(t_KendallsCorrelation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KendallsCorrelation_computeCorrelationMatrix(t_KendallsCorrelation *self, PyObject *args);
        static PyObject *t_KendallsCorrelation_correlation(t_KendallsCorrelation *self, PyObject *args);
        static PyObject *t_KendallsCorrelation_getCorrelationMatrix(t_KendallsCorrelation *self);
        static PyObject *t_KendallsCorrelation_get__correlationMatrix(t_KendallsCorrelation *self, void *data);
        static PyGetSetDef t_KendallsCorrelation__fields_[] = {
          DECLARE_GET_FIELD(t_KendallsCorrelation, correlationMatrix),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KendallsCorrelation__methods_[] = {
          DECLARE_METHOD(t_KendallsCorrelation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KendallsCorrelation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KendallsCorrelation, computeCorrelationMatrix, METH_VARARGS),
          DECLARE_METHOD(t_KendallsCorrelation, correlation, METH_VARARGS),
          DECLARE_METHOD(t_KendallsCorrelation, getCorrelationMatrix, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KendallsCorrelation)[] = {
          { Py_tp_methods, t_KendallsCorrelation__methods_ },
          { Py_tp_init, (void *) t_KendallsCorrelation_init_ },
          { Py_tp_getset, t_KendallsCorrelation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KendallsCorrelation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KendallsCorrelation, t_KendallsCorrelation, KendallsCorrelation);

        void t_KendallsCorrelation::install(PyObject *module)
        {
          installType(&PY_TYPE(KendallsCorrelation), &PY_TYPE_DEF(KendallsCorrelation), module, "KendallsCorrelation", 0);
        }

        void t_KendallsCorrelation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KendallsCorrelation), "class_", make_descriptor(KendallsCorrelation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KendallsCorrelation), "wrapfn_", make_descriptor(t_KendallsCorrelation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KendallsCorrelation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KendallsCorrelation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KendallsCorrelation::initializeClass, 1)))
            return NULL;
          return t_KendallsCorrelation::wrap_Object(KendallsCorrelation(((t_KendallsCorrelation *) arg)->object.this$));
        }
        static PyObject *t_KendallsCorrelation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KendallsCorrelation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KendallsCorrelation_init_(t_KendallsCorrelation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              KendallsCorrelation object((jobject) NULL);

              INT_CALL(object = KendallsCorrelation());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              KendallsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                INT_CALL(object = KendallsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              KendallsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = KendallsCorrelation(a0));
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

        static PyObject *t_KendallsCorrelation_computeCorrelationMatrix(t_KendallsCorrelation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeCorrelationMatrix", args);
          return NULL;
        }

        static PyObject *t_KendallsCorrelation_correlation(t_KendallsCorrelation *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.correlation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "correlation", args);
          return NULL;
        }

        static PyObject *t_KendallsCorrelation_getCorrelationMatrix(t_KendallsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KendallsCorrelation_get__correlationMatrix(t_KendallsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *Position::class$ = NULL;
        jmethodID *Position::mids$ = NULL;
        bool Position::live$ = false;
        ::java::lang::String *Position::MEASUREMENT_TYPE = NULL;

        jclass Position::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/Position");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cbe337d72e3d86dc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_e0193c6ea9f0e7c0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_6e1bb37af9cc219a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getCorrelationCoefficientsMatrix_8cf5267aa13a77f3] = env->getMethodID(cls, "getCorrelationCoefficientsMatrix", "()[[D");
            mids$[mid_getCovarianceMatrix_8cf5267aa13a77f3] = env->getMethodID(cls, "getCovarianceMatrix", "()[[D");
            mids$[mid_getPosition_f88961cca75a2c0a] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Position::Position(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_cbe337d72e3d86dc, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        Position::Position(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< JArray< jdouble > > & a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_e0193c6ea9f0e7c0, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        Position::Position(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_6e1bb37af9cc219a, a0.this$, a1.this$, a2, a3, a4.this$)) {}

        JArray< JArray< jdouble > > Position::getCorrelationCoefficientsMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCorrelationCoefficientsMatrix_8cf5267aa13a77f3]));
        }

        JArray< JArray< jdouble > > Position::getCovarianceMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_8cf5267aa13a77f3]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Position::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_f88961cca75a2c0a]));
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
        static PyObject *t_Position_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Position_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Position_of_(t_Position *self, PyObject *args);
        static int t_Position_init_(t_Position *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Position_getCorrelationCoefficientsMatrix(t_Position *self);
        static PyObject *t_Position_getCovarianceMatrix(t_Position *self);
        static PyObject *t_Position_getPosition(t_Position *self);
        static PyObject *t_Position_get__correlationCoefficientsMatrix(t_Position *self, void *data);
        static PyObject *t_Position_get__covarianceMatrix(t_Position *self, void *data);
        static PyObject *t_Position_get__position(t_Position *self, void *data);
        static PyObject *t_Position_get__parameters_(t_Position *self, void *data);
        static PyGetSetDef t_Position__fields_[] = {
          DECLARE_GET_FIELD(t_Position, correlationCoefficientsMatrix),
          DECLARE_GET_FIELD(t_Position, covarianceMatrix),
          DECLARE_GET_FIELD(t_Position, position),
          DECLARE_GET_FIELD(t_Position, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Position__methods_[] = {
          DECLARE_METHOD(t_Position, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Position, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Position, of_, METH_VARARGS),
          DECLARE_METHOD(t_Position, getCorrelationCoefficientsMatrix, METH_NOARGS),
          DECLARE_METHOD(t_Position, getCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_Position, getPosition, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Position)[] = {
          { Py_tp_methods, t_Position__methods_ },
          { Py_tp_init, (void *) t_Position_init_ },
          { Py_tp_getset, t_Position__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Position)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(Position, t_Position, Position);
        PyObject *t_Position::wrap_Object(const Position& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Position::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Position *self = (t_Position *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Position::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Position::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Position *self = (t_Position *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Position::install(PyObject *module)
        {
          installType(&PY_TYPE(Position), &PY_TYPE_DEF(Position), module, "Position", 0);
        }

        void t_Position::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Position), "class_", make_descriptor(Position::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Position), "wrapfn_", make_descriptor(t_Position::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Position), "boxfn_", make_descriptor(boxObject));
          env->getClass(Position::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Position), "MEASUREMENT_TYPE", make_descriptor(j2p(*Position::MEASUREMENT_TYPE)));
        }

        static PyObject *t_Position_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Position::initializeClass, 1)))
            return NULL;
          return t_Position::wrap_Object(Position(((t_Position *) arg)->object.this$));
        }
        static PyObject *t_Position_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Position::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Position_of_(t_Position *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_Position_init_(t_Position *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
              Position object((jobject) NULL);

              if (!parseArgs(args, "kk[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = Position(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
              Position object((jobject) NULL);

              if (!parseArgs(args, "kk[[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = Position(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
              Position object((jobject) NULL);

              if (!parseArgs(args, "kkDDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = Position(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Position_getCorrelationCoefficientsMatrix(t_Position *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationCoefficientsMatrix());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_Position_getCovarianceMatrix(t_Position *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceMatrix());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_Position_getPosition(t_Position *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }
        static PyObject *t_Position_get__parameters_(t_Position *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Position_get__correlationCoefficientsMatrix(t_Position *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationCoefficientsMatrix());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_Position_get__covarianceMatrix(t_Position *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_Position_get__position(t_Position *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FiltersManager.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FiltersManager::class$ = NULL;
      jmethodID *FiltersManager::mids$ = NULL;
      bool FiltersManager::live$ = false;

      jclass FiltersManager::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FiltersManager");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addFilter_d8e64c73c19d96b6] = env->getMethodID(cls, "addFilter", "(Lorg/orekit/data/DataFilter;)V");
          mids$[mid_applyRelevantFilters_d33f4b0b3a1030ad] = env->getMethodID(cls, "applyRelevantFilters", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");
          mids$[mid_clearFilters_0640e6acf969ed28] = env->getMethodID(cls, "clearFilters", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FiltersManager::FiltersManager() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void FiltersManager::addFilter(const ::org::orekit::data::DataFilter & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addFilter_d8e64c73c19d96b6], a0.this$);
      }

      ::org::orekit::data::DataSource FiltersManager::applyRelevantFilters(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_applyRelevantFilters_d33f4b0b3a1030ad], a0.this$));
      }

      void FiltersManager::clearFilters() const
      {
        env->callVoidMethod(this$, mids$[mid_clearFilters_0640e6acf969ed28]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_FiltersManager_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FiltersManager_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FiltersManager_init_(t_FiltersManager *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FiltersManager_addFilter(t_FiltersManager *self, PyObject *arg);
      static PyObject *t_FiltersManager_applyRelevantFilters(t_FiltersManager *self, PyObject *arg);
      static PyObject *t_FiltersManager_clearFilters(t_FiltersManager *self);

      static PyMethodDef t_FiltersManager__methods_[] = {
        DECLARE_METHOD(t_FiltersManager, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FiltersManager, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FiltersManager, addFilter, METH_O),
        DECLARE_METHOD(t_FiltersManager, applyRelevantFilters, METH_O),
        DECLARE_METHOD(t_FiltersManager, clearFilters, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FiltersManager)[] = {
        { Py_tp_methods, t_FiltersManager__methods_ },
        { Py_tp_init, (void *) t_FiltersManager_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FiltersManager)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FiltersManager, t_FiltersManager, FiltersManager);

      void t_FiltersManager::install(PyObject *module)
      {
        installType(&PY_TYPE(FiltersManager), &PY_TYPE_DEF(FiltersManager), module, "FiltersManager", 0);
      }

      void t_FiltersManager::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FiltersManager), "class_", make_descriptor(FiltersManager::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FiltersManager), "wrapfn_", make_descriptor(t_FiltersManager::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FiltersManager), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FiltersManager_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FiltersManager::initializeClass, 1)))
          return NULL;
        return t_FiltersManager::wrap_Object(FiltersManager(((t_FiltersManager *) arg)->object.this$));
      }
      static PyObject *t_FiltersManager_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FiltersManager::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FiltersManager_init_(t_FiltersManager *self, PyObject *args, PyObject *kwds)
      {
        FiltersManager object((jobject) NULL);

        INT_CALL(object = FiltersManager());
        self->object = object;

        return 0;
      }

      static PyObject *t_FiltersManager_addFilter(t_FiltersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataFilter a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataFilter::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addFilter(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addFilter", arg);
        return NULL;
      }

      static PyObject *t_FiltersManager_applyRelevantFilters(t_FiltersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.applyRelevantFilters(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "applyRelevantFilters", arg);
        return NULL;
      }

      static PyObject *t_FiltersManager_clearFilters(t_FiltersManager *self)
      {
        OBJ_CALL(self->object.clearFilters());
        Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/PolynomialSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *PolynomialSolver::class$ = NULL;
        jmethodID *PolynomialSolver::mids$ = NULL;
        bool PolynomialSolver::live$ = false;

        jclass PolynomialSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/PolynomialSolver");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
        static PyObject *t_PolynomialSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialSolver_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_PolynomialSolver__methods_[] = {
          DECLARE_METHOD(t_PolynomialSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialSolver, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialSolver)[] = {
          { Py_tp_methods, t_PolynomialSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(PolynomialSolver, t_PolynomialSolver, PolynomialSolver);

        void t_PolynomialSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialSolver), &PY_TYPE_DEF(PolynomialSolver), module, "PolynomialSolver", 0);
        }

        void t_PolynomialSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSolver), "class_", make_descriptor(PolynomialSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSolver), "wrapfn_", make_descriptor(t_PolynomialSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialSolver::initializeClass, 1)))
            return NULL;
          return t_PolynomialSolver::wrap_Object(PolynomialSolver(((t_PolynomialSolver *) arg)->object.this$));
        }
        static PyObject *t_PolynomialSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *ShortPeriodTerms::class$ = NULL;
            jmethodID *ShortPeriodTerms::mids$ = NULL;
            bool ShortPeriodTerms::live$ = false;

            jclass ShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getCoefficients_ee77cc1344480b7f] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_3cffd47377eca18a] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_value_5997117348549fd3] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/Orbit;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::Map ShortPeriodTerms::getCoefficients(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Set & a1) const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCoefficients_ee77cc1344480b7f], a0.this$, a1.this$));
            }

            ::java::lang::String ShortPeriodTerms::getCoefficientsKeyPrefix() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCoefficientsKeyPrefix_3cffd47377eca18a]));
            }

            JArray< jdouble > ShortPeriodTerms::value(const ::org::orekit::orbits::Orbit & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_5997117348549fd3], a0.this$));
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
            static PyObject *t_ShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ShortPeriodTerms_getCoefficients(t_ShortPeriodTerms *self, PyObject *args);
            static PyObject *t_ShortPeriodTerms_getCoefficientsKeyPrefix(t_ShortPeriodTerms *self);
            static PyObject *t_ShortPeriodTerms_value(t_ShortPeriodTerms *self, PyObject *arg);
            static PyObject *t_ShortPeriodTerms_get__coefficientsKeyPrefix(t_ShortPeriodTerms *self, void *data);
            static PyGetSetDef t_ShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_ShortPeriodTerms, coefficientsKeyPrefix),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_ShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodTerms, getCoefficients, METH_VARARGS),
              DECLARE_METHOD(t_ShortPeriodTerms, getCoefficientsKeyPrefix, METH_NOARGS),
              DECLARE_METHOD(t_ShortPeriodTerms, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ShortPeriodTerms)[] = {
              { Py_tp_methods, t_ShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ShortPeriodTerms, t_ShortPeriodTerms, ShortPeriodTerms);

            void t_ShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(ShortPeriodTerms), &PY_TYPE_DEF(ShortPeriodTerms), module, "ShortPeriodTerms", 0);
            }

            void t_ShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodTerms), "class_", make_descriptor(ShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodTerms), "wrapfn_", make_descriptor(t_ShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_ShortPeriodTerms::wrap_Object(ShortPeriodTerms(((t_ShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_ShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ShortPeriodTerms_getCoefficients(t_ShortPeriodTerms *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::java::util::Set a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::Map result((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Set::initializeClass, &a0, &a1, &p1, ::java::util::t_Set::parameters_))
              {
                OBJ_CALL(result = self->object.getCoefficients(a0, a1));
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(Object));
              }

              PyErr_SetArgsError((PyObject *) self, "getCoefficients", args);
              return NULL;
            }

            static PyObject *t_ShortPeriodTerms_getCoefficientsKeyPrefix(t_ShortPeriodTerms *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCoefficientsKeyPrefix());
              return j2p(result);
            }

            static PyObject *t_ShortPeriodTerms_value(t_ShortPeriodTerms *self, PyObject *arg)
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
              return NULL;
            }

            static PyObject *t_ShortPeriodTerms_get__coefficientsKeyPrefix(t_ShortPeriodTerms *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCoefficientsKeyPrefix());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LevenbergMarquardtOptimizer::class$ = NULL;
            jmethodID *LevenbergMarquardtOptimizer::mids$ = NULL;
            bool LevenbergMarquardtOptimizer::live$ = false;

            jclass LevenbergMarquardtOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_348987770fc6c791] = env->getMethodID(cls, "<init>", "(DDDDD)V");
                mids$[mid_getCostRelativeTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getCostRelativeTolerance", "()D");
                mids$[mid_getInitialStepBoundFactor_557b8123390d8d0c] = env->getMethodID(cls, "getInitialStepBoundFactor", "()D");
                mids$[mid_getOrthoTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getOrthoTolerance", "()D");
                mids$[mid_getParameterRelativeTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getParameterRelativeTolerance", "()D");
                mids$[mid_getRankingThreshold_557b8123390d8d0c] = env->getMethodID(cls, "getRankingThreshold", "()D");
                mids$[mid_optimize_07184cacaaa6a451] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
                mids$[mid_withCostRelativeTolerance_aaab0b2a95bd4fc0] = env->getMethodID(cls, "withCostRelativeTolerance", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withInitialStepBoundFactor_aaab0b2a95bd4fc0] = env->getMethodID(cls, "withInitialStepBoundFactor", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withOrthoTolerance_aaab0b2a95bd4fc0] = env->getMethodID(cls, "withOrthoTolerance", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withParameterRelativeTolerance_aaab0b2a95bd4fc0] = env->getMethodID(cls, "withParameterRelativeTolerance", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withRankingThreshold_aaab0b2a95bd4fc0] = env->getMethodID(cls, "withRankingThreshold", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LevenbergMarquardtOptimizer::LevenbergMarquardtOptimizer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            LevenbergMarquardtOptimizer::LevenbergMarquardtOptimizer(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_348987770fc6c791, a0, a1, a2, a3, a4)) {}

            jdouble LevenbergMarquardtOptimizer::getCostRelativeTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCostRelativeTolerance_557b8123390d8d0c]);
            }

            jdouble LevenbergMarquardtOptimizer::getInitialStepBoundFactor() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInitialStepBoundFactor_557b8123390d8d0c]);
            }

            jdouble LevenbergMarquardtOptimizer::getOrthoTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOrthoTolerance_557b8123390d8d0c]);
            }

            jdouble LevenbergMarquardtOptimizer::getParameterRelativeTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getParameterRelativeTolerance_557b8123390d8d0c]);
            }

            jdouble LevenbergMarquardtOptimizer::getRankingThreshold() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRankingThreshold_557b8123390d8d0c]);
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum LevenbergMarquardtOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_07184cacaaa6a451], a0.this$));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withCostRelativeTolerance(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withCostRelativeTolerance_aaab0b2a95bd4fc0], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withInitialStepBoundFactor(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withInitialStepBoundFactor_aaab0b2a95bd4fc0], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withOrthoTolerance(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withOrthoTolerance_aaab0b2a95bd4fc0], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withParameterRelativeTolerance(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withParameterRelativeTolerance_aaab0b2a95bd4fc0], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withRankingThreshold(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withRankingThreshold_aaab0b2a95bd4fc0], a0));
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
            static PyObject *t_LevenbergMarquardtOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LevenbergMarquardtOptimizer_init_(t_LevenbergMarquardtOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LevenbergMarquardtOptimizer_getCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getOrthoTolerance(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getRankingThreshold(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_optimize(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withOrthoTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withRankingThreshold(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_get__costRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__initialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__orthoTolerance(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__parameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__rankingThreshold(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyGetSetDef t_LevenbergMarquardtOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, costRelativeTolerance),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, initialStepBoundFactor),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, orthoTolerance),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, parameterRelativeTolerance),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, rankingThreshold),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LevenbergMarquardtOptimizer__methods_[] = {
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getCostRelativeTolerance, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getInitialStepBoundFactor, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getOrthoTolerance, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getParameterRelativeTolerance, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getRankingThreshold, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, optimize, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withCostRelativeTolerance, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withInitialStepBoundFactor, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withOrthoTolerance, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withParameterRelativeTolerance, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withRankingThreshold, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LevenbergMarquardtOptimizer)[] = {
              { Py_tp_methods, t_LevenbergMarquardtOptimizer__methods_ },
              { Py_tp_init, (void *) t_LevenbergMarquardtOptimizer_init_ },
              { Py_tp_getset, t_LevenbergMarquardtOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LevenbergMarquardtOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LevenbergMarquardtOptimizer, t_LevenbergMarquardtOptimizer, LevenbergMarquardtOptimizer);

            void t_LevenbergMarquardtOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(LevenbergMarquardtOptimizer), &PY_TYPE_DEF(LevenbergMarquardtOptimizer), module, "LevenbergMarquardtOptimizer", 0);
            }

            void t_LevenbergMarquardtOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LevenbergMarquardtOptimizer), "class_", make_descriptor(LevenbergMarquardtOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LevenbergMarquardtOptimizer), "wrapfn_", make_descriptor(t_LevenbergMarquardtOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LevenbergMarquardtOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LevenbergMarquardtOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LevenbergMarquardtOptimizer::initializeClass, 1)))
                return NULL;
              return t_LevenbergMarquardtOptimizer::wrap_Object(LevenbergMarquardtOptimizer(((t_LevenbergMarquardtOptimizer *) arg)->object.this$));
            }
            static PyObject *t_LevenbergMarquardtOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LevenbergMarquardtOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LevenbergMarquardtOptimizer_init_(t_LevenbergMarquardtOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  LevenbergMarquardtOptimizer object((jobject) NULL);

                  INT_CALL(object = LevenbergMarquardtOptimizer());
                  self->object = object;
                  break;
                }
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  LevenbergMarquardtOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = LevenbergMarquardtOptimizer(a0, a1, a2, a3, a4));
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

            static PyObject *t_LevenbergMarquardtOptimizer_getCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCostRelativeTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getInitialStepBoundFactor());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getOrthoTolerance(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOrthoTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getParameterRelativeTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getRankingThreshold(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRankingThreshold());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_optimize(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "optimize", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withCostRelativeTolerance(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withCostRelativeTolerance", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withInitialStepBoundFactor(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withInitialStepBoundFactor", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withOrthoTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withOrthoTolerance(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withOrthoTolerance", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withParameterRelativeTolerance(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withParameterRelativeTolerance", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withRankingThreshold(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withRankingThreshold(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withRankingThreshold", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__costRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCostRelativeTolerance());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__initialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getInitialStepBoundFactor());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__orthoTolerance(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOrthoTolerance());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__parameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getParameterRelativeTolerance());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__rankingThreshold(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRankingThreshold());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Asinh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Asinh::class$ = NULL;
        jmethodID *Asinh::mids$ = NULL;
        bool Asinh::live$ = false;

        jclass Asinh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Asinh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Asinh::Asinh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Asinh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Asinh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
      namespace function {
        static PyObject *t_Asinh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Asinh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Asinh_init_(t_Asinh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Asinh_value(t_Asinh *self, PyObject *args);

        static PyMethodDef t_Asinh__methods_[] = {
          DECLARE_METHOD(t_Asinh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asinh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asinh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Asinh)[] = {
          { Py_tp_methods, t_Asinh__methods_ },
          { Py_tp_init, (void *) t_Asinh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Asinh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Asinh, t_Asinh, Asinh);

        void t_Asinh::install(PyObject *module)
        {
          installType(&PY_TYPE(Asinh), &PY_TYPE_DEF(Asinh), module, "Asinh", 0);
        }

        void t_Asinh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asinh), "class_", make_descriptor(Asinh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asinh), "wrapfn_", make_descriptor(t_Asinh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asinh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Asinh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Asinh::initializeClass, 1)))
            return NULL;
          return t_Asinh::wrap_Object(Asinh(((t_Asinh *) arg)->object.this$));
        }
        static PyObject *t_Asinh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Asinh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Asinh_init_(t_Asinh *self, PyObject *args, PyObject *kwds)
        {
          Asinh object((jobject) NULL);

          INT_CALL(object = Asinh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Asinh_value(t_Asinh *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmMetadata::class$ = NULL;
              jmethodID *OmmMetadata::mids$ = NULL;
              bool OmmMetadata::live$ = false;
              ::java::lang::String *OmmMetadata::DSST_THEORY = NULL;
              ::java::lang::String *OmmMetadata::SGP4_XP_THEORY = NULL;
              ::java::lang::String *OmmMetadata::SGP_SGP4_THEORY = NULL;

              jclass OmmMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getMeanElementTheory_3cffd47377eca18a] = env->getMethodID(cls, "getMeanElementTheory", "()Ljava/lang/String;");
                  mids$[mid_setMeanElementTheory_f5ffdf29129ef90a] = env->getMethodID(cls, "setMeanElementTheory", "(Ljava/lang/String;)V");
                  mids$[mid_theoryIsSgpSdp_89b302893bdbe1f1] = env->getMethodID(cls, "theoryIsSgpSdp", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DSST_THEORY = new ::java::lang::String(env->getStaticObjectField(cls, "DSST_THEORY", "Ljava/lang/String;"));
                  SGP4_XP_THEORY = new ::java::lang::String(env->getStaticObjectField(cls, "SGP4_XP_THEORY", "Ljava/lang/String;"));
                  SGP_SGP4_THEORY = new ::java::lang::String(env->getStaticObjectField(cls, "SGP_SGP4_THEORY", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmMetadata::OmmMetadata() : ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::java::lang::String OmmMetadata::getMeanElementTheory() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMeanElementTheory_3cffd47377eca18a]));
              }

              void OmmMetadata::setMeanElementTheory(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMeanElementTheory_f5ffdf29129ef90a], a0.this$);
              }

              jboolean OmmMetadata::theoryIsSgpSdp() const
              {
                return env->callBooleanMethod(this$, mids$[mid_theoryIsSgpSdp_89b302893bdbe1f1]);
              }
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
          namespace odm {
            namespace omm {
              static PyObject *t_OmmMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OmmMetadata_init_(t_OmmMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmMetadata_getMeanElementTheory(t_OmmMetadata *self);
              static PyObject *t_OmmMetadata_setMeanElementTheory(t_OmmMetadata *self, PyObject *arg);
              static PyObject *t_OmmMetadata_theoryIsSgpSdp(t_OmmMetadata *self);
              static PyObject *t_OmmMetadata_get__meanElementTheory(t_OmmMetadata *self, void *data);
              static int t_OmmMetadata_set__meanElementTheory(t_OmmMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OmmMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OmmMetadata, meanElementTheory),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmMetadata__methods_[] = {
                DECLARE_METHOD(t_OmmMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadata, getMeanElementTheory, METH_NOARGS),
                DECLARE_METHOD(t_OmmMetadata, setMeanElementTheory, METH_O),
                DECLARE_METHOD(t_OmmMetadata, theoryIsSgpSdp, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmMetadata)[] = {
                { Py_tp_methods, t_OmmMetadata__methods_ },
                { Py_tp_init, (void *) t_OmmMetadata_init_ },
                { Py_tp_getset, t_OmmMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata),
                NULL
              };

              DEFINE_TYPE(OmmMetadata, t_OmmMetadata, OmmMetadata);

              void t_OmmMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmMetadata), &PY_TYPE_DEF(OmmMetadata), module, "OmmMetadata", 0);
              }

              void t_OmmMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "class_", make_descriptor(OmmMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "wrapfn_", make_descriptor(t_OmmMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "DSST_THEORY", make_descriptor(j2p(*OmmMetadata::DSST_THEORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "SGP4_XP_THEORY", make_descriptor(j2p(*OmmMetadata::SGP4_XP_THEORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "SGP_SGP4_THEORY", make_descriptor(j2p(*OmmMetadata::SGP_SGP4_THEORY)));
              }

              static PyObject *t_OmmMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmMetadata::initializeClass, 1)))
                  return NULL;
                return t_OmmMetadata::wrap_Object(OmmMetadata(((t_OmmMetadata *) arg)->object.this$));
              }
              static PyObject *t_OmmMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OmmMetadata_init_(t_OmmMetadata *self, PyObject *args, PyObject *kwds)
              {
                OmmMetadata object((jobject) NULL);

                INT_CALL(object = OmmMetadata());
                self->object = object;

                return 0;
              }

              static PyObject *t_OmmMetadata_getMeanElementTheory(t_OmmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getMeanElementTheory());
                return j2p(result);
              }

              static PyObject *t_OmmMetadata_setMeanElementTheory(t_OmmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setMeanElementTheory(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMeanElementTheory", arg);
                return NULL;
              }

              static PyObject *t_OmmMetadata_theoryIsSgpSdp(t_OmmMetadata *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.theoryIsSgpSdp());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_OmmMetadata_get__meanElementTheory(t_OmmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getMeanElementTheory());
                return j2p(value);
              }
              static int t_OmmMetadata_set__meanElementTheory(t_OmmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setMeanElementTheory(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "meanElementTheory", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Gaussian.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Gaussian::class$ = NULL;
        jmethodID *Gaussian::mids$ = NULL;
        bool Gaussian::live$ = false;

        jclass Gaussian::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Gaussian");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Gaussian::Gaussian() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        Gaussian::Gaussian(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        Gaussian::Gaussian(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        jdouble Gaussian::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Gaussian::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/Gaussian$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Gaussian_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Gaussian_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Gaussian_init_(t_Gaussian *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Gaussian_value(t_Gaussian *self, PyObject *args);

        static PyMethodDef t_Gaussian__methods_[] = {
          DECLARE_METHOD(t_Gaussian, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Gaussian)[] = {
          { Py_tp_methods, t_Gaussian__methods_ },
          { Py_tp_init, (void *) t_Gaussian_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Gaussian)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Gaussian, t_Gaussian, Gaussian);

        void t_Gaussian::install(PyObject *module)
        {
          installType(&PY_TYPE(Gaussian), &PY_TYPE_DEF(Gaussian), module, "Gaussian", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "Parametric", make_descriptor(&PY_TYPE_DEF(Gaussian$Parametric)));
        }

        void t_Gaussian::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "class_", make_descriptor(Gaussian::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "wrapfn_", make_descriptor(t_Gaussian::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Gaussian_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Gaussian::initializeClass, 1)))
            return NULL;
          return t_Gaussian::wrap_Object(Gaussian(((t_Gaussian *) arg)->object.this$));
        }
        static PyObject *t_Gaussian_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Gaussian::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Gaussian_init_(t_Gaussian *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Gaussian object((jobject) NULL);

              INT_CALL(object = Gaussian());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              Gaussian object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = Gaussian(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              Gaussian object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = Gaussian(a0, a1, a2));
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

        static PyObject *t_Gaussian_value(t_Gaussian *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/PearsonsCorrelation.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/correlation/Covariance.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *PearsonsCorrelation::class$ = NULL;
        jmethodID *PearsonsCorrelation::mids$ = NULL;
        bool PearsonsCorrelation::live$ = false;

        jclass PearsonsCorrelation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/PearsonsCorrelation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_edb361bfdd1ad9ae] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_init$_410ce4478f691fc6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/correlation/Covariance;)V");
            mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_dcaf51fffcbe4d9e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;I)V");
            mids$[mid_computeCorrelationMatrix_05cc2960cde80114] = env->getMethodID(cls, "computeCorrelationMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCorrelationMatrix_340b47d21842d02c] = env->getMethodID(cls, "computeCorrelationMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correlation_628a76297e217f13] = env->getMethodID(cls, "correlation", "([D[D)D");
            mids$[mid_covarianceToCorrelation_340b47d21842d02c] = env->getMethodID(cls, "covarianceToCorrelation", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getCorrelationMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getCorrelationMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getCorrelationPValues_70a207fcbc031df2] = env->getMethodID(cls, "getCorrelationPValues", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getCorrelationStandardErrors_70a207fcbc031df2] = env->getMethodID(cls, "getCorrelationStandardErrors", "()Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PearsonsCorrelation::PearsonsCorrelation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        PearsonsCorrelation::PearsonsCorrelation(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_edb361bfdd1ad9ae, a0.this$)) {}

        PearsonsCorrelation::PearsonsCorrelation(const ::org::hipparchus::stat::correlation::Covariance & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_410ce4478f691fc6, a0.this$)) {}

        PearsonsCorrelation::PearsonsCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

        PearsonsCorrelation::PearsonsCorrelation(const ::org::hipparchus::linear::RealMatrix & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dcaf51fffcbe4d9e, a0.this$, a1)) {}

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::computeCorrelationMatrix(const JArray< JArray< jdouble > > & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_05cc2960cde80114], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_340b47d21842d02c], a0.this$));
        }

        jdouble PearsonsCorrelation::correlation(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_correlation_628a76297e217f13], a0.this$, a1.this$);
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::covarianceToCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_covarianceToCorrelation_340b47d21842d02c], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::getCorrelationMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationMatrix_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::getCorrelationPValues() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationPValues_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::getCorrelationStandardErrors() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationStandardErrors_70a207fcbc031df2]));
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
        static PyObject *t_PearsonsCorrelation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PearsonsCorrelation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PearsonsCorrelation_init_(t_PearsonsCorrelation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PearsonsCorrelation_computeCorrelationMatrix(t_PearsonsCorrelation *self, PyObject *args);
        static PyObject *t_PearsonsCorrelation_correlation(t_PearsonsCorrelation *self, PyObject *args);
        static PyObject *t_PearsonsCorrelation_covarianceToCorrelation(t_PearsonsCorrelation *self, PyObject *arg);
        static PyObject *t_PearsonsCorrelation_getCorrelationMatrix(t_PearsonsCorrelation *self);
        static PyObject *t_PearsonsCorrelation_getCorrelationPValues(t_PearsonsCorrelation *self);
        static PyObject *t_PearsonsCorrelation_getCorrelationStandardErrors(t_PearsonsCorrelation *self);
        static PyObject *t_PearsonsCorrelation_get__correlationMatrix(t_PearsonsCorrelation *self, void *data);
        static PyObject *t_PearsonsCorrelation_get__correlationPValues(t_PearsonsCorrelation *self, void *data);
        static PyObject *t_PearsonsCorrelation_get__correlationStandardErrors(t_PearsonsCorrelation *self, void *data);
        static PyGetSetDef t_PearsonsCorrelation__fields_[] = {
          DECLARE_GET_FIELD(t_PearsonsCorrelation, correlationMatrix),
          DECLARE_GET_FIELD(t_PearsonsCorrelation, correlationPValues),
          DECLARE_GET_FIELD(t_PearsonsCorrelation, correlationStandardErrors),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PearsonsCorrelation__methods_[] = {
          DECLARE_METHOD(t_PearsonsCorrelation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PearsonsCorrelation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PearsonsCorrelation, computeCorrelationMatrix, METH_VARARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, correlation, METH_VARARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, covarianceToCorrelation, METH_O),
          DECLARE_METHOD(t_PearsonsCorrelation, getCorrelationMatrix, METH_NOARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, getCorrelationPValues, METH_NOARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, getCorrelationStandardErrors, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PearsonsCorrelation)[] = {
          { Py_tp_methods, t_PearsonsCorrelation__methods_ },
          { Py_tp_init, (void *) t_PearsonsCorrelation_init_ },
          { Py_tp_getset, t_PearsonsCorrelation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PearsonsCorrelation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PearsonsCorrelation, t_PearsonsCorrelation, PearsonsCorrelation);

        void t_PearsonsCorrelation::install(PyObject *module)
        {
          installType(&PY_TYPE(PearsonsCorrelation), &PY_TYPE_DEF(PearsonsCorrelation), module, "PearsonsCorrelation", 0);
        }

        void t_PearsonsCorrelation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PearsonsCorrelation), "class_", make_descriptor(PearsonsCorrelation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PearsonsCorrelation), "wrapfn_", make_descriptor(t_PearsonsCorrelation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PearsonsCorrelation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PearsonsCorrelation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PearsonsCorrelation::initializeClass, 1)))
            return NULL;
          return t_PearsonsCorrelation::wrap_Object(PearsonsCorrelation(((t_PearsonsCorrelation *) arg)->object.this$));
        }
        static PyObject *t_PearsonsCorrelation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PearsonsCorrelation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PearsonsCorrelation_init_(t_PearsonsCorrelation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              PearsonsCorrelation object((jobject) NULL);

              INT_CALL(object = PearsonsCorrelation());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                INT_CALL(object = PearsonsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::correlation::Covariance a0((jobject) NULL);
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::stat::correlation::Covariance::initializeClass, &a0))
              {
                INT_CALL(object = PearsonsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = PearsonsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              jint a1;
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                INT_CALL(object = PearsonsCorrelation(a0, a1));
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

        static PyObject *t_PearsonsCorrelation_computeCorrelationMatrix(t_PearsonsCorrelation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeCorrelationMatrix", args);
          return NULL;
        }

        static PyObject *t_PearsonsCorrelation_correlation(t_PearsonsCorrelation *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.correlation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "correlation", args);
          return NULL;
        }

        static PyObject *t_PearsonsCorrelation_covarianceToCorrelation(t_PearsonsCorrelation *self, PyObject *arg)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.covarianceToCorrelation(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "covarianceToCorrelation", arg);
          return NULL;
        }

        static PyObject *t_PearsonsCorrelation_getCorrelationMatrix(t_PearsonsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_PearsonsCorrelation_getCorrelationPValues(t_PearsonsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationPValues());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_PearsonsCorrelation_getCorrelationStandardErrors(t_PearsonsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationStandardErrors());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_PearsonsCorrelation_get__correlationMatrix(t_PearsonsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_PearsonsCorrelation_get__correlationPValues(t_PearsonsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationPValues());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_PearsonsCorrelation_get__correlationStandardErrors(t_PearsonsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationStandardErrors());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/CombinatoricsUtils$FactorialLog.h"
#include "org/hipparchus/util/CombinatoricsUtils$FactorialLog.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *CombinatoricsUtils$FactorialLog::class$ = NULL;
      jmethodID *CombinatoricsUtils$FactorialLog::mids$ = NULL;
      bool CombinatoricsUtils$FactorialLog::live$ = false;

      jclass CombinatoricsUtils$FactorialLog::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/CombinatoricsUtils$FactorialLog");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_524104373c0f9b3b] = env->getStaticMethodID(cls, "create", "()Lorg/hipparchus/util/CombinatoricsUtils$FactorialLog;");
          mids$[mid_value_69cfb132c661aca4] = env->getMethodID(cls, "value", "(I)D");
          mids$[mid_withCache_ec5289f809753aa8] = env->getMethodID(cls, "withCache", "(I)Lorg/hipparchus/util/CombinatoricsUtils$FactorialLog;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CombinatoricsUtils$FactorialLog CombinatoricsUtils$FactorialLog::create()
      {
        jclass cls = env->getClass(initializeClass);
        return CombinatoricsUtils$FactorialLog(env->callStaticObjectMethod(cls, mids$[mid_create_524104373c0f9b3b]));
      }

      jdouble CombinatoricsUtils$FactorialLog::value(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_69cfb132c661aca4], a0);
      }

      CombinatoricsUtils$FactorialLog CombinatoricsUtils$FactorialLog::withCache(jint a0) const
      {
        return CombinatoricsUtils$FactorialLog(env->callObjectMethod(this$, mids$[mid_withCache_ec5289f809753aa8], a0));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_CombinatoricsUtils$FactorialLog_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils$FactorialLog_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils$FactorialLog_create(PyTypeObject *type);
      static PyObject *t_CombinatoricsUtils$FactorialLog_value(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg);
      static PyObject *t_CombinatoricsUtils$FactorialLog_withCache(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg);

      static PyMethodDef t_CombinatoricsUtils$FactorialLog__methods_[] = {
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, create, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, value, METH_O),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, withCache, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CombinatoricsUtils$FactorialLog)[] = {
        { Py_tp_methods, t_CombinatoricsUtils$FactorialLog__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CombinatoricsUtils$FactorialLog)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CombinatoricsUtils$FactorialLog, t_CombinatoricsUtils$FactorialLog, CombinatoricsUtils$FactorialLog);

      void t_CombinatoricsUtils$FactorialLog::install(PyObject *module)
      {
        installType(&PY_TYPE(CombinatoricsUtils$FactorialLog), &PY_TYPE_DEF(CombinatoricsUtils$FactorialLog), module, "CombinatoricsUtils$FactorialLog", 0);
      }

      void t_CombinatoricsUtils$FactorialLog::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils$FactorialLog), "class_", make_descriptor(CombinatoricsUtils$FactorialLog::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils$FactorialLog), "wrapfn_", make_descriptor(t_CombinatoricsUtils$FactorialLog::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils$FactorialLog), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CombinatoricsUtils$FactorialLog::initializeClass, 1)))
          return NULL;
        return t_CombinatoricsUtils$FactorialLog::wrap_Object(CombinatoricsUtils$FactorialLog(((t_CombinatoricsUtils$FactorialLog *) arg)->object.this$));
      }
      static PyObject *t_CombinatoricsUtils$FactorialLog_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CombinatoricsUtils$FactorialLog::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_create(PyTypeObject *type)
      {
        CombinatoricsUtils$FactorialLog result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils$FactorialLog::create());
        return t_CombinatoricsUtils$FactorialLog::wrap_Object(result);
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_value(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_withCache(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg)
      {
        jint a0;
        CombinatoricsUtils$FactorialLog result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withCache(a0));
          return t_CombinatoricsUtils$FactorialLog::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withCache", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldOrdinaryDifferentialEquation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldOrdinaryDifferentialEquation::class$ = NULL;
      jmethodID *FieldOrdinaryDifferentialEquation::mids$ = NULL;
      bool FieldOrdinaryDifferentialEquation::live$ = false;

      jclass FieldOrdinaryDifferentialEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldOrdinaryDifferentialEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_67a274b4fbd2dca4] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_ff1d1482edb7bec1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldOrdinaryDifferentialEquation::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_67a274b4fbd2dca4], a0.this$, a1.this$));
      }

      jint FieldOrdinaryDifferentialEquation::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      void FieldOrdinaryDifferentialEquation::init(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_init_ff1d1482edb7bec1], a0.this$, a1.this$, a2.this$);
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
      static PyObject *t_FieldOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrdinaryDifferentialEquation_of_(t_FieldOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_FieldOrdinaryDifferentialEquation_computeDerivatives(t_FieldOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_FieldOrdinaryDifferentialEquation_getDimension(t_FieldOrdinaryDifferentialEquation *self);
      static PyObject *t_FieldOrdinaryDifferentialEquation_init(t_FieldOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_FieldOrdinaryDifferentialEquation_get__dimension(t_FieldOrdinaryDifferentialEquation *self, void *data);
      static PyObject *t_FieldOrdinaryDifferentialEquation_get__parameters_(t_FieldOrdinaryDifferentialEquation *self, void *data);
      static PyGetSetDef t_FieldOrdinaryDifferentialEquation__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrdinaryDifferentialEquation, dimension),
        DECLARE_GET_FIELD(t_FieldOrdinaryDifferentialEquation, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrdinaryDifferentialEquation__methods_[] = {
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrdinaryDifferentialEquation)[] = {
        { Py_tp_methods, t_FieldOrdinaryDifferentialEquation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldOrdinaryDifferentialEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrdinaryDifferentialEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldOrdinaryDifferentialEquation, t_FieldOrdinaryDifferentialEquation, FieldOrdinaryDifferentialEquation);
      PyObject *t_FieldOrdinaryDifferentialEquation::wrap_Object(const FieldOrdinaryDifferentialEquation& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrdinaryDifferentialEquation::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrdinaryDifferentialEquation *self = (t_FieldOrdinaryDifferentialEquation *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrdinaryDifferentialEquation::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrdinaryDifferentialEquation::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrdinaryDifferentialEquation *self = (t_FieldOrdinaryDifferentialEquation *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrdinaryDifferentialEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrdinaryDifferentialEquation), &PY_TYPE_DEF(FieldOrdinaryDifferentialEquation), module, "FieldOrdinaryDifferentialEquation", 0);
      }

      void t_FieldOrdinaryDifferentialEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrdinaryDifferentialEquation), "class_", make_descriptor(FieldOrdinaryDifferentialEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrdinaryDifferentialEquation), "wrapfn_", make_descriptor(t_FieldOrdinaryDifferentialEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrdinaryDifferentialEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrdinaryDifferentialEquation::initializeClass, 1)))
          return NULL;
        return t_FieldOrdinaryDifferentialEquation::wrap_Object(FieldOrdinaryDifferentialEquation(((t_FieldOrdinaryDifferentialEquation *) arg)->object.this$));
      }
      static PyObject *t_FieldOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrdinaryDifferentialEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_of_(t_FieldOrdinaryDifferentialEquation *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_computeDerivatives(t_FieldOrdinaryDifferentialEquation *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_getDimension(t_FieldOrdinaryDifferentialEquation *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_init(t_FieldOrdinaryDifferentialEquation *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldOrdinaryDifferentialEquation_get__parameters_(t_FieldOrdinaryDifferentialEquation *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_get__dimension(t_FieldOrdinaryDifferentialEquation *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmRelativeMetadataKey::class$ = NULL;
            jmethodID *CdmRelativeMetadataKey::mids$ = NULL;
            bool CdmRelativeMetadataKey::live$ = false;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::APPROACH_ANGLE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_MAX_PC_METHOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_MAX_PROBABILITY = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_PERCENTILE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_PROBABILITY = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_PROBABILITY_METHOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::CONJUNCTION_ID = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::MAHALANOBIS_DISTANCE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::MISS_DISTANCE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::NEXT_MESSAGE_EPOCH = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::PREVIOUS_MESSAGE_EPOCH = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::PREVIOUS_MESSAGE_ID = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_POSITION_N = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_POSITION_R = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_POSITION_T = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_SPEED = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_VELOCITY_N = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_VELOCITY_R = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_VELOCITY_T = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_ENTRY_TIME = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_EXIT_TIME = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_PC_THRESHOLD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_TYPE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_FRAME = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_RADIUS = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_SHAPE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_X = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_Y = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_Z = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY_METHOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SEFI_FRAGMENTATION_MODEL = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::START_SCREEN_PERIOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::STOP_SCREEN_PERIOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::TCA = NULL;

            jclass CdmRelativeMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_ec54002a797ecffd] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)Z");
                mids$[mid_valueOf_6ece222d9566c3c2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;");
                mids$[mid_values_973ad26d1410a753] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                APPROACH_ANGLE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "APPROACH_ANGLE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_MAX_PC_METHOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_MAX_PC_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_MAX_PROBABILITY = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_MAX_PROBABILITY", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_PERCENTILE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_PERCENTILE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_PROBABILITY = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_PROBABILITY", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_PROBABILITY_METHOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_PROBABILITY_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                CONJUNCTION_ID = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "CONJUNCTION_ID", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                MAHALANOBIS_DISTANCE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "MAHALANOBIS_DISTANCE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                MISS_DISTANCE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "MISS_DISTANCE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                NEXT_MESSAGE_EPOCH = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "NEXT_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                PREVIOUS_MESSAGE_EPOCH = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                PREVIOUS_MESSAGE_ID = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_ID", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_POSITION_N = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_POSITION_N", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_POSITION_R = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_POSITION_R", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_POSITION_T = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_POSITION_T", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_SPEED = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_SPEED", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_VELOCITY_N = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_VELOCITY_N", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_VELOCITY_R = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_VELOCITY_R", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_VELOCITY_T = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_VELOCITY_T", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_ENTRY_TIME = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_ENTRY_TIME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_EXIT_TIME = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_EXIT_TIME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_PC_THRESHOLD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_PC_THRESHOLD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_TYPE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_TYPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_FRAME = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_RADIUS = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_RADIUS", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_SHAPE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_SHAPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_X = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_X", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_Y = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_Y", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_Z = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_Z", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SEFI_COLLISION_PROBABILITY = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SEFI_COLLISION_PROBABILITY", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SEFI_COLLISION_PROBABILITY_METHOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SEFI_COLLISION_PROBABILITY_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SEFI_FRAGMENTATION_MODEL = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SEFI_FRAGMENTATION_MODEL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                START_SCREEN_PERIOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "START_SCREEN_PERIOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                STOP_SCREEN_PERIOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "STOP_SCREEN_PERIOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                TCA = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "TCA", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CdmRelativeMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_ec54002a797ecffd], a0.this$, a1.this$, a2.this$);
            }

            CdmRelativeMetadataKey CdmRelativeMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CdmRelativeMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6ece222d9566c3c2], a0.this$));
            }

            JArray< CdmRelativeMetadataKey > CdmRelativeMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CdmRelativeMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_973ad26d1410a753]));
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
            static PyObject *t_CdmRelativeMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmRelativeMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmRelativeMetadataKey_of_(t_CdmRelativeMetadataKey *self, PyObject *args);
            static PyObject *t_CdmRelativeMetadataKey_process(t_CdmRelativeMetadataKey *self, PyObject *args);
            static PyObject *t_CdmRelativeMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CdmRelativeMetadataKey_values(PyTypeObject *type);
            static PyObject *t_CdmRelativeMetadataKey_get__parameters_(t_CdmRelativeMetadataKey *self, void *data);
            static PyGetSetDef t_CdmRelativeMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_CdmRelativeMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmRelativeMetadataKey__methods_[] = {
              DECLARE_METHOD(t_CdmRelativeMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmRelativeMetadataKey)[] = {
              { Py_tp_methods, t_CdmRelativeMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmRelativeMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmRelativeMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CdmRelativeMetadataKey, t_CdmRelativeMetadataKey, CdmRelativeMetadataKey);
            PyObject *t_CdmRelativeMetadataKey::wrap_Object(const CdmRelativeMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmRelativeMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmRelativeMetadataKey *self = (t_CdmRelativeMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CdmRelativeMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmRelativeMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmRelativeMetadataKey *self = (t_CdmRelativeMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CdmRelativeMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmRelativeMetadataKey), &PY_TYPE_DEF(CdmRelativeMetadataKey), module, "CdmRelativeMetadataKey", 0);
            }

            void t_CdmRelativeMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "class_", make_descriptor(CdmRelativeMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "wrapfn_", make_descriptor(t_CdmRelativeMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmRelativeMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "APPROACH_ANGLE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::APPROACH_ANGLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_MAX_PC_METHOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_MAX_PC_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_MAX_PROBABILITY", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_MAX_PROBABILITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_PERCENTILE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_PERCENTILE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_PROBABILITY", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_PROBABILITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_PROBABILITY_METHOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_PROBABILITY_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "CONJUNCTION_ID", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::CONJUNCTION_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "MAHALANOBIS_DISTANCE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::MAHALANOBIS_DISTANCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "MISS_DISTANCE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::MISS_DISTANCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "NEXT_MESSAGE_EPOCH", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::NEXT_MESSAGE_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "PREVIOUS_MESSAGE_EPOCH", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::PREVIOUS_MESSAGE_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "PREVIOUS_MESSAGE_ID", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::PREVIOUS_MESSAGE_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_POSITION_N", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_POSITION_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_POSITION_R", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_POSITION_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_POSITION_T", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_POSITION_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_SPEED", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_SPEED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_VELOCITY_N", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_VELOCITY_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_VELOCITY_R", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_VELOCITY_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_VELOCITY_T", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_VELOCITY_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_ENTRY_TIME", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_ENTRY_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_EXIT_TIME", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_EXIT_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_PC_THRESHOLD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_PC_THRESHOLD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_TYPE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_FRAME", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_RADIUS", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_RADIUS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_SHAPE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_SHAPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_X", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_Y", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_Z", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SEFI_COLLISION_PROBABILITY", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SEFI_COLLISION_PROBABILITY_METHOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SEFI_FRAGMENTATION_MODEL", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SEFI_FRAGMENTATION_MODEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "START_SCREEN_PERIOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::START_SCREEN_PERIOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "STOP_SCREEN_PERIOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::STOP_SCREEN_PERIOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "TCA", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::TCA)));
            }

            static PyObject *t_CdmRelativeMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmRelativeMetadataKey::initializeClass, 1)))
                return NULL;
              return t_CdmRelativeMetadataKey::wrap_Object(CdmRelativeMetadataKey(((t_CdmRelativeMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_CdmRelativeMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmRelativeMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmRelativeMetadataKey_of_(t_CdmRelativeMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmRelativeMetadataKey_process(t_CdmRelativeMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CdmRelativeMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadataKey::valueOf(a0));
                return t_CdmRelativeMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CdmRelativeMetadataKey_values(PyTypeObject *type)
            {
              JArray< CdmRelativeMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_CdmRelativeMetadataKey::wrap_jobject);
            }
            static PyObject *t_CdmRelativeMetadataKey_get__parameters_(t_CdmRelativeMetadataKey *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmClockCorrectionData::class$ = NULL;
              jmethodID *RtcmClockCorrectionData::mids$ = NULL;
              bool RtcmClockCorrectionData::live$ = false;

              jclass RtcmClockCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_96d5462b84e1a874] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_setClockCorrection_cf572ee5ddb143ac] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmClockCorrectionData::RtcmClockCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection RtcmClockCorrectionData::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_96d5462b84e1a874]));
              }

              void RtcmClockCorrectionData::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_cf572ee5ddb143ac], a0.this$);
              }
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {
              static PyObject *t_RtcmClockCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmClockCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmClockCorrectionData_init_(t_RtcmClockCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmClockCorrectionData_getClockCorrection(t_RtcmClockCorrectionData *self);
              static PyObject *t_RtcmClockCorrectionData_setClockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmClockCorrectionData_get__clockCorrection(t_RtcmClockCorrectionData *self, void *data);
              static int t_RtcmClockCorrectionData_set__clockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmClockCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmClockCorrectionData, clockCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmClockCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmClockCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmClockCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmClockCorrectionData, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmClockCorrectionData, setClockCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmClockCorrectionData)[] = {
                { Py_tp_methods, t_RtcmClockCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmClockCorrectionData_init_ },
                { Py_tp_getset, t_RtcmClockCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmClockCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData),
                NULL
              };

              DEFINE_TYPE(RtcmClockCorrectionData, t_RtcmClockCorrectionData, RtcmClockCorrectionData);

              void t_RtcmClockCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmClockCorrectionData), &PY_TYPE_DEF(RtcmClockCorrectionData), module, "RtcmClockCorrectionData", 0);
              }

              void t_RtcmClockCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmClockCorrectionData), "class_", make_descriptor(RtcmClockCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmClockCorrectionData), "wrapfn_", make_descriptor(t_RtcmClockCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmClockCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmClockCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmClockCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmClockCorrectionData::wrap_Object(RtcmClockCorrectionData(((t_RtcmClockCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmClockCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmClockCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmClockCorrectionData_init_(t_RtcmClockCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmClockCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmClockCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmClockCorrectionData_getClockCorrection(t_RtcmClockCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmClockCorrectionData_setClockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_RtcmClockCorrectionData_get__clockCorrection(t_RtcmClockCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_RtcmClockCorrectionData_set__clockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "clockCorrection", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/GTest.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *GTest::class$ = NULL;
        jmethodID *GTest::mids$ = NULL;
        bool GTest::live$ = false;

        jclass GTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/GTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_g_309c07a77179d86e] = env->getMethodID(cls, "g", "([D[J)D");
            mids$[mid_gDataSetsComparison_c9aa1880e4fb2330] = env->getMethodID(cls, "gDataSetsComparison", "([J[J)D");
            mids$[mid_gTest_309c07a77179d86e] = env->getMethodID(cls, "gTest", "([D[J)D");
            mids$[mid_gTest_deac5230a366dcf3] = env->getMethodID(cls, "gTest", "([D[JD)Z");
            mids$[mid_gTestDataSetsComparison_c9aa1880e4fb2330] = env->getMethodID(cls, "gTestDataSetsComparison", "([J[J)D");
            mids$[mid_gTestDataSetsComparison_885f29369ee9c892] = env->getMethodID(cls, "gTestDataSetsComparison", "([J[JD)Z");
            mids$[mid_gTestIntrinsic_309c07a77179d86e] = env->getMethodID(cls, "gTestIntrinsic", "([D[J)D");
            mids$[mid_rootLogLikelihoodRatio_db51ea2c930fe509] = env->getMethodID(cls, "rootLogLikelihoodRatio", "(JJJJ)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GTest::GTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble GTest::g(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_309c07a77179d86e], a0.this$, a1.this$);
        }

        jdouble GTest::gDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gDataSetsComparison_c9aa1880e4fb2330], a0.this$, a1.this$);
        }

        jdouble GTest::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gTest_309c07a77179d86e], a0.this$, a1.this$);
        }

        jboolean GTest::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_gTest_deac5230a366dcf3], a0.this$, a1.this$, a2);
        }

        jdouble GTest::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gTestDataSetsComparison_c9aa1880e4fb2330], a0.this$, a1.this$);
        }

        jboolean GTest::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_gTestDataSetsComparison_885f29369ee9c892], a0.this$, a1.this$, a2);
        }

        jdouble GTest::gTestIntrinsic(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gTestIntrinsic_309c07a77179d86e], a0.this$, a1.this$);
        }

        jdouble GTest::rootLogLikelihoodRatio(jlong a0, jlong a1, jlong a2, jlong a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_rootLogLikelihoodRatio_db51ea2c930fe509], a0, a1, a2, a3);
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
      namespace inference {
        static PyObject *t_GTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GTest_init_(t_GTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GTest_g(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gDataSetsComparison(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gTest(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gTestDataSetsComparison(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gTestIntrinsic(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_rootLogLikelihoodRatio(t_GTest *self, PyObject *args);

        static PyMethodDef t_GTest__methods_[] = {
          DECLARE_METHOD(t_GTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GTest, g, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gDataSetsComparison, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gTest, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gTestDataSetsComparison, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gTestIntrinsic, METH_VARARGS),
          DECLARE_METHOD(t_GTest, rootLogLikelihoodRatio, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GTest)[] = {
          { Py_tp_methods, t_GTest__methods_ },
          { Py_tp_init, (void *) t_GTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GTest, t_GTest, GTest);

        void t_GTest::install(PyObject *module)
        {
          installType(&PY_TYPE(GTest), &PY_TYPE_DEF(GTest), module, "GTest", 0);
        }

        void t_GTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GTest), "class_", make_descriptor(GTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GTest), "wrapfn_", make_descriptor(t_GTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GTest::initializeClass, 1)))
            return NULL;
          return t_GTest::wrap_Object(GTest(((t_GTest *) arg)->object.this$));
        }
        static PyObject *t_GTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GTest_init_(t_GTest *self, PyObject *args, PyObject *kwds)
        {
          GTest object((jobject) NULL);

          INT_CALL(object = GTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_GTest_g(t_GTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.g(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", args);
          return NULL;
        }

        static PyObject *t_GTest_gDataSetsComparison(t_GTest *self, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "gDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_GTest_gTest(t_GTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.gTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.gTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "gTest", args);
          return NULL;
        }

        static PyObject *t_GTest_gTestDataSetsComparison(t_GTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.gTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.gTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "gTestDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_GTest_gTestIntrinsic(t_GTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gTestIntrinsic(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "gTestIntrinsic", args);
          return NULL;
        }

        static PyObject *t_GTest_rootLogLikelihoodRatio(t_GTest *self, PyObject *args)
        {
          jlong a0;
          jlong a1;
          jlong a2;
          jlong a3;
          jdouble result;

          if (!parseArgs(args, "JJJJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.rootLogLikelihoodRatio(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootLogLikelihoodRatio", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldAltitudeDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAltitudeDetector::class$ = NULL;
        jmethodID *FieldAltitudeDetector::mids$ = NULL;
        bool FieldAltitudeDetector::live$ = false;

        jclass FieldAltitudeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAltitudeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_71d2c8d8bf59d972] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_84314a8cb0a6e687] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_55e0321e34e8239a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/BodyShape;)V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getAltitude_613c8f46c659f636] = env->getMethodID(cls, "getAltitude", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getBodyShape_f166528db337c659] = env->getMethodID(cls, "getBodyShape", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_8db104ded2f3f8b7] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAltitudeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldAltitudeDetector::FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::BodyShape & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_71d2c8d8bf59d972, a0.this$, a1.this$)) {}

        FieldAltitudeDetector::FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::bodies::BodyShape & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_84314a8cb0a6e687, a0.this$, a1.this$, a2.this$)) {}

        FieldAltitudeDetector::FieldAltitudeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::bodies::BodyShape & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_55e0321e34e8239a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldAltitudeDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldAltitudeDetector::getAltitude() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAltitude_613c8f46c659f636]));
        }

        ::org::orekit::bodies::BodyShape FieldAltitudeDetector::getBodyShape() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBodyShape_f166528db337c659]));
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
      namespace events {
        static PyObject *t_FieldAltitudeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAltitudeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAltitudeDetector_of_(t_FieldAltitudeDetector *self, PyObject *args);
        static int t_FieldAltitudeDetector_init_(t_FieldAltitudeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldAltitudeDetector_g(t_FieldAltitudeDetector *self, PyObject *args);
        static PyObject *t_FieldAltitudeDetector_getAltitude(t_FieldAltitudeDetector *self);
        static PyObject *t_FieldAltitudeDetector_getBodyShape(t_FieldAltitudeDetector *self);
        static PyObject *t_FieldAltitudeDetector_get__altitude(t_FieldAltitudeDetector *self, void *data);
        static PyObject *t_FieldAltitudeDetector_get__bodyShape(t_FieldAltitudeDetector *self, void *data);
        static PyObject *t_FieldAltitudeDetector_get__parameters_(t_FieldAltitudeDetector *self, void *data);
        static PyGetSetDef t_FieldAltitudeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAltitudeDetector, altitude),
          DECLARE_GET_FIELD(t_FieldAltitudeDetector, bodyShape),
          DECLARE_GET_FIELD(t_FieldAltitudeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAltitudeDetector__methods_[] = {
          DECLARE_METHOD(t_FieldAltitudeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAltitudeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAltitudeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAltitudeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldAltitudeDetector, getAltitude, METH_NOARGS),
          DECLARE_METHOD(t_FieldAltitudeDetector, getBodyShape, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAltitudeDetector)[] = {
          { Py_tp_methods, t_FieldAltitudeDetector__methods_ },
          { Py_tp_init, (void *) t_FieldAltitudeDetector_init_ },
          { Py_tp_getset, t_FieldAltitudeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAltitudeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldAltitudeDetector, t_FieldAltitudeDetector, FieldAltitudeDetector);
        PyObject *t_FieldAltitudeDetector::wrap_Object(const FieldAltitudeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAltitudeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAltitudeDetector *self = (t_FieldAltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAltitudeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAltitudeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAltitudeDetector *self = (t_FieldAltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAltitudeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAltitudeDetector), &PY_TYPE_DEF(FieldAltitudeDetector), module, "FieldAltitudeDetector", 0);
        }

        void t_FieldAltitudeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAltitudeDetector), "class_", make_descriptor(FieldAltitudeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAltitudeDetector), "wrapfn_", make_descriptor(t_FieldAltitudeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAltitudeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAltitudeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAltitudeDetector::initializeClass, 1)))
            return NULL;
          return t_FieldAltitudeDetector::wrap_Object(FieldAltitudeDetector(((t_FieldAltitudeDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldAltitudeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAltitudeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAltitudeDetector_of_(t_FieldAltitudeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldAltitudeDetector_init_(t_FieldAltitudeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::BodyShape a1((jobject) NULL);
              FieldAltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
              {
                INT_CALL(object = FieldAltitudeDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::BodyShape a2((jobject) NULL);
              FieldAltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldAltitudeDetector(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::bodies::BodyShape a3((jobject) NULL);
              FieldAltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "KKKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                INT_CALL(object = FieldAltitudeDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldAltitudeDetector_g(t_FieldAltitudeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldAltitudeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldAltitudeDetector_getAltitude(t_FieldAltitudeDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getAltitude());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAltitudeDetector_getBodyShape(t_FieldAltitudeDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_FieldAltitudeDetector_get__parameters_(t_FieldAltitudeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAltitudeDetector_get__altitude(t_FieldAltitudeDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getAltitude());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldAltitudeDetector_get__bodyShape(t_FieldAltitudeDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldPVCoordinatesProvider::class$ = NULL;
      jmethodID *FieldPVCoordinatesProvider::mids$ = NULL;
      bool FieldPVCoordinatesProvider::live$ = false;

      jclass FieldPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getPVCoordinates_4ac52e75113a03db] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_8fac774a8fbb3d99] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_4ac52e75113a03db], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinatesProvider::getPosition(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_8fac774a8fbb3d99], a0.this$, a1.this$));
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
      static PyObject *t_FieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinatesProvider_of_(t_FieldPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_FieldPVCoordinatesProvider_getPVCoordinates(t_FieldPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_FieldPVCoordinatesProvider_getPosition(t_FieldPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_FieldPVCoordinatesProvider_get__parameters_(t_FieldPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_FieldPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPVCoordinatesProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_FieldPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldPVCoordinatesProvider, t_FieldPVCoordinatesProvider, FieldPVCoordinatesProvider);
      PyObject *t_FieldPVCoordinatesProvider::wrap_Object(const FieldPVCoordinatesProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinatesProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinatesProvider *self = (t_FieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPVCoordinatesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinatesProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinatesProvider *self = (t_FieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPVCoordinatesProvider), &PY_TYPE_DEF(FieldPVCoordinatesProvider), module, "FieldPVCoordinatesProvider", 0);
      }

      void t_FieldPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinatesProvider), "class_", make_descriptor(FieldPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinatesProvider), "wrapfn_", make_descriptor(t_FieldPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_FieldPVCoordinatesProvider::wrap_Object(FieldPVCoordinatesProvider(((t_FieldPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_FieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPVCoordinatesProvider_of_(t_FieldPVCoordinatesProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldPVCoordinatesProvider_getPVCoordinates(t_FieldPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinatesProvider_getPosition(t_FieldPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }
      static PyObject *t_FieldPVCoordinatesProvider_get__parameters_(t_FieldPVCoordinatesProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeStamped::class$ = NULL;
      jmethodID *PythonTimeStamped::mids$ = NULL;
      bool PythonTimeStamped::live$ = false;

      jclass PythonTimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeStamped::PythonTimeStamped() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonTimeStamped::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonTimeStamped::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonTimeStamped::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_PythonTimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeStamped_init_(t_PythonTimeStamped *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeStamped_finalize(t_PythonTimeStamped *self);
      static PyObject *t_PythonTimeStamped_pythonExtension(t_PythonTimeStamped *self, PyObject *args);
      static jobject JNICALL t_PythonTimeStamped_getDate0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeStamped_get__self(t_PythonTimeStamped *self, void *data);
      static PyGetSetDef t_PythonTimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeStamped, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeStamped__methods_[] = {
        DECLARE_METHOD(t_PythonTimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStamped, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeStamped, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeStamped)[] = {
        { Py_tp_methods, t_PythonTimeStamped__methods_ },
        { Py_tp_init, (void *) t_PythonTimeStamped_init_ },
        { Py_tp_getset, t_PythonTimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeStamped, t_PythonTimeStamped, PythonTimeStamped);

      void t_PythonTimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeStamped), &PY_TYPE_DEF(PythonTimeStamped), module, "PythonTimeStamped", 1);
      }

      void t_PythonTimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStamped), "class_", make_descriptor(PythonTimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStamped), "wrapfn_", make_descriptor(t_PythonTimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStamped), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeStamped::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeStamped_getDate0 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeStamped_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonTimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeStamped::initializeClass, 1)))
          return NULL;
        return t_PythonTimeStamped::wrap_Object(PythonTimeStamped(((t_PythonTimeStamped *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeStamped_init_(t_PythonTimeStamped *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeStamped object((jobject) NULL);

        INT_CALL(object = PythonTimeStamped());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeStamped_finalize(t_PythonTimeStamped *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeStamped_pythonExtension(t_PythonTimeStamped *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeStamped_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStamped::mids$[PythonTimeStamped::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getDate", result);
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

      static void JNICALL t_PythonTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStamped::mids$[PythonTimeStamped::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeStamped::mids$[PythonTimeStamped::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeStamped_get__self(t_PythonTimeStamped *self, void *data)
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
            mids$[mid_valueOf_568f78fa7a294eb3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/sampling/StepNormalizerMode;");
            mids$[mid_values_49ed94367b46bd6a] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/sampling/StepNormalizerMode;");

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
          return StepNormalizerMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_568f78fa7a294eb3], a0.this$));
        }

        JArray< StepNormalizerMode > StepNormalizerMode::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< StepNormalizerMode >(env->callStaticObjectMethod(cls, mids$[mid_values_49ed94367b46bd6a]));
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
#include "org/orekit/rugged/adjustment/LeastSquareAdjuster.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *LeastSquareAdjuster::class$ = NULL;
        jmethodID *LeastSquareAdjuster::mids$ = NULL;
        bool LeastSquareAdjuster::live$ = false;

        jclass LeastSquareAdjuster::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/LeastSquareAdjuster");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_6e8d52daed67f697] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/adjustment/OptimizerId;)V");
            mids$[mid_optimize_07184cacaaa6a451] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LeastSquareAdjuster::LeastSquareAdjuster() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        LeastSquareAdjuster::LeastSquareAdjuster(const ::org::orekit::rugged::adjustment::OptimizerId & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6e8d52daed67f697, a0.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum LeastSquareAdjuster::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_07184cacaaa6a451], a0.this$));
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
    namespace rugged {
      namespace adjustment {
        static PyObject *t_LeastSquareAdjuster_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LeastSquareAdjuster_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LeastSquareAdjuster_init_(t_LeastSquareAdjuster *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LeastSquareAdjuster_optimize(t_LeastSquareAdjuster *self, PyObject *arg);

        static PyMethodDef t_LeastSquareAdjuster__methods_[] = {
          DECLARE_METHOD(t_LeastSquareAdjuster, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LeastSquareAdjuster, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LeastSquareAdjuster, optimize, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LeastSquareAdjuster)[] = {
          { Py_tp_methods, t_LeastSquareAdjuster__methods_ },
          { Py_tp_init, (void *) t_LeastSquareAdjuster_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LeastSquareAdjuster)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LeastSquareAdjuster, t_LeastSquareAdjuster, LeastSquareAdjuster);

        void t_LeastSquareAdjuster::install(PyObject *module)
        {
          installType(&PY_TYPE(LeastSquareAdjuster), &PY_TYPE_DEF(LeastSquareAdjuster), module, "LeastSquareAdjuster", 0);
        }

        void t_LeastSquareAdjuster::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquareAdjuster), "class_", make_descriptor(LeastSquareAdjuster::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquareAdjuster), "wrapfn_", make_descriptor(t_LeastSquareAdjuster::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquareAdjuster), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LeastSquareAdjuster_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LeastSquareAdjuster::initializeClass, 1)))
            return NULL;
          return t_LeastSquareAdjuster::wrap_Object(LeastSquareAdjuster(((t_LeastSquareAdjuster *) arg)->object.this$));
        }
        static PyObject *t_LeastSquareAdjuster_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LeastSquareAdjuster::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LeastSquareAdjuster_init_(t_LeastSquareAdjuster *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LeastSquareAdjuster object((jobject) NULL);

              INT_CALL(object = LeastSquareAdjuster());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::orekit::rugged::adjustment::OptimizerId a0((jobject) NULL);
              PyTypeObject **p0;
              LeastSquareAdjuster object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::rugged::adjustment::OptimizerId::initializeClass, &a0, &p0, ::org::orekit::rugged::adjustment::t_OptimizerId::parameters_))
              {
                INT_CALL(object = LeastSquareAdjuster(a0));
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

        static PyObject *t_LeastSquareAdjuster_optimize(t_LeastSquareAdjuster *self, PyObject *arg)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "optimize", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonFrames.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/Predefined.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonFrames::class$ = NULL;
      jmethodID *PythonFrames::mids$ = NULL;
      bool PythonFrames::live$ = false;

      jclass PythonFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_buildUncachedITRF_d001272d652a2315] = env->getMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getCIRF_af417399ee2f3e0d] = env->getMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_e96d0d85e78fc6bd] = env->getMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEOPHistory_9cf4a1ec2e53bbd3] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEcliptic_bb61238dc14574bc] = env->getMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_9103848bb456e582] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getGCRF_6c9bc0a928c56d4e] = env->getMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_a06a41ba6e4eb36a] = env->getMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_af417399ee2f3e0d] = env->getMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_6c9bc0a928c56d4e] = env->getMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_af417399ee2f3e0d] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_e7702de838b8de68] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_af417399ee2f3e0d] = env->getMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_57509cacf2364dd9] = env->getMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_a06a41ba6e4eb36a] = env->getMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getPZ9011_af417399ee2f3e0d] = env->getMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_e96d0d85e78fc6bd] = env->getMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_57509cacf2364dd9] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_af417399ee2f3e0d] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_a06a41ba6e4eb36a] = env->getMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_af417399ee2f3e0d] = env->getMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_e96d0d85e78fc6bd] = env->getMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFrames::PythonFrames() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonFrames::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonFrames::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonFrames::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonFrames_init_(t_PythonFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFrames_finalize(t_PythonFrames *self);
      static PyObject *t_PythonFrames_pythonExtension(t_PythonFrames *self, PyObject *args);
      static jobject JNICALL t_PythonFrames_buildUncachedITRF0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getCIRF1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getEME20002(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFrames_getEOPHistory3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getEcliptic4(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getFrame5(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getGCRF6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFrames_getGTOD7(JNIEnv *jenv, jobject jobj, jboolean a0);
      static jobject JNICALL t_PythonFrames_getGTOD8(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getICRF9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFrames_getITRF10(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getITRF11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
      static jobject JNICALL t_PythonFrames_getITRFEquinox12(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getMOD13(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getMOD14(JNIEnv *jenv, jobject jobj, jboolean a0);
      static jobject JNICALL t_PythonFrames_getPZ901115(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getTEME16(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFrames_getTIRF17(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getTIRF18(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getTOD19(JNIEnv *jenv, jobject jobj, jboolean a0);
      static jobject JNICALL t_PythonFrames_getTOD20(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getVeis195021(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFrames_pythonDecRef22(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFrames_get__self(t_PythonFrames *self, void *data);
      static PyGetSetDef t_PythonFrames__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFrames, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFrames__methods_[] = {
        DECLARE_METHOD(t_PythonFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFrames, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFrames, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFrames)[] = {
        { Py_tp_methods, t_PythonFrames__methods_ },
        { Py_tp_init, (void *) t_PythonFrames_init_ },
        { Py_tp_getset, t_PythonFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFrames)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFrames, t_PythonFrames, PythonFrames);

      void t_PythonFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFrames), &PY_TYPE_DEF(PythonFrames), module, "PythonFrames", 1);
      }

      void t_PythonFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFrames), "class_", make_descriptor(PythonFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFrames), "wrapfn_", make_descriptor(t_PythonFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFrames), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFrames::initializeClass);
        JNINativeMethod methods[] = {
          { "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_buildUncachedITRF0 },
          { "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getCIRF1 },
          { "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getEME20002 },
          { "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;", (void *) t_PythonFrames_getEOPHistory3 },
          { "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_getEcliptic4 },
          { "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_getFrame5 },
          { "getGCRF", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_getGCRF6 },
          { "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getGTOD7 },
          { "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getGTOD8 },
          { "getICRF", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_getICRF9 },
          { "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getITRF10 },
          { "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;", (void *) t_PythonFrames_getITRF11 },
          { "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getITRFEquinox12 },
          { "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getMOD13 },
          { "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getMOD14 },
          { "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getPZ901115 },
          { "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTEME16 },
          { "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTIRF17 },
          { "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTIRF18 },
          { "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTOD19 },
          { "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTOD20 },
          { "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getVeis195021 },
          { "pythonDecRef", "()V", (void *) t_PythonFrames_pythonDecRef22 },
        };
        env->registerNatives(cls, methods, 23);
      }

      static PyObject *t_PythonFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFrames::initializeClass, 1)))
          return NULL;
        return t_PythonFrames::wrap_Object(PythonFrames(((t_PythonFrames *) arg)->object.this$));
      }
      static PyObject *t_PythonFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonFrames_init_(t_PythonFrames *self, PyObject *args, PyObject *kwds)
      {
        PythonFrames object((jobject) NULL);

        INT_CALL(object = PythonFrames());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFrames_finalize(t_PythonFrames *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFrames_pythonExtension(t_PythonFrames *self, PyObject *args)
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

      static jobject JNICALL t_PythonFrames_buildUncachedITRF0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_UT1Scale::wrap_Object(::org::orekit::time::UT1Scale(a0));
        PyObject *result = PyObject_CallMethod(obj, "buildUncachedITRF", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("buildUncachedITRF", result);
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

      static jobject JNICALL t_PythonFrames_getCIRF1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getCIRF", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getCIRF", result);
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

      static jobject JNICALL t_PythonFrames_getEME20002(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEME2000", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getEME2000", result);
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

      static jobject JNICALL t_PythonFrames_getEOPHistory3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getEOPHistory", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEOPHistory", result);
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

      static jobject JNICALL t_PythonFrames_getEcliptic4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *result = PyObject_CallMethod(obj, "getEcliptic", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getEcliptic", result);
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

      static jobject JNICALL t_PythonFrames_getFrame5(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_Predefined::wrap_Object(::org::orekit::frames::Predefined(a0));
        PyObject *result = PyObject_CallMethod(obj, "getFrame", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getFrame", result);
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

      static jobject JNICALL t_PythonFrames_getGCRF6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGCRF", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getGCRF", result);
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

      static jobject JNICALL t_PythonFrames_getGTOD7(JNIEnv *jenv, jobject jobj, jboolean a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = (a0 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getGTOD", "O", o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getGTOD", result);
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

      static jobject JNICALL t_PythonFrames_getGTOD8(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getGTOD", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getGTOD", result);
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

      static jobject JNICALL t_PythonFrames_getICRF9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getICRF", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getICRF", result);
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

      static jobject JNICALL t_PythonFrames_getITRF10(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getITRF", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getITRF", result);
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

      static jobject JNICALL t_PythonFrames_getITRF11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::VersionedITRF value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_ITRFVersion::wrap_Object(::org::orekit::frames::ITRFVersion(a0));
        PyObject *o1 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a1));
        PyObject *o2 = (a2 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getITRF", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::VersionedITRF::initializeClass, &value))
        {
          throwTypeError("getITRF", result);
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

      static jobject JNICALL t_PythonFrames_getITRFEquinox12(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getITRFEquinox", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getITRFEquinox", result);
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

      static jobject JNICALL t_PythonFrames_getMOD13(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *result = PyObject_CallMethod(obj, "getMOD", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getMOD", result);
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

      static jobject JNICALL t_PythonFrames_getMOD14(JNIEnv *jenv, jobject jobj, jboolean a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = (a0 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getMOD", "O", o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getMOD", result);
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

      static jobject JNICALL t_PythonFrames_getPZ901115(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getPZ9011", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getPZ9011", result);
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

      static jobject JNICALL t_PythonFrames_getTEME16(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTEME", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTEME", result);
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

      static jobject JNICALL t_PythonFrames_getTIRF17(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTIRF", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTIRF", result);
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

      static jobject JNICALL t_PythonFrames_getTIRF18(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getTIRF", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTIRF", result);
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

      static jobject JNICALL t_PythonFrames_getTOD19(JNIEnv *jenv, jobject jobj, jboolean a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = (a0 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getTOD", "O", o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTOD", result);
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

      static jobject JNICALL t_PythonFrames_getTOD20(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getTOD", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTOD", result);
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

      static jobject JNICALL t_PythonFrames_getVeis195021(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getVeis1950", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getVeis1950", result);
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

      static void JNICALL t_PythonFrames_pythonDecRef22(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFrames_get__self(t_PythonFrames *self, void *data)
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
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *NormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *NormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool NormalizedSphericalHarmonicsProvider::live$ = false;

          jclass NormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_onDate_efafd161e8b9f542] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics NormalizedSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_efafd161e8b9f542], a0.this$));
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
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_NormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider_onDate(t_NormalizedSphericalHarmonicsProvider *self, PyObject *arg);

          static PyMethodDef t_NormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_NormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider),
            NULL
          };

          DEFINE_TYPE(NormalizedSphericalHarmonicsProvider, t_NormalizedSphericalHarmonicsProvider, NormalizedSphericalHarmonicsProvider);

          void t_NormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(NormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider), module, "NormalizedSphericalHarmonicsProvider", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "NormalizedSphericalHarmonics", make_descriptor(&PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics)));
          }

          void t_NormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "class_", make_descriptor(NormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_NormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_NormalizedSphericalHarmonicsProvider::wrap_Object(NormalizedSphericalHarmonicsProvider(((t_NormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_NormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider_onDate(t_NormalizedSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "onDate", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeProvider::class$ = NULL;
      jmethodID *AttitudeProvider::mids$ = NULL;
      bool AttitudeProvider::live$ = false;

      jclass AttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_5c74bfcf2d42825a] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getAttitudeRotation_85bb0a19efdadc1d] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldAttitude AttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_5c74bfcf2d42825a], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_85bb0a19efdadc1d], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_AttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProvider_getAttitude(t_AttitudeProvider *self, PyObject *args);
      static PyObject *t_AttitudeProvider_getAttitudeRotation(t_AttitudeProvider *self, PyObject *args);

      static PyMethodDef t_AttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_AttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_AttitudeProvider, getAttitudeRotation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeProvider)[] = {
        { Py_tp_methods, t_AttitudeProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudeProvider, t_AttitudeProvider, AttitudeProvider);

      void t_AttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeProvider), &PY_TYPE_DEF(AttitudeProvider), module, "AttitudeProvider", 0);
      }

      void t_AttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProvider), "class_", make_descriptor(AttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProvider), "wrapfn_", make_descriptor(t_AttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_AttitudeProvider::wrap_Object(AttitudeProvider(((t_AttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_AttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeProvider_getAttitude(t_AttitudeProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_AttitudeProvider_getAttitudeRotation(t_AttitudeProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }
    }
  }
}
