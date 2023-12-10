#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/MedianDate.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *MedianDate::class$ = NULL;
          jmethodID *MedianDate::mids$ = NULL;
          bool MedianDate::live$ = false;

          jclass MedianDate::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/MedianDate");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_de8316969b81209c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_getAdditionalState_137d7db4f3f987f7] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_yields_97634138963fb58a] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MedianDate::MedianDate(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de8316969b81209c, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > MedianDate::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_137d7db4f3f987f7], a0.this$));
          }

          ::java::lang::String MedianDate::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }

          jboolean MedianDate::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_yields_97634138963fb58a], a0.this$);
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
      namespace maneuvers {
        namespace jacobians {
          static PyObject *t_MedianDate_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MedianDate_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MedianDate_init_(t_MedianDate *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MedianDate_getAdditionalState(t_MedianDate *self, PyObject *arg);
          static PyObject *t_MedianDate_getName(t_MedianDate *self);
          static PyObject *t_MedianDate_yields(t_MedianDate *self, PyObject *arg);
          static PyObject *t_MedianDate_get__name(t_MedianDate *self, void *data);
          static PyGetSetDef t_MedianDate__fields_[] = {
            DECLARE_GET_FIELD(t_MedianDate, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MedianDate__methods_[] = {
            DECLARE_METHOD(t_MedianDate, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MedianDate, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MedianDate, getAdditionalState, METH_O),
            DECLARE_METHOD(t_MedianDate, getName, METH_NOARGS),
            DECLARE_METHOD(t_MedianDate, yields, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MedianDate)[] = {
            { Py_tp_methods, t_MedianDate__methods_ },
            { Py_tp_init, (void *) t_MedianDate_init_ },
            { Py_tp_getset, t_MedianDate__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MedianDate)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MedianDate, t_MedianDate, MedianDate);

          void t_MedianDate::install(PyObject *module)
          {
            installType(&PY_TYPE(MedianDate), &PY_TYPE_DEF(MedianDate), module, "MedianDate", 0);
          }

          void t_MedianDate::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MedianDate), "class_", make_descriptor(MedianDate::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MedianDate), "wrapfn_", make_descriptor(t_MedianDate::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MedianDate), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MedianDate_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MedianDate::initializeClass, 1)))
              return NULL;
            return t_MedianDate::wrap_Object(MedianDate(((t_MedianDate *) arg)->object.this$));
          }
          static PyObject *t_MedianDate_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MedianDate::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MedianDate_init_(t_MedianDate *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            MedianDate object((jobject) NULL);

            if (!parseArgs(args, "sss", &a0, &a1, &a2))
            {
              INT_CALL(object = MedianDate(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MedianDate_getAdditionalState(t_MedianDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAdditionalState(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
            return NULL;
          }

          static PyObject *t_MedianDate_getName(t_MedianDate *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MedianDate_yields(t_MedianDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.yields(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "yields", arg);
            return NULL;
          }

          static PyObject *t_MedianDate_get__name(t_MedianDate *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1044::class$ = NULL;
              jmethodID *Rtcm1044::mids$ = NULL;
              bool Rtcm1044::live$ = false;

              jclass Rtcm1044::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_38ffa3d5abd61792] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1044::Rtcm1044(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1044Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_38ffa3d5abd61792, a0, a1.this$)) {}
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
            namespace ephemeris {
              static PyObject *t_Rtcm1044_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1044_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1044_of_(t_Rtcm1044 *self, PyObject *args);
              static int t_Rtcm1044_init_(t_Rtcm1044 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1044_get__parameters_(t_Rtcm1044 *self, void *data);
              static PyGetSetDef t_Rtcm1044__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1044, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1044__methods_[] = {
                DECLARE_METHOD(t_Rtcm1044, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1044)[] = {
                { Py_tp_methods, t_Rtcm1044__methods_ },
                { Py_tp_init, (void *) t_Rtcm1044_init_ },
                { Py_tp_getset, t_Rtcm1044__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1044)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1044, t_Rtcm1044, Rtcm1044);
              PyObject *t_Rtcm1044::wrap_Object(const Rtcm1044& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1044::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1044 *self = (t_Rtcm1044 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1044::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1044::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1044 *self = (t_Rtcm1044 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1044::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1044), &PY_TYPE_DEF(Rtcm1044), module, "Rtcm1044", 0);
              }

              void t_Rtcm1044::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044), "class_", make_descriptor(Rtcm1044::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044), "wrapfn_", make_descriptor(t_Rtcm1044::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1044_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1044::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1044::wrap_Object(Rtcm1044(((t_Rtcm1044 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1044_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1044::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1044_of_(t_Rtcm1044 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1044_init_(t_Rtcm1044 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1044Data a1((jobject) NULL);
                Rtcm1044 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1044Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1044(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1044Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1044_get__parameters_(t_Rtcm1044 *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula.h"
#include "java/lang/String.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *NonLinearConjugateGradientOptimizer$Formula::class$ = NULL;
            jmethodID *NonLinearConjugateGradientOptimizer$Formula::mids$ = NULL;
            bool NonLinearConjugateGradientOptimizer$Formula::live$ = false;
            NonLinearConjugateGradientOptimizer$Formula *NonLinearConjugateGradientOptimizer$Formula::FLETCHER_REEVES = NULL;
            NonLinearConjugateGradientOptimizer$Formula *NonLinearConjugateGradientOptimizer$Formula::POLAK_RIBIERE = NULL;

            jclass NonLinearConjugateGradientOptimizer$Formula::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_d9a48b717c65a27d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;");
                mids$[mid_values_74f2a7feca07041f] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                FLETCHER_REEVES = new NonLinearConjugateGradientOptimizer$Formula(env->getStaticObjectField(cls, "FLETCHER_REEVES", "Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;"));
                POLAK_RIBIERE = new NonLinearConjugateGradientOptimizer$Formula(env->getStaticObjectField(cls, "POLAK_RIBIERE", "Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NonLinearConjugateGradientOptimizer$Formula NonLinearConjugateGradientOptimizer$Formula::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return NonLinearConjugateGradientOptimizer$Formula(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d9a48b717c65a27d], a0.this$));
            }

            JArray< NonLinearConjugateGradientOptimizer$Formula > NonLinearConjugateGradientOptimizer$Formula::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< NonLinearConjugateGradientOptimizer$Formula >(env->callStaticObjectMethod(cls, mids$[mid_values_74f2a7feca07041f]));
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
        namespace scalar {
          namespace gradient {
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_of_(t_NonLinearConjugateGradientOptimizer$Formula *self, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_values(PyTypeObject *type);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_get__parameters_(t_NonLinearConjugateGradientOptimizer$Formula *self, void *data);
            static PyGetSetDef t_NonLinearConjugateGradientOptimizer$Formula__fields_[] = {
              DECLARE_GET_FIELD(t_NonLinearConjugateGradientOptimizer$Formula, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_NonLinearConjugateGradientOptimizer$Formula__methods_[] = {
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, of_, METH_VARARGS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NonLinearConjugateGradientOptimizer$Formula)[] = {
              { Py_tp_methods, t_NonLinearConjugateGradientOptimizer$Formula__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_NonLinearConjugateGradientOptimizer$Formula__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NonLinearConjugateGradientOptimizer$Formula)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(NonLinearConjugateGradientOptimizer$Formula, t_NonLinearConjugateGradientOptimizer$Formula, NonLinearConjugateGradientOptimizer$Formula);
            PyObject *t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(const NonLinearConjugateGradientOptimizer$Formula& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$Formula *self = (t_NonLinearConjugateGradientOptimizer$Formula *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$Formula *self = (t_NonLinearConjugateGradientOptimizer$Formula *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_NonLinearConjugateGradientOptimizer$Formula::install(PyObject *module)
            {
              installType(&PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), &PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$Formula), module, "NonLinearConjugateGradientOptimizer$Formula", 0);
            }

            void t_NonLinearConjugateGradientOptimizer$Formula::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "class_", make_descriptor(NonLinearConjugateGradientOptimizer$Formula::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "wrapfn_", make_descriptor(t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "boxfn_", make_descriptor(boxObject));
              env->getClass(NonLinearConjugateGradientOptimizer$Formula::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "FLETCHER_REEVES", make_descriptor(t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(*NonLinearConjugateGradientOptimizer$Formula::FLETCHER_REEVES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "POLAK_RIBIERE", make_descriptor(t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(*NonLinearConjugateGradientOptimizer$Formula::POLAK_RIBIERE)));
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NonLinearConjugateGradientOptimizer$Formula::initializeClass, 1)))
                return NULL;
              return t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(NonLinearConjugateGradientOptimizer$Formula(((t_NonLinearConjugateGradientOptimizer$Formula *) arg)->object.this$));
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NonLinearConjugateGradientOptimizer$Formula::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_of_(t_NonLinearConjugateGradientOptimizer$Formula *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              NonLinearConjugateGradientOptimizer$Formula result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::valueOf(a0));
                return t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_values(PyTypeObject *type)
            {
              JArray< NonLinearConjugateGradientOptimizer$Formula > result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::values());
              return JArray<jobject>(result.this$).wrap(t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject);
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_get__parameters_(t_NonLinearConjugateGradientOptimizer$Formula *self, void *data)
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
#include "org/orekit/propagation/conversion/DormandPrince853FieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DormandPrince853FieldIntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince853FieldIntegratorBuilder::mids$ = NULL;
        bool DormandPrince853FieldIntegratorBuilder::live$ = false;

        jclass DormandPrince853FieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince853FieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_79616f78bb6df44f] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853FieldIntegratorBuilder::DormandPrince853FieldIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator DormandPrince853FieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_79616f78bb6df44f], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_of_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args);
        static int t_DormandPrince853FieldIntegratorBuilder_init_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_buildIntegrator(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_get__parameters_(t_DormandPrince853FieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_DormandPrince853FieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince853FieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853FieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince853FieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853FieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_DormandPrince853FieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853FieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(DormandPrince853FieldIntegratorBuilder, t_DormandPrince853FieldIntegratorBuilder, DormandPrince853FieldIntegratorBuilder);
        PyObject *t_DormandPrince853FieldIntegratorBuilder::wrap_Object(const DormandPrince853FieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegratorBuilder *self = (t_DormandPrince853FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DormandPrince853FieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegratorBuilder *self = (t_DormandPrince853FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DormandPrince853FieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853FieldIntegratorBuilder), &PY_TYPE_DEF(DormandPrince853FieldIntegratorBuilder), module, "DormandPrince853FieldIntegratorBuilder", 0);
        }

        void t_DormandPrince853FieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegratorBuilder), "class_", make_descriptor(DormandPrince853FieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince853FieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853FieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853FieldIntegratorBuilder::wrap_Object(DormandPrince853FieldIntegratorBuilder(((t_DormandPrince853FieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853FieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DormandPrince853FieldIntegratorBuilder_of_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DormandPrince853FieldIntegratorBuilder_init_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince853FieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince853FieldIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince853FieldIntegratorBuilder_buildIntegrator(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_get__parameters_(t_DormandPrince853FieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/RootsOfUnity.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *RootsOfUnity::class$ = NULL;
      jmethodID *RootsOfUnity::mids$ = NULL;
      bool RootsOfUnity::live$ = false;

      jclass RootsOfUnity::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/RootsOfUnity");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_computeRoots_0a2a1ac2721c0336] = env->getMethodID(cls, "computeRoots", "(I)V");
          mids$[mid_getImaginary_b772323fc98b7293] = env->getMethodID(cls, "getImaginary", "(I)D");
          mids$[mid_getNumberOfRoots_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfRoots", "()I");
          mids$[mid_getReal_b772323fc98b7293] = env->getMethodID(cls, "getReal", "(I)D");
          mids$[mid_isCounterClockWise_e470b6d9e0d979db] = env->getMethodID(cls, "isCounterClockWise", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RootsOfUnity::RootsOfUnity() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void RootsOfUnity::computeRoots(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_computeRoots_0a2a1ac2721c0336], a0);
      }

      jdouble RootsOfUnity::getImaginary(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginary_b772323fc98b7293], a0);
      }

      jint RootsOfUnity::getNumberOfRoots() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfRoots_f2f64475e4580546]);
      }

      jdouble RootsOfUnity::getReal(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_b772323fc98b7293], a0);
      }

      jboolean RootsOfUnity::isCounterClockWise() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isCounterClockWise_e470b6d9e0d979db]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_RootsOfUnity_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RootsOfUnity_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RootsOfUnity_init_(t_RootsOfUnity *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RootsOfUnity_computeRoots(t_RootsOfUnity *self, PyObject *arg);
      static PyObject *t_RootsOfUnity_getImaginary(t_RootsOfUnity *self, PyObject *arg);
      static PyObject *t_RootsOfUnity_getNumberOfRoots(t_RootsOfUnity *self);
      static PyObject *t_RootsOfUnity_getReal(t_RootsOfUnity *self, PyObject *arg);
      static PyObject *t_RootsOfUnity_isCounterClockWise(t_RootsOfUnity *self);
      static PyObject *t_RootsOfUnity_get__counterClockWise(t_RootsOfUnity *self, void *data);
      static PyObject *t_RootsOfUnity_get__numberOfRoots(t_RootsOfUnity *self, void *data);
      static PyGetSetDef t_RootsOfUnity__fields_[] = {
        DECLARE_GET_FIELD(t_RootsOfUnity, counterClockWise),
        DECLARE_GET_FIELD(t_RootsOfUnity, numberOfRoots),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RootsOfUnity__methods_[] = {
        DECLARE_METHOD(t_RootsOfUnity, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RootsOfUnity, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RootsOfUnity, computeRoots, METH_O),
        DECLARE_METHOD(t_RootsOfUnity, getImaginary, METH_O),
        DECLARE_METHOD(t_RootsOfUnity, getNumberOfRoots, METH_NOARGS),
        DECLARE_METHOD(t_RootsOfUnity, getReal, METH_O),
        DECLARE_METHOD(t_RootsOfUnity, isCounterClockWise, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RootsOfUnity)[] = {
        { Py_tp_methods, t_RootsOfUnity__methods_ },
        { Py_tp_init, (void *) t_RootsOfUnity_init_ },
        { Py_tp_getset, t_RootsOfUnity__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RootsOfUnity)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RootsOfUnity, t_RootsOfUnity, RootsOfUnity);

      void t_RootsOfUnity::install(PyObject *module)
      {
        installType(&PY_TYPE(RootsOfUnity), &PY_TYPE_DEF(RootsOfUnity), module, "RootsOfUnity", 0);
      }

      void t_RootsOfUnity::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RootsOfUnity), "class_", make_descriptor(RootsOfUnity::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RootsOfUnity), "wrapfn_", make_descriptor(t_RootsOfUnity::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RootsOfUnity), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RootsOfUnity_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RootsOfUnity::initializeClass, 1)))
          return NULL;
        return t_RootsOfUnity::wrap_Object(RootsOfUnity(((t_RootsOfUnity *) arg)->object.this$));
      }
      static PyObject *t_RootsOfUnity_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RootsOfUnity::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RootsOfUnity_init_(t_RootsOfUnity *self, PyObject *args, PyObject *kwds)
      {
        RootsOfUnity object((jobject) NULL);

        INT_CALL(object = RootsOfUnity());
        self->object = object;

        return 0;
      }

      static PyObject *t_RootsOfUnity_computeRoots(t_RootsOfUnity *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.computeRoots(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "computeRoots", arg);
        return NULL;
      }

      static PyObject *t_RootsOfUnity_getImaginary(t_RootsOfUnity *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getImaginary(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getImaginary", arg);
        return NULL;
      }

      static PyObject *t_RootsOfUnity_getNumberOfRoots(t_RootsOfUnity *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfRoots());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RootsOfUnity_getReal(t_RootsOfUnity *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getReal(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getReal", arg);
        return NULL;
      }

      static PyObject *t_RootsOfUnity_isCounterClockWise(t_RootsOfUnity *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isCounterClockWise());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RootsOfUnity_get__counterClockWise(t_RootsOfUnity *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isCounterClockWise());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RootsOfUnity_get__numberOfRoots(t_RootsOfUnity *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfRoots());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHullGenerator2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *ConvexHullGenerator2D::class$ = NULL;
            jmethodID *ConvexHullGenerator2D::mids$ = NULL;
            bool ConvexHullGenerator2D::live$ = false;

            jclass ConvexHullGenerator2D::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/ConvexHullGenerator2D");

                mids$ = new jmethodID[max_mid];
                mids$[mid_generate_94066d174e88779f] = env->getMethodID(cls, "generate", "(Ljava/util/Collection;)Lorg/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D ConvexHullGenerator2D::generate(const ::java::util::Collection & a0) const
            {
              return ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D(env->callObjectMethod(this$, mids$[mid_generate_94066d174e88779f], a0.this$));
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_ConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ConvexHullGenerator2D_generate(t_ConvexHullGenerator2D *self, PyObject *args);

            static PyMethodDef t_ConvexHullGenerator2D__methods_[] = {
              DECLARE_METHOD(t_ConvexHullGenerator2D, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHullGenerator2D, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHullGenerator2D, generate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ConvexHullGenerator2D)[] = {
              { Py_tp_methods, t_ConvexHullGenerator2D__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ConvexHullGenerator2D)[] = {
              &PY_TYPE_DEF(::org::hipparchus::geometry::hull::ConvexHullGenerator),
              NULL
            };

            DEFINE_TYPE(ConvexHullGenerator2D, t_ConvexHullGenerator2D, ConvexHullGenerator2D);

            void t_ConvexHullGenerator2D::install(PyObject *module)
            {
              installType(&PY_TYPE(ConvexHullGenerator2D), &PY_TYPE_DEF(ConvexHullGenerator2D), module, "ConvexHullGenerator2D", 0);
            }

            void t_ConvexHullGenerator2D::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator2D), "class_", make_descriptor(ConvexHullGenerator2D::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator2D), "wrapfn_", make_descriptor(t_ConvexHullGenerator2D::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator2D), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ConvexHullGenerator2D::initializeClass, 1)))
                return NULL;
              return t_ConvexHullGenerator2D::wrap_Object(ConvexHullGenerator2D(((t_ConvexHullGenerator2D *) arg)->object.this$));
            }
            static PyObject *t_ConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ConvexHullGenerator2D::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ConvexHullGenerator2D_generate(t_ConvexHullGenerator2D *self, PyObject *args)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.generate(a0));
                return ::org::hipparchus::geometry::euclidean::twod::hull::t_ConvexHull2D::wrap_Object(result);
              }

              return callSuper(PY_TYPE(ConvexHullGenerator2D), (PyObject *) self, "generate", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryStateHistoryMetadataKey::class$ = NULL;
              jmethodID *TrajectoryStateHistoryMetadataKey::mids$ = NULL;
              bool TrajectoryStateHistoryMetadataKey::live$ = false;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::CENTER_NAME = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::COMMENT = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::INTERPOLATION = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::INTERPOLATION_DEGREE = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::ORB_AVERAGING = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::ORB_REVNUM = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::ORB_REVNUM_BASIS = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::PROPAGATOR = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_BASIS = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_BASIS_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_FRAME_EPOCH = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_NEXT_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_PREV_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_REF_FRAME = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_TYPE = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_UNITS = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::USEABLE_START_TIME = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::USEABLE_STOP_TIME = NULL;

              jclass TrajectoryStateHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_1a4e967fd5970cec] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;)Z");
                  mids$[mid_valueOf_7e337a3aad87db2c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;");
                  mids$[mid_values_495e76d512ec8283] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CENTER_NAME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "CENTER_NAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  COMMENT = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  INTERPOLATION = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  INTERPOLATION_DEGREE = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  ORB_AVERAGING = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "ORB_AVERAGING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  ORB_REVNUM = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "ORB_REVNUM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  ORB_REVNUM_BASIS = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "ORB_REVNUM_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  PROPAGATOR = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "PROPAGATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_BASIS = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_BASIS_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_FRAME_EPOCH = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_NEXT_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_NEXT_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_PREV_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_REF_FRAME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_TYPE = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_UNITS = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_UNITS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  USEABLE_START_TIME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "USEABLE_START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  USEABLE_STOP_TIME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "USEABLE_STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean TrajectoryStateHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_1a4e967fd5970cec], a0.this$, a1.this$, a2.this$);
              }

              TrajectoryStateHistoryMetadataKey TrajectoryStateHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return TrajectoryStateHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7e337a3aad87db2c], a0.this$));
              }

              JArray< TrajectoryStateHistoryMetadataKey > TrajectoryStateHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< TrajectoryStateHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_495e76d512ec8283]));
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
              static PyObject *t_TrajectoryStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_of_(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_process(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_get__parameters_(t_TrajectoryStateHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_TrajectoryStateHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_TrajectoryStateHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryStateHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryStateHistoryMetadataKey)[] = {
                { Py_tp_methods, t_TrajectoryStateHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_TrajectoryStateHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryStateHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(TrajectoryStateHistoryMetadataKey, t_TrajectoryStateHistoryMetadataKey, TrajectoryStateHistoryMetadataKey);
              PyObject *t_TrajectoryStateHistoryMetadataKey::wrap_Object(const TrajectoryStateHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_TrajectoryStateHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_TrajectoryStateHistoryMetadataKey *self = (t_TrajectoryStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_TrajectoryStateHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_TrajectoryStateHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_TrajectoryStateHistoryMetadataKey *self = (t_TrajectoryStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_TrajectoryStateHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryStateHistoryMetadataKey), &PY_TYPE_DEF(TrajectoryStateHistoryMetadataKey), module, "TrajectoryStateHistoryMetadataKey", 0);
              }

              void t_TrajectoryStateHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "class_", make_descriptor(TrajectoryStateHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "wrapfn_", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(TrajectoryStateHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "CENTER_NAME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::CENTER_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "COMMENT", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "INTERPOLATION", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::INTERPOLATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::INTERPOLATION_DEGREE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "ORB_AVERAGING", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::ORB_AVERAGING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "ORB_REVNUM", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::ORB_REVNUM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "ORB_REVNUM_BASIS", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::ORB_REVNUM_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "PROPAGATOR", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::PROPAGATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_BASIS", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_BASIS_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_FRAME_EPOCH", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_NEXT_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_NEXT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_PREV_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_REF_FRAME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_TYPE", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_UNITS", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_UNITS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "USEABLE_START_TIME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::USEABLE_START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "USEABLE_STOP_TIME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::USEABLE_STOP_TIME)));
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryStateHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryStateHistoryMetadataKey::wrap_Object(TrajectoryStateHistoryMetadataKey(((t_TrajectoryStateHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryStateHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_of_(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_process(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                TrajectoryStateHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadataKey::valueOf(a0));
                  return t_TrajectoryStateHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< TrajectoryStateHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_TrajectoryStateHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_TrajectoryStateHistoryMetadataKey_get__parameters_(t_TrajectoryStateHistoryMetadataKey *self, void *data)
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
#include "org/hipparchus/fraction/FractionField.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/fraction/FractionField.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *FractionField::class$ = NULL;
      jmethodID *FractionField::mids$ = NULL;
      bool FractionField::live$ = false;

      jclass FractionField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/FractionField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_b8cb7e3975ac8fd2] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/fraction/FractionField;");
          mids$[mid_getOne_7847eacc50504e7f] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_getRuntimeClass_8f66acc08d2a174c] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_7847eacc50504e7f] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean FractionField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      FractionField FractionField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return FractionField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_b8cb7e3975ac8fd2]));
      }

      ::org::hipparchus::fraction::Fraction FractionField::getOne() const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getOne_7847eacc50504e7f]));
      }

      ::java::lang::Class FractionField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_8f66acc08d2a174c]));
      }

      ::org::hipparchus::fraction::Fraction FractionField::getZero() const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getZero_7847eacc50504e7f]));
      }

      jint FractionField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_FractionField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionField_equals(t_FractionField *self, PyObject *args);
      static PyObject *t_FractionField_getInstance(PyTypeObject *type);
      static PyObject *t_FractionField_getOne(t_FractionField *self);
      static PyObject *t_FractionField_getRuntimeClass(t_FractionField *self);
      static PyObject *t_FractionField_getZero(t_FractionField *self);
      static PyObject *t_FractionField_hashCode(t_FractionField *self, PyObject *args);
      static PyObject *t_FractionField_get__instance(t_FractionField *self, void *data);
      static PyObject *t_FractionField_get__one(t_FractionField *self, void *data);
      static PyObject *t_FractionField_get__runtimeClass(t_FractionField *self, void *data);
      static PyObject *t_FractionField_get__zero(t_FractionField *self, void *data);
      static PyGetSetDef t_FractionField__fields_[] = {
        DECLARE_GET_FIELD(t_FractionField, instance),
        DECLARE_GET_FIELD(t_FractionField, one),
        DECLARE_GET_FIELD(t_FractionField, runtimeClass),
        DECLARE_GET_FIELD(t_FractionField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FractionField__methods_[] = {
        DECLARE_METHOD(t_FractionField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionField, equals, METH_VARARGS),
        DECLARE_METHOD(t_FractionField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_FractionField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_FractionField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_FractionField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FractionField)[] = {
        { Py_tp_methods, t_FractionField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FractionField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FractionField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FractionField, t_FractionField, FractionField);

      void t_FractionField::install(PyObject *module)
      {
        installType(&PY_TYPE(FractionField), &PY_TYPE_DEF(FractionField), module, "FractionField", 0);
      }

      void t_FractionField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionField), "class_", make_descriptor(FractionField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionField), "wrapfn_", make_descriptor(t_FractionField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FractionField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FractionField::initializeClass, 1)))
          return NULL;
        return t_FractionField::wrap_Object(FractionField(((t_FractionField *) arg)->object.this$));
      }
      static PyObject *t_FractionField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FractionField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FractionField_equals(t_FractionField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FractionField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FractionField_getInstance(PyTypeObject *type)
      {
        FractionField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fraction::FractionField::getInstance());
        return t_FractionField::wrap_Object(result);
      }

      static PyObject *t_FractionField_getOne(t_FractionField *self)
      {
        ::org::hipparchus::fraction::Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
      }

      static PyObject *t_FractionField_getRuntimeClass(t_FractionField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(Fraction));
      }

      static PyObject *t_FractionField_getZero(t_FractionField *self)
      {
        ::org::hipparchus::fraction::Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
      }

      static PyObject *t_FractionField_hashCode(t_FractionField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FractionField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FractionField_get__instance(t_FractionField *self, void *data)
      {
        FractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_FractionField::wrap_Object(value);
      }

      static PyObject *t_FractionField_get__one(t_FractionField *self, void *data)
      {
        ::org::hipparchus::fraction::Fraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
      }

      static PyObject *t_FractionField_get__runtimeClass(t_FractionField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_FractionField_get__zero(t_FractionField *self, void *data)
      {
        ::org::hipparchus::fraction::Fraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PV::class$ = NULL;
        jmethodID *PV::mids$ = NULL;
        bool PV::live$ = false;
        ::java::lang::String *PV::MEASUREMENT_TYPE = NULL;

        jclass PV::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PV");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_57a7b55ba61c653b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_84e94d7336dbd30a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_53f5d608948d31ca] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_c0f7ef6aa1a0c09a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[[D[[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_2310b55af1047bb4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getCorrelationCoefficientsMatrix_43de1192439efa92] = env->getMethodID(cls, "getCorrelationCoefficientsMatrix", "()[[D");
            mids$[mid_getCovarianceMatrix_43de1192439efa92] = env->getMethodID(cls, "getCovarianceMatrix", "()[[D");
            mids$[mid_getPosition_17a952530a808943] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getVelocity_17a952530a808943] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_57a7b55ba61c653b, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< JArray< jdouble > > & a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_84e94d7336dbd30a, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_53f5d608948d31ca, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_c0f7ef6aa1a0c09a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_2310b55af1047bb4, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        JArray< JArray< jdouble > > PV::getCorrelationCoefficientsMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCorrelationCoefficientsMatrix_43de1192439efa92]));
        }

        JArray< JArray< jdouble > > PV::getCovarianceMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_43de1192439efa92]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PV::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_17a952530a808943]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PV::getVelocity() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_17a952530a808943]));
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
        static PyObject *t_PV_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PV_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PV_of_(t_PV *self, PyObject *args);
        static int t_PV_init_(t_PV *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PV_getCorrelationCoefficientsMatrix(t_PV *self);
        static PyObject *t_PV_getCovarianceMatrix(t_PV *self);
        static PyObject *t_PV_getPosition(t_PV *self);
        static PyObject *t_PV_getVelocity(t_PV *self);
        static PyObject *t_PV_get__correlationCoefficientsMatrix(t_PV *self, void *data);
        static PyObject *t_PV_get__covarianceMatrix(t_PV *self, void *data);
        static PyObject *t_PV_get__position(t_PV *self, void *data);
        static PyObject *t_PV_get__velocity(t_PV *self, void *data);
        static PyObject *t_PV_get__parameters_(t_PV *self, void *data);
        static PyGetSetDef t_PV__fields_[] = {
          DECLARE_GET_FIELD(t_PV, correlationCoefficientsMatrix),
          DECLARE_GET_FIELD(t_PV, covarianceMatrix),
          DECLARE_GET_FIELD(t_PV, position),
          DECLARE_GET_FIELD(t_PV, velocity),
          DECLARE_GET_FIELD(t_PV, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PV__methods_[] = {
          DECLARE_METHOD(t_PV, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PV, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PV, of_, METH_VARARGS),
          DECLARE_METHOD(t_PV, getCorrelationCoefficientsMatrix, METH_NOARGS),
          DECLARE_METHOD(t_PV, getCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_PV, getPosition, METH_NOARGS),
          DECLARE_METHOD(t_PV, getVelocity, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PV)[] = {
          { Py_tp_methods, t_PV__methods_ },
          { Py_tp_init, (void *) t_PV_init_ },
          { Py_tp_getset, t_PV__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PV)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(PV, t_PV, PV);
        PyObject *t_PV::wrap_Object(const PV& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PV::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PV *self = (t_PV *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PV::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PV::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PV *self = (t_PV *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PV::install(PyObject *module)
        {
          installType(&PY_TYPE(PV), &PY_TYPE_DEF(PV), module, "PV", 0);
        }

        void t_PV::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PV), "class_", make_descriptor(PV::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PV), "wrapfn_", make_descriptor(t_PV::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PV), "boxfn_", make_descriptor(boxObject));
          env->getClass(PV::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PV), "MEASUREMENT_TYPE", make_descriptor(j2p(*PV::MEASUREMENT_TYPE)));
        }

        static PyObject *t_PV_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PV::initializeClass, 1)))
            return NULL;
          return t_PV::wrap_Object(PV(((t_PV *) arg)->object.this$));
        }
        static PyObject *t_PV_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PV::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PV_of_(t_PV *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PV_init_(t_PV *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              jdouble a4;
              ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkk[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< JArray< jdouble > > a3((jobject) NULL);
              jdouble a4;
              ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkk[[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
                break;
              }
            }
            goto err;
           case 7:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              jdouble a5;
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkk[D[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< JArray< jdouble > > a3((jobject) NULL);
              JArray< JArray< jdouble > > a4((jobject) NULL);
              jdouble a5;
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkk[[D[[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkkDDDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
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

        static PyObject *t_PV_getCorrelationCoefficientsMatrix(t_PV *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationCoefficientsMatrix());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_PV_getCovarianceMatrix(t_PV *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceMatrix());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_PV_getPosition(t_PV *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_PV_getVelocity(t_PV *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }
        static PyObject *t_PV_get__parameters_(t_PV *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_PV_get__correlationCoefficientsMatrix(t_PV *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationCoefficientsMatrix());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_PV_get__covarianceMatrix(t_PV *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_PV_get__position(t_PV *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_PV_get__velocity(t_PV *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/RiddersSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *RiddersSolver::class$ = NULL;
        jmethodID *RiddersSolver::mids$ = NULL;
        bool RiddersSolver::live$ = false;

        jclass RiddersSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/RiddersSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_456d9a2f64d6b28d] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RiddersSolver::RiddersSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        RiddersSolver::RiddersSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        RiddersSolver::RiddersSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}
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
        static PyObject *t_RiddersSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RiddersSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RiddersSolver_of_(t_RiddersSolver *self, PyObject *args);
        static int t_RiddersSolver_init_(t_RiddersSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RiddersSolver_get__parameters_(t_RiddersSolver *self, void *data);
        static PyGetSetDef t_RiddersSolver__fields_[] = {
          DECLARE_GET_FIELD(t_RiddersSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RiddersSolver__methods_[] = {
          DECLARE_METHOD(t_RiddersSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RiddersSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RiddersSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RiddersSolver)[] = {
          { Py_tp_methods, t_RiddersSolver__methods_ },
          { Py_tp_init, (void *) t_RiddersSolver_init_ },
          { Py_tp_getset, t_RiddersSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RiddersSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(RiddersSolver, t_RiddersSolver, RiddersSolver);
        PyObject *t_RiddersSolver::wrap_Object(const RiddersSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RiddersSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RiddersSolver *self = (t_RiddersSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RiddersSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RiddersSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RiddersSolver *self = (t_RiddersSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RiddersSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(RiddersSolver), &PY_TYPE_DEF(RiddersSolver), module, "RiddersSolver", 0);
        }

        void t_RiddersSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RiddersSolver), "class_", make_descriptor(RiddersSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RiddersSolver), "wrapfn_", make_descriptor(t_RiddersSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RiddersSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RiddersSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RiddersSolver::initializeClass, 1)))
            return NULL;
          return t_RiddersSolver::wrap_Object(RiddersSolver(((t_RiddersSolver *) arg)->object.this$));
        }
        static PyObject *t_RiddersSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RiddersSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RiddersSolver_of_(t_RiddersSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RiddersSolver_init_(t_RiddersSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              RiddersSolver object((jobject) NULL);

              INT_CALL(object = RiddersSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              RiddersSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = RiddersSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              RiddersSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = RiddersSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_RiddersSolver_get__parameters_(t_RiddersSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Writer.h"
#include "java/io/IOException.h"
#include "java/io/Flushable.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Appendable.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "java/io/Writer.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Writer::class$ = NULL;
    jmethodID *Writer::mids$ = NULL;
    bool Writer::live$ = false;

    jclass Writer::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Writer");

        mids$ = new jmethodID[max_mid];
        mids$[mid_append_450d34df563509c8] = env->getMethodID(cls, "append", "(C)Ljava/io/Writer;");
        mids$[mid_append_5e0975345e21e35e] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/Writer;");
        mids$[mid_append_8309bf12b15805c4] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/Writer;");
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_7ae3461a92a43152] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_nullWriter_f79c221da116968d] = env->getStaticMethodID(cls, "nullWriter", "()Ljava/io/Writer;");
        mids$[mid_write_819ed274952f967e] = env->getMethodID(cls, "write", "([C)V");
        mids$[mid_write_e939c6558ae8d313] = env->getMethodID(cls, "write", "(Ljava/lang/String;)V");
        mids$[mid_write_0a2a1ac2721c0336] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_2df38be22737223f] = env->getMethodID(cls, "write", "([CII)V");
        mids$[mid_write_10ca79ad48bfee14] = env->getMethodID(cls, "write", "(Ljava/lang/String;II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Writer Writer::append(jchar a0) const
    {
      return Writer(env->callObjectMethod(this$, mids$[mid_append_450d34df563509c8], a0));
    }

    Writer Writer::append(const ::java::lang::CharSequence & a0) const
    {
      return Writer(env->callObjectMethod(this$, mids$[mid_append_5e0975345e21e35e], a0.this$));
    }

    Writer Writer::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return Writer(env->callObjectMethod(this$, mids$[mid_append_8309bf12b15805c4], a0.this$, a1, a2));
    }

    void Writer::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    void Writer::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_7ae3461a92a43152]);
    }

    Writer Writer::nullWriter()
    {
      jclass cls = env->getClass(initializeClass);
      return Writer(env->callStaticObjectMethod(cls, mids$[mid_nullWriter_f79c221da116968d]));
    }

    void Writer::write(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_819ed274952f967e], a0.this$);
    }

    void Writer::write(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_e939c6558ae8d313], a0.this$);
    }

    void Writer::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_0a2a1ac2721c0336], a0);
    }

    void Writer::write(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_2df38be22737223f], a0.this$, a1, a2);
    }

    void Writer::write(const ::java::lang::String & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_10ca79ad48bfee14], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Writer_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Writer_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Writer_append(t_Writer *self, PyObject *args);
    static PyObject *t_Writer_close(t_Writer *self);
    static PyObject *t_Writer_flush(t_Writer *self);
    static PyObject *t_Writer_nullWriter(PyTypeObject *type);
    static PyObject *t_Writer_write(t_Writer *self, PyObject *args);

    static PyMethodDef t_Writer__methods_[] = {
      DECLARE_METHOD(t_Writer, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Writer, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Writer, append, METH_VARARGS),
      DECLARE_METHOD(t_Writer, close, METH_NOARGS),
      DECLARE_METHOD(t_Writer, flush, METH_NOARGS),
      DECLARE_METHOD(t_Writer, nullWriter, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Writer, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Writer)[] = {
      { Py_tp_methods, t_Writer__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Writer)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Writer, t_Writer, Writer);

    void t_Writer::install(PyObject *module)
    {
      installType(&PY_TYPE(Writer), &PY_TYPE_DEF(Writer), module, "Writer", 0);
    }

    void t_Writer::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Writer), "class_", make_descriptor(Writer::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Writer), "wrapfn_", make_descriptor(t_Writer::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Writer), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Writer_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Writer::initializeClass, 1)))
        return NULL;
      return t_Writer::wrap_Object(Writer(((t_Writer *) arg)->object.this$));
    }
    static PyObject *t_Writer_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Writer::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Writer_append(t_Writer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          Writer result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_Writer::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          Writer result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_Writer::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          Writer result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_Writer::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "append", args);
      return NULL;
    }

    static PyObject *t_Writer_close(t_Writer *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_Writer_flush(t_Writer *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }

    static PyObject *t_Writer_nullWriter(PyTypeObject *type)
    {
      Writer result((jobject) NULL);
      OBJ_CALL(result = ::java::io::Writer::nullWriter());
      return t_Writer::wrap_Object(result);
    }

    static PyObject *t_Writer_write(t_Writer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "write", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/IonosphereNequickGMessage.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereNequickGMessage::class$ = NULL;
          jmethodID *IonosphereNequickGMessage::mids$ = NULL;
          bool IonosphereNequickGMessage::live$ = false;
          ::org::orekit::utils::units::Unit *IonosphereNequickGMessage::SFU = NULL;
          ::org::orekit::utils::units::Unit *IonosphereNequickGMessage::SFU_PER_DEG = NULL;
          ::org::orekit::utils::units::Unit *IonosphereNequickGMessage::SFU_PER_DEG2 = NULL;

          jclass IonosphereNequickGMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereNequickGMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_70c1a5d645cab07e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getAi0_456d9a2f64d6b28d] = env->getMethodID(cls, "getAi0", "()D");
              mids$[mid_getAi1_456d9a2f64d6b28d] = env->getMethodID(cls, "getAi1", "()D");
              mids$[mid_getAi2_456d9a2f64d6b28d] = env->getMethodID(cls, "getAi2", "()D");
              mids$[mid_getFlags_f2f64475e4580546] = env->getMethodID(cls, "getFlags", "()I");
              mids$[mid_setAi0_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAi0", "(D)V");
              mids$[mid_setAi1_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAi1", "(D)V");
              mids$[mid_setAi2_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAi2", "(D)V");
              mids$[mid_setFlags_0a2a1ac2721c0336] = env->getMethodID(cls, "setFlags", "(I)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              SFU = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SFU", "Lorg/orekit/utils/units/Unit;"));
              SFU_PER_DEG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SFU_PER_DEG", "Lorg/orekit/utils/units/Unit;"));
              SFU_PER_DEG2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SFU_PER_DEG2", "Lorg/orekit/utils/units/Unit;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereNequickGMessage::IonosphereNequickGMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(env->newObject(initializeClass, &mids$, mid_init$_70c1a5d645cab07e, a0.this$, a1, a2.this$)) {}

          jdouble IonosphereNequickGMessage::getAi0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAi0_456d9a2f64d6b28d]);
          }

          jdouble IonosphereNequickGMessage::getAi1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAi1_456d9a2f64d6b28d]);
          }

          jdouble IonosphereNequickGMessage::getAi2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAi2_456d9a2f64d6b28d]);
          }

          jint IonosphereNequickGMessage::getFlags() const
          {
            return env->callIntMethod(this$, mids$[mid_getFlags_f2f64475e4580546]);
          }

          void IonosphereNequickGMessage::setAi0(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAi0_77e0f9a1f260e2e5], a0);
          }

          void IonosphereNequickGMessage::setAi1(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAi1_77e0f9a1f260e2e5], a0);
          }

          void IonosphereNequickGMessage::setAi2(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAi2_77e0f9a1f260e2e5], a0);
          }

          void IonosphereNequickGMessage::setFlags(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFlags_0a2a1ac2721c0336], a0);
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
        namespace navigation {
          static PyObject *t_IonosphereNequickGMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereNequickGMessage_init_(t_IonosphereNequickGMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereNequickGMessage_getAi0(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_getAi1(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_getAi2(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_getFlags(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_setAi0(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_setAi1(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_setAi2(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_setFlags(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_get__ai0(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__ai0(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyObject *t_IonosphereNequickGMessage_get__ai1(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__ai1(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyObject *t_IonosphereNequickGMessage_get__ai2(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__ai2(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyObject *t_IonosphereNequickGMessage_get__flags(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__flags(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_IonosphereNequickGMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, ai0),
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, ai1),
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, ai2),
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, flags),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereNequickGMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereNequickGMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getAi0, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getAi1, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getAi2, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getFlags, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setAi0, METH_O),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setAi1, METH_O),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setAi2, METH_O),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setFlags, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereNequickGMessage)[] = {
            { Py_tp_methods, t_IonosphereNequickGMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereNequickGMessage_init_ },
            { Py_tp_getset, t_IonosphereNequickGMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereNequickGMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::IonosphereBaseMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereNequickGMessage, t_IonosphereNequickGMessage, IonosphereNequickGMessage);

          void t_IonosphereNequickGMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereNequickGMessage), &PY_TYPE_DEF(IonosphereNequickGMessage), module, "IonosphereNequickGMessage", 0);
          }

          void t_IonosphereNequickGMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "class_", make_descriptor(IonosphereNequickGMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "wrapfn_", make_descriptor(t_IonosphereNequickGMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "boxfn_", make_descriptor(boxObject));
            env->getClass(IonosphereNequickGMessage::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "SFU", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*IonosphereNequickGMessage::SFU)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "SFU_PER_DEG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*IonosphereNequickGMessage::SFU_PER_DEG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "SFU_PER_DEG2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*IonosphereNequickGMessage::SFU_PER_DEG2)));
          }

          static PyObject *t_IonosphereNequickGMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereNequickGMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereNequickGMessage::wrap_Object(IonosphereNequickGMessage(((t_IonosphereNequickGMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereNequickGMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereNequickGMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereNequickGMessage_init_(t_IonosphereNequickGMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereNequickGMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereNequickGMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereNequickGMessage_getAi0(t_IonosphereNequickGMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAi0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IonosphereNequickGMessage_getAi1(t_IonosphereNequickGMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAi1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IonosphereNequickGMessage_getAi2(t_IonosphereNequickGMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAi2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IonosphereNequickGMessage_getFlags(t_IonosphereNequickGMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getFlags());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_IonosphereNequickGMessage_setAi0(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAi0(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAi0", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_setAi1(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAi1(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAi1", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_setAi2(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAi2(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAi2", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_setFlags(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setFlags(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFlags", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_get__ai0(t_IonosphereNequickGMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAi0());
            return PyFloat_FromDouble((double) value);
          }
          static int t_IonosphereNequickGMessage_set__ai0(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAi0(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ai0", arg);
            return -1;
          }

          static PyObject *t_IonosphereNequickGMessage_get__ai1(t_IonosphereNequickGMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAi1());
            return PyFloat_FromDouble((double) value);
          }
          static int t_IonosphereNequickGMessage_set__ai1(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAi1(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ai1", arg);
            return -1;
          }

          static PyObject *t_IonosphereNequickGMessage_get__ai2(t_IonosphereNequickGMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAi2());
            return PyFloat_FromDouble((double) value);
          }
          static int t_IonosphereNequickGMessage_set__ai2(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAi2(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ai2", arg);
            return -1;
          }

          static PyObject *t_IonosphereNequickGMessage_get__flags(t_IonosphereNequickGMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getFlags());
            return PyLong_FromLong((long) value);
          }
          static int t_IonosphereNequickGMessage_set__flags(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setFlags(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "flags", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/refraction/MultiLayerModel.h"
#include "org/orekit/rugged/refraction/ConstantRefractionLayer.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *MultiLayerModel::class$ = NULL;
        jmethodID *MultiLayerModel::mids$ = NULL;
        bool MultiLayerModel::live$ = false;

        jclass MultiLayerModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/MultiLayerModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_de42b33da926dabf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;)V");
            mids$[mid_init$_e169caa02a18ba2b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Ljava/util/List;)V");
            mids$[mid_applyCorrection_af1abae4bdd3a766] = env->getMethodID(cls, "applyCorrection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/orekit/rugged/intersection/IntersectionAlgorithm;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultiLayerModel::MultiLayerModel(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0) : ::org::orekit::rugged::refraction::AtmosphericRefraction(env->newObject(initializeClass, &mids$, mid_init$_de42b33da926dabf, a0.this$)) {}

        MultiLayerModel::MultiLayerModel(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::java::util::List & a1) : ::org::orekit::rugged::refraction::AtmosphericRefraction(env->newObject(initializeClass, &mids$, mid_init$_e169caa02a18ba2b, a0.this$, a1.this$)) {}

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint MultiLayerModel::applyCorrection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a2, const ::org::orekit::rugged::intersection::IntersectionAlgorithm & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_applyCorrection_af1abae4bdd3a766], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace refraction {
        static PyObject *t_MultiLayerModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiLayerModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultiLayerModel_init_(t_MultiLayerModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultiLayerModel_applyCorrection(t_MultiLayerModel *self, PyObject *args);

        static PyMethodDef t_MultiLayerModel__methods_[] = {
          DECLARE_METHOD(t_MultiLayerModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiLayerModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiLayerModel, applyCorrection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiLayerModel)[] = {
          { Py_tp_methods, t_MultiLayerModel__methods_ },
          { Py_tp_init, (void *) t_MultiLayerModel_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiLayerModel)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::refraction::AtmosphericRefraction),
          NULL
        };

        DEFINE_TYPE(MultiLayerModel, t_MultiLayerModel, MultiLayerModel);

        void t_MultiLayerModel::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiLayerModel), &PY_TYPE_DEF(MultiLayerModel), module, "MultiLayerModel", 0);
        }

        void t_MultiLayerModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiLayerModel), "class_", make_descriptor(MultiLayerModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiLayerModel), "wrapfn_", make_descriptor(t_MultiLayerModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiLayerModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultiLayerModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiLayerModel::initializeClass, 1)))
            return NULL;
          return t_MultiLayerModel::wrap_Object(MultiLayerModel(((t_MultiLayerModel *) arg)->object.this$));
        }
        static PyObject *t_MultiLayerModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiLayerModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultiLayerModel_init_(t_MultiLayerModel *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
              MultiLayerModel object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, &a0))
              {
                INT_CALL(object = MultiLayerModel(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              MultiLayerModel object((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MultiLayerModel(a0, a1));
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

        static PyObject *t_MultiLayerModel_applyCorrection(t_MultiLayerModel *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a2((jobject) NULL);
          ::org::orekit::rugged::intersection::IntersectionAlgorithm a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, ::org::orekit::rugged::intersection::IntersectionAlgorithm::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.applyCorrection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          return callSuper(PY_TYPE(MultiLayerModel), (PyObject *) self, "applyCorrection", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Data.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm03::class$ = NULL;
              jmethodID *SsrIgm03::mids$ = NULL;
              bool SsrIgm03::live$ = false;

              jclass SsrIgm03::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f7164cd928143597] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm03Data_d6753b7055940a54] = env->getMethodID(cls, "getSsrIgm03Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm03::SsrIgm03(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm03Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_f7164cd928143597, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm03::getSsrIgm03Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm03Data_d6753b7055940a54]));
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
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm03_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03_of_(t_SsrIgm03 *self, PyObject *args);
              static int t_SsrIgm03_init_(t_SsrIgm03 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm03_getSsrIgm03Data(t_SsrIgm03 *self);
              static PyObject *t_SsrIgm03_get__ssrIgm03Data(t_SsrIgm03 *self, void *data);
              static PyObject *t_SsrIgm03_get__parameters_(t_SsrIgm03 *self, void *data);
              static PyGetSetDef t_SsrIgm03__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm03, ssrIgm03Data),
                DECLARE_GET_FIELD(t_SsrIgm03, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm03__methods_[] = {
                DECLARE_METHOD(t_SsrIgm03, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm03, getSsrIgm03Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm03)[] = {
                { Py_tp_methods, t_SsrIgm03__methods_ },
                { Py_tp_init, (void *) t_SsrIgm03_init_ },
                { Py_tp_getset, t_SsrIgm03__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm03)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm03, t_SsrIgm03, SsrIgm03);
              PyObject *t_SsrIgm03::wrap_Object(const SsrIgm03& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm03::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm03 *self = (t_SsrIgm03 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm03::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm03::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm03 *self = (t_SsrIgm03 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm03::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm03), &PY_TYPE_DEF(SsrIgm03), module, "SsrIgm03", 0);
              }

              void t_SsrIgm03::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03), "class_", make_descriptor(SsrIgm03::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03), "wrapfn_", make_descriptor(t_SsrIgm03::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm03_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm03::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm03::wrap_Object(SsrIgm03(((t_SsrIgm03 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm03_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm03::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm03_of_(t_SsrIgm03 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm03_init_(t_SsrIgm03 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm03Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm03 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm03Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm03(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm03Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm03Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm03_getSsrIgm03Data(t_SsrIgm03 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm03Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm03_get__parameters_(t_SsrIgm03 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm03_get__ssrIgm03Data(t_SsrIgm03 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm03Data());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldGaussIntegrator::class$ = NULL;
          jmethodID *FieldGaussIntegrator::mids$ = NULL;
          bool FieldGaussIntegrator::live$ = false;

          jclass FieldGaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldGaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_832c28cb3cc4d660] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_44f58eee1ec38a36] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_getNumberOfPoints_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfPoints", "()I");
              mids$[mid_getPoint_d0960d09d84b1c1d] = env->getMethodID(cls, "getPoint", "(I)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getWeight_d0960d09d84b1c1d] = env->getMethodID(cls, "getWeight", "(I)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_integrate_b58480964e3d2510] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldGaussIntegrator::FieldGaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_832c28cb3cc4d660, a0.this$)) {}

          FieldGaussIntegrator::FieldGaussIntegrator(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44f58eee1ec38a36, a0.this$, a1.this$)) {}

          jint FieldGaussIntegrator::getNumberOfPoints() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfPoints_f2f64475e4580546]);
          }

          ::org::hipparchus::CalculusFieldElement FieldGaussIntegrator::getPoint(jint a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPoint_d0960d09d84b1c1d], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldGaussIntegrator::getWeight(jint a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getWeight_d0960d09d84b1c1d], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldGaussIntegrator::integrate(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_b58480964e3d2510], a0.this$));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_FieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_of_(t_FieldGaussIntegrator *self, PyObject *args);
          static int t_FieldGaussIntegrator_init_(t_FieldGaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldGaussIntegrator_getNumberOfPoints(t_FieldGaussIntegrator *self);
          static PyObject *t_FieldGaussIntegrator_getPoint(t_FieldGaussIntegrator *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_getWeight(t_FieldGaussIntegrator *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_integrate(t_FieldGaussIntegrator *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_get__numberOfPoints(t_FieldGaussIntegrator *self, void *data);
          static PyObject *t_FieldGaussIntegrator_get__parameters_(t_FieldGaussIntegrator *self, void *data);
          static PyGetSetDef t_FieldGaussIntegrator__fields_[] = {
            DECLARE_GET_FIELD(t_FieldGaussIntegrator, numberOfPoints),
            DECLARE_GET_FIELD(t_FieldGaussIntegrator, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldGaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_FieldGaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldGaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldGaussIntegrator, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldGaussIntegrator, getNumberOfPoints, METH_NOARGS),
            DECLARE_METHOD(t_FieldGaussIntegrator, getPoint, METH_O),
            DECLARE_METHOD(t_FieldGaussIntegrator, getWeight, METH_O),
            DECLARE_METHOD(t_FieldGaussIntegrator, integrate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldGaussIntegrator)[] = {
            { Py_tp_methods, t_FieldGaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_FieldGaussIntegrator_init_ },
            { Py_tp_getset, t_FieldGaussIntegrator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldGaussIntegrator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldGaussIntegrator, t_FieldGaussIntegrator, FieldGaussIntegrator);
          PyObject *t_FieldGaussIntegrator::wrap_Object(const FieldGaussIntegrator& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldGaussIntegrator::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldGaussIntegrator *self = (t_FieldGaussIntegrator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldGaussIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldGaussIntegrator::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldGaussIntegrator *self = (t_FieldGaussIntegrator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldGaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldGaussIntegrator), &PY_TYPE_DEF(FieldGaussIntegrator), module, "FieldGaussIntegrator", 0);
          }

          void t_FieldGaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegrator), "class_", make_descriptor(FieldGaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegrator), "wrapfn_", make_descriptor(t_FieldGaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldGaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_FieldGaussIntegrator::wrap_Object(FieldGaussIntegrator(((t_FieldGaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_FieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldGaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldGaussIntegrator_of_(t_FieldGaussIntegrator *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldGaussIntegrator_init_(t_FieldGaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                FieldGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = FieldGaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                FieldGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldGaussIntegrator(a0, a1));
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

          static PyObject *t_FieldGaussIntegrator_getNumberOfPoints(t_FieldGaussIntegrator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfPoints());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldGaussIntegrator_getPoint(t_FieldGaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getPoint(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPoint", arg);
            return NULL;
          }

          static PyObject *t_FieldGaussIntegrator_getWeight(t_FieldGaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getWeight(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWeight", arg);
            return NULL;
          }

          static PyObject *t_FieldGaussIntegrator_integrate(t_FieldGaussIntegrator *self, PyObject *arg)
          {
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "integrate", arg);
            return NULL;
          }
          static PyObject *t_FieldGaussIntegrator_get__parameters_(t_FieldGaussIntegrator *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldGaussIntegrator_get__numberOfPoints(t_FieldGaussIntegrator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfPoints());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScale::class$ = NULL;
      jmethodID *TimeScale::mids$ = NULL;
      bool TimeScale::live$ = false;

      jclass TimeScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLeap_e912d21057defe63] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLeap_7bc0fd76ee915b72] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_insideLeap_ee2067c5768b6768] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/AbsoluteDate;)Z");
          mids$[mid_insideLeap_5997cf1e9de74766] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Z");
          mids$[mid_minuteDuration_982c9f163875e1c9] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_minuteDuration_90583a249f651dc5] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeScale::getLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TimeScale::getLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeap_7bc0fd76ee915b72], a0.this$));
      }

      ::java::lang::String TimeScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jboolean TimeScale::insideLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_ee2067c5768b6768], a0.this$);
      }

      jboolean TimeScale::insideLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_5997cf1e9de74766], a0.this$);
      }

      jint TimeScale::minuteDuration(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_982c9f163875e1c9], a0.this$);
      }

      jint TimeScale::minuteDuration(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_90583a249f651dc5], a0.this$);
      }

      jdouble TimeScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TimeScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_7bc0fd76ee915b72], a0.this$));
      }

      jdouble TimeScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1], a0.this$, a1.this$);
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
      static PyObject *t_TimeScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScale_getLeap(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_getName(t_TimeScale *self);
      static PyObject *t_TimeScale_insideLeap(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_minuteDuration(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_offsetFromTAI(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_offsetToTAI(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_get__name(t_TimeScale *self, void *data);
      static PyGetSetDef t_TimeScale__fields_[] = {
        DECLARE_GET_FIELD(t_TimeScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeScale__methods_[] = {
        DECLARE_METHOD(t_TimeScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScale, getLeap, METH_VARARGS),
        DECLARE_METHOD(t_TimeScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TimeScale, insideLeap, METH_VARARGS),
        DECLARE_METHOD(t_TimeScale, minuteDuration, METH_VARARGS),
        DECLARE_METHOD(t_TimeScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TimeScale, offsetToTAI, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScale)[] = {
        { Py_tp_methods, t_TimeScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScale)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(TimeScale, t_TimeScale, TimeScale);

      void t_TimeScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScale), &PY_TYPE_DEF(TimeScale), module, "TimeScale", 0);
      }

      void t_TimeScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScale), "class_", make_descriptor(TimeScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScale), "wrapfn_", make_descriptor(t_TimeScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScale::initializeClass, 1)))
          return NULL;
        return t_TimeScale::wrap_Object(TimeScale(((t_TimeScale *) arg)->object.this$));
      }
      static PyObject *t_TimeScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScale_getLeap(t_TimeScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getLeap", args);
        return NULL;
      }

      static PyObject *t_TimeScale_getName(t_TimeScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TimeScale_insideLeap(t_TimeScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "insideLeap", args);
        return NULL;
      }

      static PyObject *t_TimeScale_minuteDuration(t_TimeScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "minuteDuration", args);
        return NULL;
      }

      static PyObject *t_TimeScale_offsetFromTAI(t_TimeScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_TimeScale_offsetToTAI(t_TimeScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_TimeScale_get__name(t_TimeScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroInterSatelliteRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroInterSatelliteRangeModifier::class$ = NULL;
          jmethodID *ShapiroInterSatelliteRangeModifier::mids$ = NULL;
          bool ShapiroInterSatelliteRangeModifier::live$ = false;

          jclass ShapiroInterSatelliteRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroInterSatelliteRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroInterSatelliteRangeModifier::ShapiroInterSatelliteRangeModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          ::java::util::List ShapiroInterSatelliteRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void ShapiroInterSatelliteRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_ShapiroInterSatelliteRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroInterSatelliteRangeModifier_init_(t_ShapiroInterSatelliteRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_getParametersDrivers(t_ShapiroInterSatelliteRangeModifier *self);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_modifyWithoutDerivatives(t_ShapiroInterSatelliteRangeModifier *self, PyObject *arg);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_get__parametersDrivers(t_ShapiroInterSatelliteRangeModifier *self, void *data);
          static PyGetSetDef t_ShapiroInterSatelliteRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroInterSatelliteRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroInterSatelliteRangeModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroInterSatelliteRangeModifier)[] = {
            { Py_tp_methods, t_ShapiroInterSatelliteRangeModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroInterSatelliteRangeModifier_init_ },
            { Py_tp_getset, t_ShapiroInterSatelliteRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroInterSatelliteRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroInterSatelliteRangeModifier, t_ShapiroInterSatelliteRangeModifier, ShapiroInterSatelliteRangeModifier);

          void t_ShapiroInterSatelliteRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroInterSatelliteRangeModifier), &PY_TYPE_DEF(ShapiroInterSatelliteRangeModifier), module, "ShapiroInterSatelliteRangeModifier", 0);
          }

          void t_ShapiroInterSatelliteRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatelliteRangeModifier), "class_", make_descriptor(ShapiroInterSatelliteRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatelliteRangeModifier), "wrapfn_", make_descriptor(t_ShapiroInterSatelliteRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatelliteRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroInterSatelliteRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroInterSatelliteRangeModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroInterSatelliteRangeModifier::wrap_Object(ShapiroInterSatelliteRangeModifier(((t_ShapiroInterSatelliteRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroInterSatelliteRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroInterSatelliteRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroInterSatelliteRangeModifier_init_(t_ShapiroInterSatelliteRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroInterSatelliteRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroInterSatelliteRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroInterSatelliteRangeModifier_getParametersDrivers(t_ShapiroInterSatelliteRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroInterSatelliteRangeModifier_modifyWithoutDerivatives(t_ShapiroInterSatelliteRangeModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroInterSatelliteRangeModifier_get__parametersDrivers(t_ShapiroInterSatelliteRangeModifier *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeShiftable::class$ = NULL;
      jmethodID *TimeShiftable::mids$ = NULL;
      bool TimeShiftable::live$ = false;

      jclass TimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_shiftedBy_9aa7950fcf3dec6b] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/TimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeShiftable TimeShiftable::shiftedBy(jdouble a0) const
      {
        return TimeShiftable(env->callObjectMethod(this$, mids$[mid_shiftedBy_9aa7950fcf3dec6b], a0));
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
      static PyObject *t_TimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeShiftable_of_(t_TimeShiftable *self, PyObject *args);
      static PyObject *t_TimeShiftable_shiftedBy(t_TimeShiftable *self, PyObject *arg);
      static PyObject *t_TimeShiftable_get__parameters_(t_TimeShiftable *self, void *data);
      static PyGetSetDef t_TimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_TimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeShiftable__methods_[] = {
        DECLARE_METHOD(t_TimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeShiftable, shiftedBy, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeShiftable)[] = {
        { Py_tp_methods, t_TimeShiftable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeShiftable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeShiftable, t_TimeShiftable, TimeShiftable);
      PyObject *t_TimeShiftable::wrap_Object(const TimeShiftable& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeShiftable *self = (t_TimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeShiftable *self = (t_TimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeShiftable), &PY_TYPE_DEF(TimeShiftable), module, "TimeShiftable", 0);
      }

      void t_TimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeShiftable), "class_", make_descriptor(TimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeShiftable), "wrapfn_", make_descriptor(t_TimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeShiftable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeShiftable::initializeClass, 1)))
          return NULL;
        return t_TimeShiftable::wrap_Object(TimeShiftable(((t_TimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_TimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeShiftable_of_(t_TimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeShiftable_shiftedBy(t_TimeShiftable *self, PyObject *arg)
      {
        jdouble a0;
        TimeShiftable result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_TimeShiftable::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }
      static PyObject *t_TimeShiftable_get__parameters_(t_TimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/IdentityConverter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *IdentityConverter::class$ = NULL;
            jmethodID *IdentityConverter::mids$ = NULL;
            bool IdentityConverter::live$ = false;

            jclass IdentityConverter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/IdentityConverter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_metersToRu_84fe3cf394b0532d] = env->getMethodID(cls, "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_ruToMeters_84fe3cf394b0532d] = env->getMethodID(cls, "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IdentityConverter::IdentityConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jdouble IdentityConverter::metersToRu(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_metersToRu_84fe3cf394b0532d], a0.this$, a1.this$, a2);
            }

            jdouble IdentityConverter::ruToMeters(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_ruToMeters_84fe3cf394b0532d], a0.this$, a1.this$, a2);
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
            static PyObject *t_IdentityConverter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IdentityConverter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_IdentityConverter_init_(t_IdentityConverter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_IdentityConverter_metersToRu(t_IdentityConverter *self, PyObject *args);
            static PyObject *t_IdentityConverter_ruToMeters(t_IdentityConverter *self, PyObject *args);

            static PyMethodDef t_IdentityConverter__methods_[] = {
              DECLARE_METHOD(t_IdentityConverter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IdentityConverter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IdentityConverter, metersToRu, METH_VARARGS),
              DECLARE_METHOD(t_IdentityConverter, ruToMeters, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IdentityConverter)[] = {
              { Py_tp_methods, t_IdentityConverter__methods_ },
              { Py_tp_init, (void *) t_IdentityConverter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IdentityConverter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(IdentityConverter, t_IdentityConverter, IdentityConverter);

            void t_IdentityConverter::install(PyObject *module)
            {
              installType(&PY_TYPE(IdentityConverter), &PY_TYPE_DEF(IdentityConverter), module, "IdentityConverter", 0);
            }

            void t_IdentityConverter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IdentityConverter), "class_", make_descriptor(IdentityConverter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IdentityConverter), "wrapfn_", make_descriptor(t_IdentityConverter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IdentityConverter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_IdentityConverter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IdentityConverter::initializeClass, 1)))
                return NULL;
              return t_IdentityConverter::wrap_Object(IdentityConverter(((t_IdentityConverter *) arg)->object.this$));
            }
            static PyObject *t_IdentityConverter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IdentityConverter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_IdentityConverter_init_(t_IdentityConverter *self, PyObject *args, PyObject *kwds)
            {
              IdentityConverter object((jobject) NULL);

              INT_CALL(object = IdentityConverter());
              self->object = object;

              return 0;
            }

            static PyObject *t_IdentityConverter_metersToRu(t_IdentityConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.metersToRu(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "metersToRu", args);
              return NULL;
            }

            static PyObject *t_IdentityConverter_ruToMeters(t_IdentityConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.ruToMeters(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "ruToMeters", args);
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
#include "org/hipparchus/linear/RiccatiEquationSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RiccatiEquationSolver::class$ = NULL;
      jmethodID *RiccatiEquationSolver::mids$ = NULL;
      bool RiccatiEquationSolver::live$ = false;

      jclass RiccatiEquationSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RiccatiEquationSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getK_7116bbecdd8ceb21] = env->getMethodID(cls, "getK", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_7116bbecdd8ceb21] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolver::getK() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getK_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolver::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_7116bbecdd8ceb21]));
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
      static PyObject *t_RiccatiEquationSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RiccatiEquationSolver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RiccatiEquationSolver_getK(t_RiccatiEquationSolver *self);
      static PyObject *t_RiccatiEquationSolver_getP(t_RiccatiEquationSolver *self);
      static PyObject *t_RiccatiEquationSolver_get__k(t_RiccatiEquationSolver *self, void *data);
      static PyObject *t_RiccatiEquationSolver_get__p(t_RiccatiEquationSolver *self, void *data);
      static PyGetSetDef t_RiccatiEquationSolver__fields_[] = {
        DECLARE_GET_FIELD(t_RiccatiEquationSolver, k),
        DECLARE_GET_FIELD(t_RiccatiEquationSolver, p),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RiccatiEquationSolver__methods_[] = {
        DECLARE_METHOD(t_RiccatiEquationSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolver, getK, METH_NOARGS),
        DECLARE_METHOD(t_RiccatiEquationSolver, getP, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RiccatiEquationSolver)[] = {
        { Py_tp_methods, t_RiccatiEquationSolver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RiccatiEquationSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RiccatiEquationSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RiccatiEquationSolver, t_RiccatiEquationSolver, RiccatiEquationSolver);

      void t_RiccatiEquationSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(RiccatiEquationSolver), &PY_TYPE_DEF(RiccatiEquationSolver), module, "RiccatiEquationSolver", 0);
      }

      void t_RiccatiEquationSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolver), "class_", make_descriptor(RiccatiEquationSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolver), "wrapfn_", make_descriptor(t_RiccatiEquationSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RiccatiEquationSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RiccatiEquationSolver::initializeClass, 1)))
          return NULL;
        return t_RiccatiEquationSolver::wrap_Object(RiccatiEquationSolver(((t_RiccatiEquationSolver *) arg)->object.this$));
      }
      static PyObject *t_RiccatiEquationSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RiccatiEquationSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RiccatiEquationSolver_getK(t_RiccatiEquationSolver *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolver_getP(t_RiccatiEquationSolver *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolver_get__k(t_RiccatiEquationSolver *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_RiccatiEquationSolver_get__p(t_RiccatiEquationSolver *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParameters.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ODParametersKey::class$ = NULL;
            jmethodID *ODParametersKey::mids$ = NULL;
            bool ODParametersKey::live$ = false;
            ODParametersKey *ODParametersKey::ACTUAL_OD_SPAN = NULL;
            ODParametersKey *ODParametersKey::COMMENT = NULL;
            ODParametersKey *ODParametersKey::OBS_AVAILABLE = NULL;
            ODParametersKey *ODParametersKey::OBS_USED = NULL;
            ODParametersKey *ODParametersKey::OD_EPOCH = NULL;
            ODParametersKey *ODParametersKey::RECOMMENDED_OD_SPAN = NULL;
            ODParametersKey *ODParametersKey::RESIDUALS_ACCEPTED = NULL;
            ODParametersKey *ODParametersKey::TIME_LASTOB_END = NULL;
            ODParametersKey *ODParametersKey::TIME_LASTOB_START = NULL;
            ODParametersKey *ODParametersKey::TRACKS_AVAILABLE = NULL;
            ODParametersKey *ODParametersKey::TRACKS_USED = NULL;
            ODParametersKey *ODParametersKey::WEIGHTED_RMS = NULL;

            jclass ODParametersKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ODParametersKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_bf363d781c8d9f4e] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;)Z");
                mids$[mid_valueOf_17c8586f06b4b904] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;");
                mids$[mid_values_54b023c86827f5fc] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ACTUAL_OD_SPAN = new ODParametersKey(env->getStaticObjectField(cls, "ACTUAL_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                COMMENT = new ODParametersKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                OBS_AVAILABLE = new ODParametersKey(env->getStaticObjectField(cls, "OBS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                OBS_USED = new ODParametersKey(env->getStaticObjectField(cls, "OBS_USED", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                OD_EPOCH = new ODParametersKey(env->getStaticObjectField(cls, "OD_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                RECOMMENDED_OD_SPAN = new ODParametersKey(env->getStaticObjectField(cls, "RECOMMENDED_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                RESIDUALS_ACCEPTED = new ODParametersKey(env->getStaticObjectField(cls, "RESIDUALS_ACCEPTED", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                TIME_LASTOB_END = new ODParametersKey(env->getStaticObjectField(cls, "TIME_LASTOB_END", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                TIME_LASTOB_START = new ODParametersKey(env->getStaticObjectField(cls, "TIME_LASTOB_START", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                TRACKS_AVAILABLE = new ODParametersKey(env->getStaticObjectField(cls, "TRACKS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                TRACKS_USED = new ODParametersKey(env->getStaticObjectField(cls, "TRACKS_USED", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                WEIGHTED_RMS = new ODParametersKey(env->getStaticObjectField(cls, "WEIGHTED_RMS", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean ODParametersKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_bf363d781c8d9f4e], a0.this$, a1.this$, a2.this$);
            }

            ODParametersKey ODParametersKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ODParametersKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_17c8586f06b4b904], a0.this$));
            }

            JArray< ODParametersKey > ODParametersKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ODParametersKey >(env->callStaticObjectMethod(cls, mids$[mid_values_54b023c86827f5fc]));
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
            static PyObject *t_ODParametersKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParametersKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParametersKey_of_(t_ODParametersKey *self, PyObject *args);
            static PyObject *t_ODParametersKey_process(t_ODParametersKey *self, PyObject *args);
            static PyObject *t_ODParametersKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ODParametersKey_values(PyTypeObject *type);
            static PyObject *t_ODParametersKey_get__parameters_(t_ODParametersKey *self, void *data);
            static PyGetSetDef t_ODParametersKey__fields_[] = {
              DECLARE_GET_FIELD(t_ODParametersKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ODParametersKey__methods_[] = {
              DECLARE_METHOD(t_ODParametersKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParametersKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParametersKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_ODParametersKey, process, METH_VARARGS),
              DECLARE_METHOD(t_ODParametersKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ODParametersKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ODParametersKey)[] = {
              { Py_tp_methods, t_ODParametersKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ODParametersKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ODParametersKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ODParametersKey, t_ODParametersKey, ODParametersKey);
            PyObject *t_ODParametersKey::wrap_Object(const ODParametersKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ODParametersKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ODParametersKey *self = (t_ODParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ODParametersKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ODParametersKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ODParametersKey *self = (t_ODParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ODParametersKey::install(PyObject *module)
            {
              installType(&PY_TYPE(ODParametersKey), &PY_TYPE_DEF(ODParametersKey), module, "ODParametersKey", 0);
            }

            void t_ODParametersKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "class_", make_descriptor(ODParametersKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "wrapfn_", make_descriptor(t_ODParametersKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(ODParametersKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "ACTUAL_OD_SPAN", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::ACTUAL_OD_SPAN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "COMMENT", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "OBS_AVAILABLE", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::OBS_AVAILABLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "OBS_USED", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::OBS_USED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "OD_EPOCH", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::OD_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "RECOMMENDED_OD_SPAN", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::RECOMMENDED_OD_SPAN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "RESIDUALS_ACCEPTED", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::RESIDUALS_ACCEPTED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "TIME_LASTOB_END", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::TIME_LASTOB_END)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "TIME_LASTOB_START", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::TIME_LASTOB_START)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "TRACKS_AVAILABLE", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::TRACKS_AVAILABLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "TRACKS_USED", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::TRACKS_USED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "WEIGHTED_RMS", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::WEIGHTED_RMS)));
            }

            static PyObject *t_ODParametersKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ODParametersKey::initializeClass, 1)))
                return NULL;
              return t_ODParametersKey::wrap_Object(ODParametersKey(((t_ODParametersKey *) arg)->object.this$));
            }
            static PyObject *t_ODParametersKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ODParametersKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ODParametersKey_of_(t_ODParametersKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ODParametersKey_process(t_ODParametersKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_ODParametersKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ODParametersKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ODParametersKey::valueOf(a0));
                return t_ODParametersKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ODParametersKey_values(PyTypeObject *type)
            {
              JArray< ODParametersKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ODParametersKey::values());
              return JArray<jobject>(result.this$).wrap(t_ODParametersKey::wrap_jobject);
            }
            static PyObject *t_ODParametersKey_get__parameters_(t_ODParametersKey *self, void *data)
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
#include "org/orekit/models/earth/Geoid.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *Geoid::class$ = NULL;
        jmethodID *Geoid::mids$ = NULL;
        bool Geoid::live$ = false;

        jclass Geoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/Geoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ee5218bc025d40ec] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;Lorg/orekit/models/earth/ReferenceEllipsoid;)V");
            mids$[mid_getBodyFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getEllipsoid_1eef7b7a6c58a550] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIntersectionPoint_9dbbe2475f1298d4] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_getIntersectionPoint_4a2d37785a37d918] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_getUndulation_3a8282fb1941862d] = env->getMethodID(cls, "getUndulation", "(DDLorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_projectToGround_6b6c0bf817ea4492] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_projectToGround_a871d6772929c652] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_2637885099554561] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_transform_393fcc10540ff032] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_d471208f838d1a3d] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_transform_588d378a3b637077] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Geoid::Geoid(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a0, const ::org::orekit::models::earth::ReferenceEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ee5218bc025d40ec, a0.this$, a1.this$)) {}

        ::org::orekit::frames::Frame Geoid::getBodyFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_c8fe21bcdac65bf6]));
        }

        ::org::orekit::models::earth::ReferenceEllipsoid Geoid::getEllipsoid() const
        {
          return ::org::orekit::models::earth::ReferenceEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_1eef7b7a6c58a550]));
        }

        ::org::orekit::bodies::FieldGeodeticPoint Geoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
        {
          return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_9dbbe2475f1298d4], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::bodies::GeodeticPoint Geoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_4a2d37785a37d918], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        jdouble Geoid::getUndulation(jdouble a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUndulation_3a8282fb1941862d], a0, a1, a2.this$);
        }

        ::org::orekit::utils::TimeStampedPVCoordinates Geoid::projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToGround_6b6c0bf817ea4492], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Geoid::projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToGround_a871d6772929c652], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Geoid::transform(const ::org::orekit::bodies::FieldGeodeticPoint & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transform_2637885099554561], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Geoid::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_393fcc10540ff032], a0.this$));
        }

        ::org::orekit::bodies::FieldGeodeticPoint Geoid::transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
        {
          return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_d471208f838d1a3d], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::bodies::GeodeticPoint Geoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_588d378a3b637077], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_Geoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Geoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Geoid_init_(t_Geoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Geoid_getBodyFrame(t_Geoid *self);
        static PyObject *t_Geoid_getEllipsoid(t_Geoid *self);
        static PyObject *t_Geoid_getIntersectionPoint(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_getUndulation(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_projectToGround(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_transform(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_get__bodyFrame(t_Geoid *self, void *data);
        static PyObject *t_Geoid_get__ellipsoid(t_Geoid *self, void *data);
        static PyGetSetDef t_Geoid__fields_[] = {
          DECLARE_GET_FIELD(t_Geoid, bodyFrame),
          DECLARE_GET_FIELD(t_Geoid, ellipsoid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Geoid__methods_[] = {
          DECLARE_METHOD(t_Geoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Geoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Geoid, getBodyFrame, METH_NOARGS),
          DECLARE_METHOD(t_Geoid, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_Geoid, getIntersectionPoint, METH_VARARGS),
          DECLARE_METHOD(t_Geoid, getUndulation, METH_VARARGS),
          DECLARE_METHOD(t_Geoid, projectToGround, METH_VARARGS),
          DECLARE_METHOD(t_Geoid, transform, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Geoid)[] = {
          { Py_tp_methods, t_Geoid__methods_ },
          { Py_tp_init, (void *) t_Geoid_init_ },
          { Py_tp_getset, t_Geoid__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Geoid)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Geoid, t_Geoid, Geoid);

        void t_Geoid::install(PyObject *module)
        {
          installType(&PY_TYPE(Geoid), &PY_TYPE_DEF(Geoid), module, "Geoid", 0);
        }

        void t_Geoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Geoid), "class_", make_descriptor(Geoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Geoid), "wrapfn_", make_descriptor(t_Geoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Geoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Geoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Geoid::initializeClass, 1)))
            return NULL;
          return t_Geoid::wrap_Object(Geoid(((t_Geoid *) arg)->object.this$));
        }
        static PyObject *t_Geoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Geoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Geoid_init_(t_Geoid *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a0((jobject) NULL);
          ::org::orekit::models::earth::ReferenceEllipsoid a1((jobject) NULL);
          Geoid object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::models::earth::ReferenceEllipsoid::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Geoid(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Geoid_getBodyFrame(t_Geoid *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_Geoid_getEllipsoid(t_Geoid *self)
        {
          ::org::orekit::models::earth::ReferenceEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::models::earth::t_ReferenceEllipsoid::wrap_Object(result);
        }

        static PyObject *t_Geoid_getIntersectionPoint(t_Geoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::frames::Frame a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
                return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::Frame a2((jobject) NULL);
              ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
                return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getIntersectionPoint", args);
          return NULL;
        }

        static PyObject *t_Geoid_getUndulation(t_Geoid *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "DDk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getUndulation(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getUndulation", args);
          return NULL;
        }

        static PyObject *t_Geoid_projectToGround(t_Geoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.projectToGround(a0, a1));
                return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::frames::Frame a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.projectToGround(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "projectToGround", args);
          return NULL;
        }

        static PyObject *t_Geoid_transform(t_Geoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
              {
                OBJ_CALL(result = self->object.transform(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.transform(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.transform(a0, a1, a2));
                return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.transform(a0, a1, a2));
                return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transform", args);
          return NULL;
        }

        static PyObject *t_Geoid_get__bodyFrame(t_Geoid *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_Geoid_get__ellipsoid(t_Geoid *self, void *data)
        {
          ::org::orekit::models::earth::ReferenceEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return ::org::orekit::models::earth::t_ReferenceEllipsoid::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *FieldGeodeticPoint::class$ = NULL;
      jmethodID *FieldGeodeticPoint::mids$ = NULL;
      bool FieldGeodeticPoint::live$ = false;

      jclass FieldGeodeticPoint::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/FieldGeodeticPoint");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5b191078c5a85105] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getAltitude_e6d4d3215c30992a] = env->getMethodID(cls, "getAltitude", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEast_5791f80683b5227e] = env->getMethodID(cls, "getEast", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getLatitude_e6d4d3215c30992a] = env->getMethodID(cls, "getLatitude", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLongitude_e6d4d3215c30992a] = env->getMethodID(cls, "getLongitude", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNadir_5791f80683b5227e] = env->getMethodID(cls, "getNadir", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNorth_5791f80683b5227e] = env->getMethodID(cls, "getNorth", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getSouth_5791f80683b5227e] = env->getMethodID(cls, "getSouth", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getWest_5791f80683b5227e] = env->getMethodID(cls, "getWest", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getZenith_5791f80683b5227e] = env->getMethodID(cls, "getZenith", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldGeodeticPoint::FieldGeodeticPoint(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5b191078c5a85105, a0.this$, a1.this$, a2.this$)) {}

      jboolean FieldGeodeticPoint::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldGeodeticPoint::getAltitude() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAltitude_e6d4d3215c30992a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getEast() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getEast_5791f80683b5227e]));
      }

      ::org::hipparchus::CalculusFieldElement FieldGeodeticPoint::getLatitude() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLatitude_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldGeodeticPoint::getLongitude() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLongitude_e6d4d3215c30992a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getNadir() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNadir_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getNorth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNorth_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getSouth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getSouth_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getWest() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getWest_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldGeodeticPoint::getZenith() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getZenith_5791f80683b5227e]));
      }

      jint FieldGeodeticPoint::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      ::java::lang::String FieldGeodeticPoint::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      static PyObject *t_FieldGeodeticPoint_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldGeodeticPoint_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldGeodeticPoint_of_(t_FieldGeodeticPoint *self, PyObject *args);
      static int t_FieldGeodeticPoint_init_(t_FieldGeodeticPoint *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldGeodeticPoint_equals(t_FieldGeodeticPoint *self, PyObject *args);
      static PyObject *t_FieldGeodeticPoint_getAltitude(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getEast(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getLatitude(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getLongitude(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getNadir(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getNorth(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getSouth(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getWest(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_getZenith(t_FieldGeodeticPoint *self);
      static PyObject *t_FieldGeodeticPoint_hashCode(t_FieldGeodeticPoint *self, PyObject *args);
      static PyObject *t_FieldGeodeticPoint_toString(t_FieldGeodeticPoint *self, PyObject *args);
      static PyObject *t_FieldGeodeticPoint_get__altitude(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__east(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__latitude(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__longitude(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__nadir(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__north(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__south(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__west(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__zenith(t_FieldGeodeticPoint *self, void *data);
      static PyObject *t_FieldGeodeticPoint_get__parameters_(t_FieldGeodeticPoint *self, void *data);
      static PyGetSetDef t_FieldGeodeticPoint__fields_[] = {
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, altitude),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, east),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, latitude),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, longitude),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, nadir),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, north),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, south),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, west),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, zenith),
        DECLARE_GET_FIELD(t_FieldGeodeticPoint, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldGeodeticPoint__methods_[] = {
        DECLARE_METHOD(t_FieldGeodeticPoint, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldGeodeticPoint, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldGeodeticPoint, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getAltitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getEast, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getLatitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getLongitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getNadir, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getNorth, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getSouth, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getWest, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, getZenith, METH_NOARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldGeodeticPoint, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldGeodeticPoint)[] = {
        { Py_tp_methods, t_FieldGeodeticPoint__methods_ },
        { Py_tp_init, (void *) t_FieldGeodeticPoint_init_ },
        { Py_tp_getset, t_FieldGeodeticPoint__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldGeodeticPoint)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldGeodeticPoint, t_FieldGeodeticPoint, FieldGeodeticPoint);
      PyObject *t_FieldGeodeticPoint::wrap_Object(const FieldGeodeticPoint& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldGeodeticPoint::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldGeodeticPoint *self = (t_FieldGeodeticPoint *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldGeodeticPoint::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldGeodeticPoint::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldGeodeticPoint *self = (t_FieldGeodeticPoint *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldGeodeticPoint::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldGeodeticPoint), &PY_TYPE_DEF(FieldGeodeticPoint), module, "FieldGeodeticPoint", 0);
      }

      void t_FieldGeodeticPoint::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGeodeticPoint), "class_", make_descriptor(FieldGeodeticPoint::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGeodeticPoint), "wrapfn_", make_descriptor(t_FieldGeodeticPoint::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGeodeticPoint), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldGeodeticPoint_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldGeodeticPoint::initializeClass, 1)))
          return NULL;
        return t_FieldGeodeticPoint::wrap_Object(FieldGeodeticPoint(((t_FieldGeodeticPoint *) arg)->object.this$));
      }
      static PyObject *t_FieldGeodeticPoint_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldGeodeticPoint::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldGeodeticPoint_of_(t_FieldGeodeticPoint *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldGeodeticPoint_init_(t_FieldGeodeticPoint *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldGeodeticPoint object((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldGeodeticPoint(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldGeodeticPoint_equals(t_FieldGeodeticPoint *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldGeodeticPoint), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldGeodeticPoint_getAltitude(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAltitude());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldGeodeticPoint_getEast(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getLatitude(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatitude());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldGeodeticPoint_getLongitude(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLongitude());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldGeodeticPoint_getNadir(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getNorth(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getSouth(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getWest(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_getZenith(t_FieldGeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldGeodeticPoint_hashCode(t_FieldGeodeticPoint *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldGeodeticPoint), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldGeodeticPoint_toString(t_FieldGeodeticPoint *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldGeodeticPoint), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldGeodeticPoint_get__parameters_(t_FieldGeodeticPoint *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldGeodeticPoint_get__altitude(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAltitude());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__east(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__latitude(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatitude());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__longitude(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLongitude());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__nadir(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__north(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__south(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__west(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldGeodeticPoint_get__zenith(t_FieldGeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTForceModel::class$ = NULL;
            jmethodID *DSSTForceModel::mids$ = NULL;
            bool DSSTForceModel::live$ = false;

            jclass DSSTForceModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_extractParameters_d7d552e275320f67] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_extractParameters_8b177eb25e4eb468] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
                mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
                mids$[mid_getMeanElementRate_3b4b4fe187ad73ff] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_5265bce9e9da3506] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
                mids$[mid_initializeShortPeriodTerms_74f227e9e3e51225] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_46b1d1d9daf3396d] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_8df221610d0cb785] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_6839803ab3ef216d] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > DSSTForceModel::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_d7d552e275320f67], a0.this$, a1.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTForceModel::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_8b177eb25e4eb468], a0.this$, a1.this$));
            }

            ::java::util::stream::Stream DSSTForceModel::getEventDetectors() const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a68a17dd093f796d]));
            }

            ::java::util::stream::Stream DSSTForceModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_1328ddb491531a35], a0.this$));
            }

            JArray< jdouble > DSSTForceModel::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3b4b4fe187ad73ff], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTForceModel::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_5265bce9e9da3506], a0.this$, a1.this$, a2.this$));
            }

            void DSSTForceModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
            }

            void DSSTForceModel::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
            }

            ::java::util::List DSSTForceModel::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_74f227e9e3e51225], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTForceModel::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_46b1d1d9daf3396d], a0.this$, a1.this$, a2.this$));
            }

            void DSSTForceModel::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8109c1a27d4471d3], a0.this$);
            }

            void DSSTForceModel::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_8df221610d0cb785], a0.this$, a1.this$);
            }

            void DSSTForceModel::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_6839803ab3ef216d], a0.this$, a1.this$);
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
            static PyObject *t_DSSTForceModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTForceModel_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTForceModel_extractParameters(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_getEventDetectors(t_DSSTForceModel *self);
            static PyObject *t_DSSTForceModel_getFieldEventDetectors(t_DSSTForceModel *self, PyObject *arg);
            static PyObject *t_DSSTForceModel_getMeanElementRate(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_init(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_initializeShortPeriodTerms(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_registerAttitudeProvider(t_DSSTForceModel *self, PyObject *arg);
            static PyObject *t_DSSTForceModel_updateShortPeriodTerms(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_get__eventDetectors(t_DSSTForceModel *self, void *data);
            static PyGetSetDef t_DSSTForceModel__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTForceModel, eventDetectors),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTForceModel__methods_[] = {
              DECLARE_METHOD(t_DSSTForceModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTForceModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTForceModel, extractParameters, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, getEventDetectors, METH_NOARGS),
              DECLARE_METHOD(t_DSSTForceModel, getFieldEventDetectors, METH_O),
              DECLARE_METHOD(t_DSSTForceModel, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, init, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTForceModel, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTForceModel)[] = {
              { Py_tp_methods, t_DSSTForceModel__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DSSTForceModel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTForceModel)[] = {
              &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
              NULL
            };

            DEFINE_TYPE(DSSTForceModel, t_DSSTForceModel, DSSTForceModel);

            void t_DSSTForceModel::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTForceModel), &PY_TYPE_DEF(DSSTForceModel), module, "DSSTForceModel", 0);
            }

            void t_DSSTForceModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTForceModel), "class_", make_descriptor(DSSTForceModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTForceModel), "wrapfn_", make_descriptor(t_DSSTForceModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTForceModel), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTForceModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTForceModel::initializeClass, 1)))
                return NULL;
              return t_DSSTForceModel::wrap_Object(DSSTForceModel(((t_DSSTForceModel *) arg)->object.this$));
            }
            static PyObject *t_DSSTForceModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTForceModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DSSTForceModel_extractParameters(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "[Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.extractParameters(a0, a1));
                    return result.wrap();
                  }
                }
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                  {
                    OBJ_CALL(result = self->object.extractParameters(a0, a1));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "extractParameters", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_getEventDetectors(t_DSSTForceModel *self)
            {
              ::java::util::stream::Stream result((jobject) NULL);
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }

            static PyObject *t_DSSTForceModel_getFieldEventDetectors(t_DSSTForceModel *self, PyObject *arg)
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_getMeanElementRate(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_init(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                  {
                    OBJ_CALL(self->object.init(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.init(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "init", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_initializeShortPeriodTerms(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_registerAttitudeProvider(t_DSSTForceModel *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_updateShortPeriodTerms(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_get__eventDetectors(t_DSSTForceModel *self, void *data)
            {
              ::java::util::stream::Stream value((jobject) NULL);
              OBJ_CALL(value = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/StreamMonitor.h"
#include "org/orekit/gnss/metric/ntrip/NtripClient.h"
#include "java/lang/Runnable.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *StreamMonitor::class$ = NULL;
          jmethodID *StreamMonitor::mids$ = NULL;
          bool StreamMonitor::live$ = false;

          jclass StreamMonitor::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/StreamMonitor");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ee74f62c62ef2c3d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/metric/ntrip/NtripClient;Ljava/lang/String;Lorg/orekit/gnss/metric/ntrip/Type;ZZDDI)V");
              mids$[mid_addObserver_1c0fbc2bbfe838c4] = env->getMethodID(cls, "addObserver", "(ILorg/orekit/gnss/metric/ntrip/MessageObserver;)V");
              mids$[mid_getException_547798560067f682] = env->getMethodID(cls, "getException", "()Lorg/orekit/errors/OrekitException;");
              mids$[mid_run_7ae3461a92a43152] = env->getMethodID(cls, "run", "()V");
              mids$[mid_stopMonitoring_7ae3461a92a43152] = env->getMethodID(cls, "stopMonitoring", "()V");
              mids$[mid_fetchByte_f2f64475e4580546] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StreamMonitor::StreamMonitor(const ::org::orekit::gnss::metric::ntrip::NtripClient & a0, const ::java::lang::String & a1, const ::org::orekit::gnss::metric::ntrip::Type & a2, jboolean a3, jboolean a4, jdouble a5, jdouble a6, jint a7) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_ee74f62c62ef2c3d, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7)) {}

          void StreamMonitor::addObserver(jint a0, const ::org::orekit::gnss::metric::ntrip::MessageObserver & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addObserver_1c0fbc2bbfe838c4], a0, a1.this$);
          }

          ::org::orekit::errors::OrekitException StreamMonitor::getException() const
          {
            return ::org::orekit::errors::OrekitException(env->callObjectMethod(this$, mids$[mid_getException_547798560067f682]));
          }

          void StreamMonitor::run() const
          {
            env->callVoidMethod(this$, mids$[mid_run_7ae3461a92a43152]);
          }

          void StreamMonitor::stopMonitoring() const
          {
            env->callVoidMethod(this$, mids$[mid_stopMonitoring_7ae3461a92a43152]);
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
        namespace ntrip {
          static PyObject *t_StreamMonitor_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StreamMonitor_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StreamMonitor_init_(t_StreamMonitor *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StreamMonitor_addObserver(t_StreamMonitor *self, PyObject *args);
          static PyObject *t_StreamMonitor_getException(t_StreamMonitor *self);
          static PyObject *t_StreamMonitor_run(t_StreamMonitor *self);
          static PyObject *t_StreamMonitor_stopMonitoring(t_StreamMonitor *self);
          static PyObject *t_StreamMonitor_get__exception(t_StreamMonitor *self, void *data);
          static PyGetSetDef t_StreamMonitor__fields_[] = {
            DECLARE_GET_FIELD(t_StreamMonitor, exception),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StreamMonitor__methods_[] = {
            DECLARE_METHOD(t_StreamMonitor, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StreamMonitor, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StreamMonitor, addObserver, METH_VARARGS),
            DECLARE_METHOD(t_StreamMonitor, getException, METH_NOARGS),
            DECLARE_METHOD(t_StreamMonitor, run, METH_NOARGS),
            DECLARE_METHOD(t_StreamMonitor, stopMonitoring, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StreamMonitor)[] = {
            { Py_tp_methods, t_StreamMonitor__methods_ },
            { Py_tp_init, (void *) t_StreamMonitor_init_ },
            { Py_tp_getset, t_StreamMonitor__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StreamMonitor)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(StreamMonitor, t_StreamMonitor, StreamMonitor);

          void t_StreamMonitor::install(PyObject *module)
          {
            installType(&PY_TYPE(StreamMonitor), &PY_TYPE_DEF(StreamMonitor), module, "StreamMonitor", 0);
          }

          void t_StreamMonitor::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamMonitor), "class_", make_descriptor(StreamMonitor::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamMonitor), "wrapfn_", make_descriptor(t_StreamMonitor::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamMonitor), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StreamMonitor_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StreamMonitor::initializeClass, 1)))
              return NULL;
            return t_StreamMonitor::wrap_Object(StreamMonitor(((t_StreamMonitor *) arg)->object.this$));
          }
          static PyObject *t_StreamMonitor_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StreamMonitor::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StreamMonitor_init_(t_StreamMonitor *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::metric::ntrip::NtripClient a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::gnss::metric::ntrip::Type a2((jobject) NULL);
            PyTypeObject **p2;
            jboolean a3;
            jboolean a4;
            jdouble a5;
            jdouble a6;
            jint a7;
            StreamMonitor object((jobject) NULL);

            if (!parseArgs(args, "ksKZZDDI", ::org::orekit::gnss::metric::ntrip::NtripClient::initializeClass, ::org::orekit::gnss::metric::ntrip::Type::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::metric::ntrip::t_Type::parameters_, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = StreamMonitor(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_StreamMonitor_addObserver(t_StreamMonitor *self, PyObject *args)
          {
            jint a0;
            ::org::orekit::gnss::metric::ntrip::MessageObserver a1((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::ntrip::MessageObserver::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addObserver(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addObserver", args);
            return NULL;
          }

          static PyObject *t_StreamMonitor_getException(t_StreamMonitor *self)
          {
            ::org::orekit::errors::OrekitException result((jobject) NULL);
            OBJ_CALL(result = self->object.getException());
            return ::org::orekit::errors::t_OrekitException::wrap_Object(result);
          }

          static PyObject *t_StreamMonitor_run(t_StreamMonitor *self)
          {
            OBJ_CALL(self->object.run());
            Py_RETURN_NONE;
          }

          static PyObject *t_StreamMonitor_stopMonitoring(t_StreamMonitor *self)
          {
            OBJ_CALL(self->object.stopMonitoring());
            Py_RETURN_NONE;
          }

          static PyObject *t_StreamMonitor_get__exception(t_StreamMonitor *self, void *data)
          {
            ::org::orekit::errors::OrekitException value((jobject) NULL);
            OBJ_CALL(value = self->object.getException());
            return ::org::orekit::errors::t_OrekitException::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonFieldAbstractPropagator.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldAbstractPropagator::class$ = NULL;
      jmethodID *PythonFieldAbstractPropagator::mids$ = NULL;
      bool PythonFieldAbstractPropagator::live$ = false;

      jclass PythonFieldAbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldAbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_addEventDetector_1843b26af41f9c8e] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_7ae3461a92a43152] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEphemerisGenerator_a9ea70419e870eb4] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_cfcfd130f9013e3e] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_propagate_195e701ebc75aca3] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldAbstractPropagator::PythonFieldAbstractPropagator(const ::org::hipparchus::Field & a0) : ::org::orekit::propagation::FieldAbstractPropagator(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

      void PythonFieldAbstractPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonFieldAbstractPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonFieldAbstractPropagator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonFieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAbstractPropagator_of_(t_PythonFieldAbstractPropagator *self, PyObject *args);
      static int t_PythonFieldAbstractPropagator_init_(t_PythonFieldAbstractPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldAbstractPropagator_finalize(t_PythonFieldAbstractPropagator *self);
      static PyObject *t_PythonFieldAbstractPropagator_pythonExtension(t_PythonFieldAbstractPropagator *self, PyObject *args);
      static void JNICALL t_PythonFieldAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldAbstractPropagator_get__self(t_PythonFieldAbstractPropagator *self, void *data);
      static PyObject *t_PythonFieldAbstractPropagator_get__parameters_(t_PythonFieldAbstractPropagator *self, void *data);
      static PyGetSetDef t_PythonFieldAbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldAbstractPropagator, self),
        DECLARE_GET_FIELD(t_PythonFieldAbstractPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldAbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldAbstractPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractPropagator)[] = {
        { Py_tp_methods, t_PythonFieldAbstractPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldAbstractPropagator_init_ },
        { Py_tp_getset, t_PythonFieldAbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::FieldAbstractPropagator),
        NULL
      };

      DEFINE_TYPE(PythonFieldAbstractPropagator, t_PythonFieldAbstractPropagator, PythonFieldAbstractPropagator);
      PyObject *t_PythonFieldAbstractPropagator::wrap_Object(const PythonFieldAbstractPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAbstractPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAbstractPropagator *self = (t_PythonFieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldAbstractPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAbstractPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAbstractPropagator *self = (t_PythonFieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldAbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldAbstractPropagator), &PY_TYPE_DEF(PythonFieldAbstractPropagator), module, "PythonFieldAbstractPropagator", 1);
      }

      void t_PythonFieldAbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractPropagator), "class_", make_descriptor(PythonFieldAbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractPropagator), "wrapfn_", make_descriptor(t_PythonFieldAbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldAbstractPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldAbstractPropagator_addEventDetector0 },
          { "clearEventsDetectors", "()V", (void *) t_PythonFieldAbstractPropagator_clearEventsDetectors1 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;", (void *) t_PythonFieldAbstractPropagator_getEphemerisGenerator2 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonFieldAbstractPropagator_getEventsDetectors3 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldAbstractPropagator_propagate4 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractPropagator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonFieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldAbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldAbstractPropagator::wrap_Object(PythonFieldAbstractPropagator(((t_PythonFieldAbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldAbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldAbstractPropagator_of_(t_PythonFieldAbstractPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldAbstractPropagator_init_(t_PythonFieldAbstractPropagator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        PythonFieldAbstractPropagator object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          INT_CALL(object = PythonFieldAbstractPropagator(a0));
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

      static PyObject *t_PythonFieldAbstractPropagator_finalize(t_PythonFieldAbstractPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldAbstractPropagator_pythonExtension(t_PythonFieldAbstractPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonFieldAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonFieldAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldEphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonFieldAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonFieldAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonFieldAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldAbstractPropagator::mids$[PythonFieldAbstractPropagator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldAbstractPropagator_get__self(t_PythonFieldAbstractPropagator *self, void *data)
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
      static PyObject *t_PythonFieldAbstractPropagator_get__parameters_(t_PythonFieldAbstractPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldIntegratedEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/propagation/integration/FieldStateMapper.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/ode/FieldDenseOutputModel.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldIntegratedEphemeris::class$ = NULL;
        jmethodID *FieldIntegratedEphemeris::mids$ = NULL;
        bool FieldIntegratedEphemeris::live$ = false;

        jclass FieldIntegratedEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldIntegratedEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17e9d8e90cccc843] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/integration/FieldStateMapper;Lorg/orekit/propagation/PropagationType;Lorg/hipparchus/ode/FieldDenseOutputModel;Lorg/orekit/utils/FieldArrayDictionary;Ljava/util/List;[Ljava/lang/String;[I)V");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialState_a553824829fc2514] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getMaxDate_09b0a926600dfc14] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getMinDate_09b0a926600dfc14] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getPVCoordinates_0e277b7d6a64b75a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_resetInitialState_52154b94d63e10ed] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_getMass_7bc0fd76ee915b72] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_resetIntermediateState_c76342d42407aa3d] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
            mids$[mid_propagateOrbit_edf76d94987be4ff] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
            mids$[mid_basicPropagate_85b5a3e9101d7c1f] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_updateAdditionalStates_db7b9ef879f5b135] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldIntegratedEphemeris::FieldIntegratedEphemeris(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::orekit::propagation::integration::FieldStateMapper & a3, const ::org::orekit::propagation::PropagationType & a4, const ::org::hipparchus::ode::FieldDenseOutputModel & a5, const ::org::orekit::utils::FieldArrayDictionary & a6, const ::java::util::List & a7, const JArray< ::java::lang::String > & a8, const JArray< jint > & a9) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_17e9d8e90cccc843, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

        ::org::orekit::frames::Frame FieldIntegratedEphemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldIntegratedEphemeris::getInitialState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_a553824829fc2514]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldIntegratedEphemeris::getMaxDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_09b0a926600dfc14]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldIntegratedEphemeris::getMinDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_09b0a926600dfc14]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldIntegratedEphemeris::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_0e277b7d6a64b75a], a0.this$, a1.this$));
        }

        ::java::util::List FieldIntegratedEphemeris::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
        }

        void FieldIntegratedEphemeris::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_52154b94d63e10ed], a0.this$);
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
      namespace integration {
        static PyObject *t_FieldIntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldIntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldIntegratedEphemeris_of_(t_FieldIntegratedEphemeris *self, PyObject *args);
        static int t_FieldIntegratedEphemeris_init_(t_FieldIntegratedEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldIntegratedEphemeris_getFrame(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_getInitialState(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_getMaxDate(t_FieldIntegratedEphemeris *self);
        static PyObject *t_FieldIntegratedEphemeris_getMinDate(t_FieldIntegratedEphemeris *self);
        static PyObject *t_FieldIntegratedEphemeris_getPVCoordinates(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_getParametersDrivers(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_resetInitialState(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_get__frame(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__initialState(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__maxDate(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__minDate(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__parametersDrivers(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__parameters_(t_FieldIntegratedEphemeris *self, void *data);
        static PyGetSetDef t_FieldIntegratedEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, frame),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, initialState),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, maxDate),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, minDate),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, parametersDrivers),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldIntegratedEphemeris__methods_[] = {
          DECLARE_METHOD(t_FieldIntegratedEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldIntegratedEphemeris)[] = {
          { Py_tp_methods, t_FieldIntegratedEphemeris__methods_ },
          { Py_tp_init, (void *) t_FieldIntegratedEphemeris_init_ },
          { Py_tp_getset, t_FieldIntegratedEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldIntegratedEphemeris)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(FieldIntegratedEphemeris, t_FieldIntegratedEphemeris, FieldIntegratedEphemeris);
        PyObject *t_FieldIntegratedEphemeris::wrap_Object(const FieldIntegratedEphemeris& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldIntegratedEphemeris::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldIntegratedEphemeris *self = (t_FieldIntegratedEphemeris *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldIntegratedEphemeris::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldIntegratedEphemeris::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldIntegratedEphemeris *self = (t_FieldIntegratedEphemeris *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldIntegratedEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldIntegratedEphemeris), &PY_TYPE_DEF(FieldIntegratedEphemeris), module, "FieldIntegratedEphemeris", 0);
        }

        void t_FieldIntegratedEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldIntegratedEphemeris), "class_", make_descriptor(FieldIntegratedEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldIntegratedEphemeris), "wrapfn_", make_descriptor(t_FieldIntegratedEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldIntegratedEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldIntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldIntegratedEphemeris::initializeClass, 1)))
            return NULL;
          return t_FieldIntegratedEphemeris::wrap_Object(FieldIntegratedEphemeris(((t_FieldIntegratedEphemeris *) arg)->object.this$));
        }
        static PyObject *t_FieldIntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldIntegratedEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldIntegratedEphemeris_of_(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldIntegratedEphemeris_init_(t_FieldIntegratedEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::propagation::integration::FieldStateMapper a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::propagation::PropagationType a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::ode::FieldDenseOutputModel a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::orekit::utils::FieldArrayDictionary a6((jobject) NULL);
          PyTypeObject **p6;
          ::java::util::List a7((jobject) NULL);
          PyTypeObject **p7;
          JArray< ::java::lang::String > a8((jobject) NULL);
          JArray< jint > a9((jobject) NULL);
          FieldIntegratedEphemeris object((jobject) NULL);

          if (!parseArgs(args, "KKKKKKKK[s[I", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::propagation::integration::FieldStateMapper::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::ode::FieldDenseOutputModel::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::orekit::propagation::integration::t_FieldStateMapper::parameters_, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5, &p5, ::org::hipparchus::ode::t_FieldDenseOutputModel::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldArrayDictionary::parameters_, &a7, &p7, ::java::util::t_List::parameters_, &a8, &a9))
          {
            INT_CALL(object = FieldIntegratedEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldIntegratedEphemeris_getFrame(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "getFrame", args, 2);
        }

        static PyObject *t_FieldIntegratedEphemeris_getInitialState(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_FieldIntegratedEphemeris_getMaxDate(t_FieldIntegratedEphemeris *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldIntegratedEphemeris_getMinDate(t_FieldIntegratedEphemeris *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldIntegratedEphemeris_getPVCoordinates(t_FieldIntegratedEphemeris *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_FieldIntegratedEphemeris_getParametersDrivers(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_FieldIntegratedEphemeris_resetInitialState(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "resetInitialState", args, 2);
        }
        static PyObject *t_FieldIntegratedEphemeris_get__parameters_(t_FieldIntegratedEphemeris *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldIntegratedEphemeris_get__frame(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_FieldIntegratedEphemeris_get__initialState(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }

        static PyObject *t_FieldIntegratedEphemeris_get__maxDate(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldIntegratedEphemeris_get__minDate(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldIntegratedEphemeris_get__parametersDrivers(t_FieldIntegratedEphemeris *self, void *data)
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
#include "org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PolygonalFieldOfView$DefiningConeType::class$ = NULL;
        jmethodID *PolygonalFieldOfView$DefiningConeType::mids$ = NULL;
        bool PolygonalFieldOfView$DefiningConeType::live$ = false;
        PolygonalFieldOfView$DefiningConeType *PolygonalFieldOfView$DefiningConeType::INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE = NULL;
        PolygonalFieldOfView$DefiningConeType *PolygonalFieldOfView$DefiningConeType::OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES = NULL;

        jclass PolygonalFieldOfView$DefiningConeType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_c24b17e2e4ff38b2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;");
            mids$[mid_values_e3d0bc04428a5ff9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;");
            mids$[mid_verticesRadius_bcad94b64f1e2dd8] = env->getMethodID(cls, "verticesRadius", "(DI)D");
            mids$[mid_createVertex_a247ba58761abda9] = env->getMethodID(cls, "createVertex", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DI)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE = new PolygonalFieldOfView$DefiningConeType(env->getStaticObjectField(cls, "INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE", "Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;"));
            OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES = new PolygonalFieldOfView$DefiningConeType(env->getStaticObjectField(cls, "OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES", "Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolygonalFieldOfView$DefiningConeType PolygonalFieldOfView$DefiningConeType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return PolygonalFieldOfView$DefiningConeType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c24b17e2e4ff38b2], a0.this$));
        }

        JArray< PolygonalFieldOfView$DefiningConeType > PolygonalFieldOfView$DefiningConeType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< PolygonalFieldOfView$DefiningConeType >(env->callStaticObjectMethod(cls, mids$[mid_values_e3d0bc04428a5ff9]));
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
    namespace geometry {
      namespace fov {
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_of_(t_PolygonalFieldOfView$DefiningConeType *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_values(PyTypeObject *type);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_get__parameters_(t_PolygonalFieldOfView$DefiningConeType *self, void *data);
        static PyGetSetDef t_PolygonalFieldOfView$DefiningConeType__fields_[] = {
          DECLARE_GET_FIELD(t_PolygonalFieldOfView$DefiningConeType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolygonalFieldOfView$DefiningConeType__methods_[] = {
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, of_, METH_VARARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolygonalFieldOfView$DefiningConeType)[] = {
          { Py_tp_methods, t_PolygonalFieldOfView$DefiningConeType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PolygonalFieldOfView$DefiningConeType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolygonalFieldOfView$DefiningConeType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(PolygonalFieldOfView$DefiningConeType, t_PolygonalFieldOfView$DefiningConeType, PolygonalFieldOfView$DefiningConeType);
        PyObject *t_PolygonalFieldOfView$DefiningConeType::wrap_Object(const PolygonalFieldOfView$DefiningConeType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PolygonalFieldOfView$DefiningConeType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PolygonalFieldOfView$DefiningConeType *self = (t_PolygonalFieldOfView$DefiningConeType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PolygonalFieldOfView$DefiningConeType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PolygonalFieldOfView$DefiningConeType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PolygonalFieldOfView$DefiningConeType *self = (t_PolygonalFieldOfView$DefiningConeType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PolygonalFieldOfView$DefiningConeType::install(PyObject *module)
        {
          installType(&PY_TYPE(PolygonalFieldOfView$DefiningConeType), &PY_TYPE_DEF(PolygonalFieldOfView$DefiningConeType), module, "PolygonalFieldOfView$DefiningConeType", 0);
        }

        void t_PolygonalFieldOfView$DefiningConeType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "class_", make_descriptor(PolygonalFieldOfView$DefiningConeType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "wrapfn_", make_descriptor(t_PolygonalFieldOfView$DefiningConeType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "boxfn_", make_descriptor(boxObject));
          env->getClass(PolygonalFieldOfView$DefiningConeType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE", make_descriptor(t_PolygonalFieldOfView$DefiningConeType::wrap_Object(*PolygonalFieldOfView$DefiningConeType::INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES", make_descriptor(t_PolygonalFieldOfView$DefiningConeType::wrap_Object(*PolygonalFieldOfView$DefiningConeType::OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES)));
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolygonalFieldOfView$DefiningConeType::initializeClass, 1)))
            return NULL;
          return t_PolygonalFieldOfView$DefiningConeType::wrap_Object(PolygonalFieldOfView$DefiningConeType(((t_PolygonalFieldOfView$DefiningConeType *) arg)->object.this$));
        }
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolygonalFieldOfView$DefiningConeType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_of_(t_PolygonalFieldOfView$DefiningConeType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          PolygonalFieldOfView$DefiningConeType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType::valueOf(a0));
            return t_PolygonalFieldOfView$DefiningConeType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_values(PyTypeObject *type)
        {
          JArray< PolygonalFieldOfView$DefiningConeType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType::values());
          return JArray<jobject>(result.this$).wrap(t_PolygonalFieldOfView$DefiningConeType::wrap_jobject);
        }
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_get__parameters_(t_PolygonalFieldOfView$DefiningConeType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldContinueOnEvent.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldContinueOnEvent::class$ = NULL;
          jmethodID *FieldContinueOnEvent::mids$ = NULL;
          bool FieldContinueOnEvent::live$ = false;

          jclass FieldContinueOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldContinueOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_9bc9ae10f590e312] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldContinueOnEvent::FieldContinueOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::org::hipparchus::ode::events::Action FieldContinueOnEvent::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_9bc9ae10f590e312], a0.this$, a1.this$, a2));
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
      namespace events {
        namespace handlers {
          static PyObject *t_FieldContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldContinueOnEvent_of_(t_FieldContinueOnEvent *self, PyObject *args);
          static int t_FieldContinueOnEvent_init_(t_FieldContinueOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldContinueOnEvent_eventOccurred(t_FieldContinueOnEvent *self, PyObject *args);
          static PyObject *t_FieldContinueOnEvent_get__parameters_(t_FieldContinueOnEvent *self, void *data);
          static PyGetSetDef t_FieldContinueOnEvent__fields_[] = {
            DECLARE_GET_FIELD(t_FieldContinueOnEvent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldContinueOnEvent__methods_[] = {
            DECLARE_METHOD(t_FieldContinueOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldContinueOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldContinueOnEvent, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldContinueOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldContinueOnEvent)[] = {
            { Py_tp_methods, t_FieldContinueOnEvent__methods_ },
            { Py_tp_init, (void *) t_FieldContinueOnEvent_init_ },
            { Py_tp_getset, t_FieldContinueOnEvent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldContinueOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldContinueOnEvent, t_FieldContinueOnEvent, FieldContinueOnEvent);
          PyObject *t_FieldContinueOnEvent::wrap_Object(const FieldContinueOnEvent& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldContinueOnEvent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldContinueOnEvent *self = (t_FieldContinueOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldContinueOnEvent::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldContinueOnEvent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldContinueOnEvent *self = (t_FieldContinueOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldContinueOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldContinueOnEvent), &PY_TYPE_DEF(FieldContinueOnEvent), module, "FieldContinueOnEvent", 0);
          }

          void t_FieldContinueOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinueOnEvent), "class_", make_descriptor(FieldContinueOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinueOnEvent), "wrapfn_", make_descriptor(t_FieldContinueOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinueOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldContinueOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldContinueOnEvent::initializeClass, 1)))
              return NULL;
            return t_FieldContinueOnEvent::wrap_Object(FieldContinueOnEvent(((t_FieldContinueOnEvent *) arg)->object.this$));
          }
          static PyObject *t_FieldContinueOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldContinueOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldContinueOnEvent_of_(t_FieldContinueOnEvent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldContinueOnEvent_init_(t_FieldContinueOnEvent *self, PyObject *args, PyObject *kwds)
          {
            FieldContinueOnEvent object((jobject) NULL);

            INT_CALL(object = FieldContinueOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldContinueOnEvent_eventOccurred(t_FieldContinueOnEvent *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
          static PyObject *t_FieldContinueOnEvent_get__parameters_(t_FieldContinueOnEvent *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
