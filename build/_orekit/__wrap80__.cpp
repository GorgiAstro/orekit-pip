#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *SpacecraftBodyFrame::class$ = NULL;
          jmethodID *SpacecraftBodyFrame::mids$ = NULL;
          bool SpacecraftBodyFrame::live$ = false;

          jclass SpacecraftBodyFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/SpacecraftBodyFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_40d75591f89fe998] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;Ljava/lang/String;)V");
              mids$[mid_getBaseEquipment_ce608231a5023651] = env->getMethodID(cls, "getBaseEquipment", "()Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;");
              mids$[mid_getLabel_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLabel", "()Ljava/lang/String;");
              mids$[mid_parse_c326f8351fe0822f] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;");
              mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SpacecraftBodyFrame::SpacecraftBodyFrame(const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_40d75591f89fe998, a0.this$, a1.this$)) {}

          ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment SpacecraftBodyFrame::getBaseEquipment() const
          {
            return ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment(env->callObjectMethod(this$, mids$[mid_getBaseEquipment_ce608231a5023651]));
          }

          ::java::lang::String SpacecraftBodyFrame::getLabel() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLabel_1c1fa1e935d6cdcf]));
          }

          SpacecraftBodyFrame SpacecraftBodyFrame::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SpacecraftBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_parse_c326f8351fe0822f], a0.this$));
          }

          ::java::lang::String SpacecraftBodyFrame::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
        namespace definitions {
          static PyObject *t_SpacecraftBodyFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SpacecraftBodyFrame_init_(t_SpacecraftBodyFrame *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SpacecraftBodyFrame_getBaseEquipment(t_SpacecraftBodyFrame *self);
          static PyObject *t_SpacecraftBodyFrame_getLabel(t_SpacecraftBodyFrame *self);
          static PyObject *t_SpacecraftBodyFrame_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame_toString(t_SpacecraftBodyFrame *self, PyObject *args);
          static PyObject *t_SpacecraftBodyFrame_get__baseEquipment(t_SpacecraftBodyFrame *self, void *data);
          static PyObject *t_SpacecraftBodyFrame_get__label(t_SpacecraftBodyFrame *self, void *data);
          static PyGetSetDef t_SpacecraftBodyFrame__fields_[] = {
            DECLARE_GET_FIELD(t_SpacecraftBodyFrame, baseEquipment),
            DECLARE_GET_FIELD(t_SpacecraftBodyFrame, label),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SpacecraftBodyFrame__methods_[] = {
            DECLARE_METHOD(t_SpacecraftBodyFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, getBaseEquipment, METH_NOARGS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, getLabel, METH_NOARGS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, parse, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SpacecraftBodyFrame)[] = {
            { Py_tp_methods, t_SpacecraftBodyFrame__methods_ },
            { Py_tp_init, (void *) t_SpacecraftBodyFrame_init_ },
            { Py_tp_getset, t_SpacecraftBodyFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SpacecraftBodyFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SpacecraftBodyFrame, t_SpacecraftBodyFrame, SpacecraftBodyFrame);

          void t_SpacecraftBodyFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(SpacecraftBodyFrame), &PY_TYPE_DEF(SpacecraftBodyFrame), module, "SpacecraftBodyFrame", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame), "BaseEquipment", make_descriptor(&PY_TYPE_DEF(SpacecraftBodyFrame$BaseEquipment)));
          }

          void t_SpacecraftBodyFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame), "class_", make_descriptor(SpacecraftBodyFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame), "wrapfn_", make_descriptor(t_SpacecraftBodyFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SpacecraftBodyFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SpacecraftBodyFrame::initializeClass, 1)))
              return NULL;
            return t_SpacecraftBodyFrame::wrap_Object(SpacecraftBodyFrame(((t_SpacecraftBodyFrame *) arg)->object.this$));
          }
          static PyObject *t_SpacecraftBodyFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SpacecraftBodyFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SpacecraftBodyFrame_init_(t_SpacecraftBodyFrame *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::String a1((jobject) NULL);
            SpacecraftBodyFrame object((jobject) NULL);

            if (!parseArgs(args, "Ks", ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame$BaseEquipment::parameters_, &a1))
            {
              INT_CALL(object = SpacecraftBodyFrame(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SpacecraftBodyFrame_getBaseEquipment(t_SpacecraftBodyFrame *self)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment result((jobject) NULL);
            OBJ_CALL(result = self->object.getBaseEquipment());
            return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(result);
          }

          static PyObject *t_SpacecraftBodyFrame_getLabel(t_SpacecraftBodyFrame *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLabel());
            return j2p(result);
          }

          static PyObject *t_SpacecraftBodyFrame_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            SpacecraftBodyFrame result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::parse(a0));
              return t_SpacecraftBodyFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_SpacecraftBodyFrame_toString(t_SpacecraftBodyFrame *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(SpacecraftBodyFrame), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_SpacecraftBodyFrame_get__baseEquipment(t_SpacecraftBodyFrame *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment value((jobject) NULL);
            OBJ_CALL(value = self->object.getBaseEquipment());
            return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(value);
          }

          static PyObject *t_SpacecraftBodyFrame_get__label(t_SpacecraftBodyFrame *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLabel());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/PythonInterpolationGrid.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *PythonInterpolationGrid::class$ = NULL;
            jmethodID *PythonInterpolationGrid::mids$ = NULL;
            bool PythonInterpolationGrid::live$ = false;

            jclass PythonInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/PythonInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getGridPoints_eaf2da2173f3569e] = env->getMethodID(cls, "getGridPoints", "(DD)[D");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonInterpolationGrid::PythonInterpolationGrid() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void PythonInterpolationGrid::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonInterpolationGrid::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonInterpolationGrid::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          namespace utilities {
            static PyObject *t_PythonInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonInterpolationGrid_init_(t_PythonInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonInterpolationGrid_finalize(t_PythonInterpolationGrid *self);
            static PyObject *t_PythonInterpolationGrid_pythonExtension(t_PythonInterpolationGrid *self, PyObject *args);
            static jobject JNICALL t_PythonInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
            static void JNICALL t_PythonInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonInterpolationGrid_get__self(t_PythonInterpolationGrid *self, void *data);
            static PyGetSetDef t_PythonInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_PythonInterpolationGrid, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_PythonInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonInterpolationGrid, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonInterpolationGrid, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonInterpolationGrid)[] = {
              { Py_tp_methods, t_PythonInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_PythonInterpolationGrid_init_ },
              { Py_tp_getset, t_PythonInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonInterpolationGrid, t_PythonInterpolationGrid, PythonInterpolationGrid);

            void t_PythonInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonInterpolationGrid), &PY_TYPE_DEF(PythonInterpolationGrid), module, "PythonInterpolationGrid", 1);
            }

            void t_PythonInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonInterpolationGrid), "class_", make_descriptor(PythonInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonInterpolationGrid), "wrapfn_", make_descriptor(t_PythonInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonInterpolationGrid), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonInterpolationGrid::initializeClass);
              JNINativeMethod methods[] = {
                { "getGridPoints", "(DD)[D", (void *) t_PythonInterpolationGrid_getGridPoints0 },
                { "pythonDecRef", "()V", (void *) t_PythonInterpolationGrid_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_PythonInterpolationGrid::wrap_Object(PythonInterpolationGrid(((t_PythonInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_PythonInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonInterpolationGrid_init_(t_PythonInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              PythonInterpolationGrid object((jobject) NULL);

              INT_CALL(object = PythonInterpolationGrid());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonInterpolationGrid_finalize(t_PythonInterpolationGrid *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonInterpolationGrid_pythonExtension(t_PythonInterpolationGrid *self, PyObject *args)
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

            static jobject JNICALL t_PythonInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonInterpolationGrid::mids$[PythonInterpolationGrid::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getGridPoints", "dd", (double) a0, (double) a1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getGridPoints", result);
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

            static void JNICALL t_PythonInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonInterpolationGrid::mids$[PythonInterpolationGrid::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonInterpolationGrid::mids$[PythonInterpolationGrid::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonInterpolationGrid_get__self(t_PythonInterpolationGrid *self, void *data)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryState.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryState::class$ = NULL;
              jmethodID *TrajectoryState::mids$ = NULL;
              bool TrajectoryState::live$ = false;

              jclass TrajectoryState::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryState");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_33b7b7a0b78ae098] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;Lorg/orekit/time/AbsoluteDate;[D)V");
                  mids$[mid_init$_2805503b28821c62] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;ILjava/util/List;)V");
                  mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getElements_25e1757a36c4dde2] = env->getMethodID(cls, "getElements", "()[D");
                  mids$[mid_getType_4eb559a63ad8d46d] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_toCartesian_a2e5e6bb15eb66c5] = env->getMethodID(cls, "toCartesian", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)Lorg/orekit/utils/TimeStampedPVCoordinates;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              TrajectoryState::TrajectoryState(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_33b7b7a0b78ae098, a0.this$, a1.this$, a2.this$)) {}

              TrajectoryState::TrajectoryState(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< ::java::lang::String > & a2, jint a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2805503b28821c62, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

              ::org::orekit::utils::CartesianDerivativesFilter TrajectoryState::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_63bfdcc4b7a0536c]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryState::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
              }

              JArray< jdouble > TrajectoryState::getElements() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getElements_25e1757a36c4dde2]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType TrajectoryState::getType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getType_4eb559a63ad8d46d]));
              }

              ::org::orekit::utils::TimeStampedPVCoordinates TrajectoryState::toCartesian(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) const
              {
                return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toCartesian_a2e5e6bb15eb66c5], a0.this$, a1));
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
              static PyObject *t_TrajectoryState_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryState_instance_(PyTypeObject *type, PyObject *arg);
              static int t_TrajectoryState_init_(t_TrajectoryState *self, PyObject *args, PyObject *kwds);
              static PyObject *t_TrajectoryState_getAvailableDerivatives(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_getDate(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_getElements(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_getType(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_toCartesian(t_TrajectoryState *self, PyObject *args);
              static PyObject *t_TrajectoryState_get__availableDerivatives(t_TrajectoryState *self, void *data);
              static PyObject *t_TrajectoryState_get__date(t_TrajectoryState *self, void *data);
              static PyObject *t_TrajectoryState_get__elements(t_TrajectoryState *self, void *data);
              static PyObject *t_TrajectoryState_get__type(t_TrajectoryState *self, void *data);
              static PyGetSetDef t_TrajectoryState__fields_[] = {
                DECLARE_GET_FIELD(t_TrajectoryState, availableDerivatives),
                DECLARE_GET_FIELD(t_TrajectoryState, date),
                DECLARE_GET_FIELD(t_TrajectoryState, elements),
                DECLARE_GET_FIELD(t_TrajectoryState, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryState__methods_[] = {
                DECLARE_METHOD(t_TrajectoryState, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryState, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryState, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, getDate, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, getElements, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, getType, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, toCartesian, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryState)[] = {
                { Py_tp_methods, t_TrajectoryState__methods_ },
                { Py_tp_init, (void *) t_TrajectoryState_init_ },
                { Py_tp_getset, t_TrajectoryState__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryState)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(TrajectoryState, t_TrajectoryState, TrajectoryState);

              void t_TrajectoryState::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryState), &PY_TYPE_DEF(TrajectoryState), module, "TrajectoryState", 0);
              }

              void t_TrajectoryState::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryState), "class_", make_descriptor(TrajectoryState::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryState), "wrapfn_", make_descriptor(t_TrajectoryState::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryState), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_TrajectoryState_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryState::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryState::wrap_Object(TrajectoryState(((t_TrajectoryState *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryState_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryState::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_TrajectoryState_init_(t_TrajectoryState *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 3:
                  {
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                    JArray< jdouble > a2((jobject) NULL);
                    TrajectoryState object((jobject) NULL);

                    if (!parseArgs(args, "Kk[D", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_, &a1, &a2))
                    {
                      INT_CALL(object = TrajectoryState(a0, a1, a2));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 5:
                  {
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                    JArray< ::java::lang::String > a2((jobject) NULL);
                    jint a3;
                    ::java::util::List a4((jobject) NULL);
                    PyTypeObject **p4;
                    TrajectoryState object((jobject) NULL);

                    if (!parseArgs(args, "Kk[sIK", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
                    {
                      INT_CALL(object = TrajectoryState(a0, a1, a2, a3, a4));
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

              static PyObject *t_TrajectoryState_getAvailableDerivatives(t_TrajectoryState *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_TrajectoryState_getDate(t_TrajectoryState *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryState_getElements(t_TrajectoryState *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getElements());
                return result.wrap();
              }

              static PyObject *t_TrajectoryState_getType(t_TrajectoryState *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_TrajectoryState_toCartesian(t_TrajectoryState *self, PyObject *args)
              {
                ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
                jdouble a1;
                ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.toCartesian(a0, a1));
                  return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toCartesian", args);
                return NULL;
              }

              static PyObject *t_TrajectoryState_get__availableDerivatives(t_TrajectoryState *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_TrajectoryState_get__date(t_TrajectoryState *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_TrajectoryState_get__elements(t_TrajectoryState *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getElements());
                return value.wrap();
              }

              static PyObject *t_TrajectoryState_get__type(t_TrajectoryState *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(value);
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
#include "org/hipparchus/ode/FieldSecondaryODE.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldSecondaryODE::class$ = NULL;
      jmethodID *FieldSecondaryODE::mids$ = NULL;
      bool FieldSecondaryODE::live$ = false;

      jclass FieldSecondaryODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldSecondaryODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_226dad2f7657bb74] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_a78229e29499bff3] = env->getMethodID(cls, "init", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldSecondaryODE::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_226dad2f7657bb74], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      jint FieldSecondaryODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      void FieldSecondaryODE::init(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_init_a78229e29499bff3], a0.this$, a1.this$, a2.this$, a3.this$);
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
      static PyObject *t_FieldSecondaryODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSecondaryODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSecondaryODE_of_(t_FieldSecondaryODE *self, PyObject *args);
      static PyObject *t_FieldSecondaryODE_computeDerivatives(t_FieldSecondaryODE *self, PyObject *args);
      static PyObject *t_FieldSecondaryODE_getDimension(t_FieldSecondaryODE *self);
      static PyObject *t_FieldSecondaryODE_init(t_FieldSecondaryODE *self, PyObject *args);
      static PyObject *t_FieldSecondaryODE_get__dimension(t_FieldSecondaryODE *self, void *data);
      static PyObject *t_FieldSecondaryODE_get__parameters_(t_FieldSecondaryODE *self, void *data);
      static PyGetSetDef t_FieldSecondaryODE__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSecondaryODE, dimension),
        DECLARE_GET_FIELD(t_FieldSecondaryODE, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSecondaryODE__methods_[] = {
        DECLARE_METHOD(t_FieldSecondaryODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSecondaryODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSecondaryODE, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSecondaryODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldSecondaryODE, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldSecondaryODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSecondaryODE)[] = {
        { Py_tp_methods, t_FieldSecondaryODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldSecondaryODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSecondaryODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSecondaryODE, t_FieldSecondaryODE, FieldSecondaryODE);
      PyObject *t_FieldSecondaryODE::wrap_Object(const FieldSecondaryODE& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSecondaryODE::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSecondaryODE *self = (t_FieldSecondaryODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSecondaryODE::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSecondaryODE::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSecondaryODE *self = (t_FieldSecondaryODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSecondaryODE::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSecondaryODE), &PY_TYPE_DEF(FieldSecondaryODE), module, "FieldSecondaryODE", 0);
      }

      void t_FieldSecondaryODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSecondaryODE), "class_", make_descriptor(FieldSecondaryODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSecondaryODE), "wrapfn_", make_descriptor(t_FieldSecondaryODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSecondaryODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSecondaryODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSecondaryODE::initializeClass, 1)))
          return NULL;
        return t_FieldSecondaryODE::wrap_Object(FieldSecondaryODE(((t_FieldSecondaryODE *) arg)->object.this$));
      }
      static PyObject *t_FieldSecondaryODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSecondaryODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSecondaryODE_of_(t_FieldSecondaryODE *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldSecondaryODE_computeDerivatives(t_FieldSecondaryODE *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;
        JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
        PyTypeObject **p3;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1, a2, a3));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_FieldSecondaryODE_getDimension(t_FieldSecondaryODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldSecondaryODE_init(t_FieldSecondaryODE *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
        PyTypeObject **p3;

        if (!parseArgs(args, "K[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldSecondaryODE_get__parameters_(t_FieldSecondaryODE *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldSecondaryODE_get__dimension(t_FieldSecondaryODE *self, void *data)
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
#include "org/orekit/files/rinex/observation/RinexObservation.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/RinexObservationHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservation::class$ = NULL;
          jmethodID *RinexObservation::mids$ = NULL;
          bool RinexObservation::live$ = false;

          jclass RinexObservation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addObservationDataSet_e95b94a72b1c921a] = env->getMethodID(cls, "addObservationDataSet", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_getObservationDataSets_e62d3bb06d56d7e3] = env->getMethodID(cls, "getObservationDataSets", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservation::RinexObservation() : ::org::orekit::files::rinex::RinexFile(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void RinexObservation::addObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addObservationDataSet_e95b94a72b1c921a], a0.this$);
          }

          ::java::util::List RinexObservation::getObservationDataSets() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservationDataSets_e62d3bb06d56d7e3]));
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
          static PyObject *t_RinexObservation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservation_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservation_of_(t_RinexObservation *self, PyObject *args);
          static int t_RinexObservation_init_(t_RinexObservation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservation_addObservationDataSet(t_RinexObservation *self, PyObject *arg);
          static PyObject *t_RinexObservation_getObservationDataSets(t_RinexObservation *self);
          static PyObject *t_RinexObservation_get__observationDataSets(t_RinexObservation *self, void *data);
          static PyObject *t_RinexObservation_get__parameters_(t_RinexObservation *self, void *data);
          static PyGetSetDef t_RinexObservation__fields_[] = {
            DECLARE_GET_FIELD(t_RinexObservation, observationDataSets),
            DECLARE_GET_FIELD(t_RinexObservation, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexObservation__methods_[] = {
            DECLARE_METHOD(t_RinexObservation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservation, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexObservation, addObservationDataSet, METH_O),
            DECLARE_METHOD(t_RinexObservation, getObservationDataSets, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservation)[] = {
            { Py_tp_methods, t_RinexObservation__methods_ },
            { Py_tp_init, (void *) t_RinexObservation_init_ },
            { Py_tp_getset, t_RinexObservation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservation)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::RinexFile),
            NULL
          };

          DEFINE_TYPE(RinexObservation, t_RinexObservation, RinexObservation);
          PyObject *t_RinexObservation::wrap_Object(const RinexObservation& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexObservation::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexObservation *self = (t_RinexObservation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexObservation::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexObservation::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexObservation *self = (t_RinexObservation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexObservation::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservation), &PY_TYPE_DEF(RinexObservation), module, "RinexObservation", 0);
          }

          void t_RinexObservation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservation), "class_", make_descriptor(RinexObservation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservation), "wrapfn_", make_descriptor(t_RinexObservation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexObservation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservation::initializeClass, 1)))
              return NULL;
            return t_RinexObservation::wrap_Object(RinexObservation(((t_RinexObservation *) arg)->object.this$));
          }
          static PyObject *t_RinexObservation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexObservation_of_(t_RinexObservation *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RinexObservation_init_(t_RinexObservation *self, PyObject *args, PyObject *kwds)
          {
            RinexObservation object((jobject) NULL);

            INT_CALL(object = RinexObservation());
            self->object = object;
            self->parameters[0] = ::org::orekit::files::rinex::observation::PY_TYPE(RinexObservationHeader);

            return 0;
          }

          static PyObject *t_RinexObservation_addObservationDataSet(t_RinexObservation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addObservationDataSet(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addObservationDataSet", arg);
            return NULL;
          }

          static PyObject *t_RinexObservation_getObservationDataSets(t_RinexObservation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationDataSets());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ObservationDataSet));
          }
          static PyObject *t_RinexObservation_get__parameters_(t_RinexObservation *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexObservation_get__observationDataSets(t_RinexObservation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationDataSets());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/MultiplexedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/MultiplexedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *MultiplexedMeasurement::class$ = NULL;
        jmethodID *MultiplexedMeasurement::mids$ = NULL;
        bool MultiplexedMeasurement::live$ = false;
        ::java::lang::String *MultiplexedMeasurement::MEASUREMENT_TYPE = NULL;

        jclass MultiplexedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/MultiplexedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0e7c3032c7c93ed3] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_getEstimatedMeasurements_e62d3bb06d56d7e3] = env->getMethodID(cls, "getEstimatedMeasurements", "()Ljava/util/List;");
            mids$[mid_getEstimatedMeasurementsWithoutDerivatives_e62d3bb06d56d7e3] = env->getMethodID(cls, "getEstimatedMeasurementsWithoutDerivatives", "()Ljava/util/List;");
            mids$[mid_getMeasurements_e62d3bb06d56d7e3] = env->getMethodID(cls, "getMeasurements", "()Ljava/util/List;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultiplexedMeasurement::MultiplexedMeasurement(const ::java::util::List & a0) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_0e7c3032c7c93ed3, a0.this$)) {}

        ::java::util::List MultiplexedMeasurement::getEstimatedMeasurements() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurements_e62d3bb06d56d7e3]));
        }

        ::java::util::List MultiplexedMeasurement::getEstimatedMeasurementsWithoutDerivatives() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsWithoutDerivatives_e62d3bb06d56d7e3]));
        }

        ::java::util::List MultiplexedMeasurement::getMeasurements() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getMeasurements_e62d3bb06d56d7e3]));
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
        static PyObject *t_MultiplexedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiplexedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiplexedMeasurement_of_(t_MultiplexedMeasurement *self, PyObject *args);
        static int t_MultiplexedMeasurement_init_(t_MultiplexedMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurements(t_MultiplexedMeasurement *self);
        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self);
        static PyObject *t_MultiplexedMeasurement_getMeasurements(t_MultiplexedMeasurement *self);
        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurements(t_MultiplexedMeasurement *self, void *data);
        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self, void *data);
        static PyObject *t_MultiplexedMeasurement_get__measurements(t_MultiplexedMeasurement *self, void *data);
        static PyObject *t_MultiplexedMeasurement_get__parameters_(t_MultiplexedMeasurement *self, void *data);
        static PyGetSetDef t_MultiplexedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, estimatedMeasurements),
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, estimatedMeasurementsWithoutDerivatives),
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, measurements),
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultiplexedMeasurement__methods_[] = {
          DECLARE_METHOD(t_MultiplexedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiplexedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiplexedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_MultiplexedMeasurement, getEstimatedMeasurements, METH_NOARGS),
          DECLARE_METHOD(t_MultiplexedMeasurement, getEstimatedMeasurementsWithoutDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_MultiplexedMeasurement, getMeasurements, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiplexedMeasurement)[] = {
          { Py_tp_methods, t_MultiplexedMeasurement__methods_ },
          { Py_tp_init, (void *) t_MultiplexedMeasurement_init_ },
          { Py_tp_getset, t_MultiplexedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiplexedMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(MultiplexedMeasurement, t_MultiplexedMeasurement, MultiplexedMeasurement);
        PyObject *t_MultiplexedMeasurement::wrap_Object(const MultiplexedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MultiplexedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MultiplexedMeasurement *self = (t_MultiplexedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MultiplexedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MultiplexedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MultiplexedMeasurement *self = (t_MultiplexedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MultiplexedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiplexedMeasurement), &PY_TYPE_DEF(MultiplexedMeasurement), module, "MultiplexedMeasurement", 0);
        }

        void t_MultiplexedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "class_", make_descriptor(MultiplexedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "wrapfn_", make_descriptor(t_MultiplexedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "boxfn_", make_descriptor(boxObject));
          env->getClass(MultiplexedMeasurement::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "MEASUREMENT_TYPE", make_descriptor(j2p(*MultiplexedMeasurement::MEASUREMENT_TYPE)));
        }

        static PyObject *t_MultiplexedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiplexedMeasurement::initializeClass, 1)))
            return NULL;
          return t_MultiplexedMeasurement::wrap_Object(MultiplexedMeasurement(((t_MultiplexedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_MultiplexedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiplexedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultiplexedMeasurement_of_(t_MultiplexedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MultiplexedMeasurement_init_(t_MultiplexedMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          MultiplexedMeasurement object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = MultiplexedMeasurement(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(MultiplexedMeasurement);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurements(t_MultiplexedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurements());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsWithoutDerivatives());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_MultiplexedMeasurement_getMeasurements(t_MultiplexedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurements());
          return ::java::util::t_List::wrap_Object(result);
        }
        static PyObject *t_MultiplexedMeasurement_get__parameters_(t_MultiplexedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurements(t_MultiplexedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurements());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsWithoutDerivatives());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_MultiplexedMeasurement_get__measurements(t_MultiplexedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurements());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/MultiStartUnivariateOptimizer.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *MultiStartUnivariateOptimizer::class$ = NULL;
        jmethodID *MultiStartUnivariateOptimizer::mids$ = NULL;
        bool MultiStartUnivariateOptimizer::live$ = false;

        jclass MultiStartUnivariateOptimizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/MultiStartUnivariateOptimizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a78c75185c7638d5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/univariate/UnivariateOptimizer;ILorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getOptima_ee0ed3212bd1fad1] = env->getMethodID(cls, "getOptima", "()[Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");
            mids$[mid_optimize_369e9441b694b1bf] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");
            mids$[mid_doOptimize_4a799806e31c160d] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultiStartUnivariateOptimizer::MultiStartUnivariateOptimizer(const ::org::hipparchus::optim::univariate::UnivariateOptimizer & a0, jint a1, const ::org::hipparchus::random::RandomGenerator & a2) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_a78c75185c7638d5, a0.this$, a1, a2.this$)) {}

        jint MultiStartUnivariateOptimizer::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
        }

        JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair > MultiStartUnivariateOptimizer::getOptima() const
        {
          return JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair >(env->callObjectMethod(this$, mids$[mid_getOptima_ee0ed3212bd1fad1]));
        }

        ::org::hipparchus::optim::univariate::UnivariatePointValuePair MultiStartUnivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::univariate::UnivariatePointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_369e9441b694b1bf], a0.this$));
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
      namespace univariate {
        static PyObject *t_MultiStartUnivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiStartUnivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiStartUnivariateOptimizer_of_(t_MultiStartUnivariateOptimizer *self, PyObject *args);
        static int t_MultiStartUnivariateOptimizer_init_(t_MultiStartUnivariateOptimizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultiStartUnivariateOptimizer_getEvaluations(t_MultiStartUnivariateOptimizer *self, PyObject *args);
        static PyObject *t_MultiStartUnivariateOptimizer_getOptima(t_MultiStartUnivariateOptimizer *self);
        static PyObject *t_MultiStartUnivariateOptimizer_optimize(t_MultiStartUnivariateOptimizer *self, PyObject *args);
        static PyObject *t_MultiStartUnivariateOptimizer_get__evaluations(t_MultiStartUnivariateOptimizer *self, void *data);
        static PyObject *t_MultiStartUnivariateOptimizer_get__optima(t_MultiStartUnivariateOptimizer *self, void *data);
        static PyObject *t_MultiStartUnivariateOptimizer_get__parameters_(t_MultiStartUnivariateOptimizer *self, void *data);
        static PyGetSetDef t_MultiStartUnivariateOptimizer__fields_[] = {
          DECLARE_GET_FIELD(t_MultiStartUnivariateOptimizer, evaluations),
          DECLARE_GET_FIELD(t_MultiStartUnivariateOptimizer, optima),
          DECLARE_GET_FIELD(t_MultiStartUnivariateOptimizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultiStartUnivariateOptimizer__methods_[] = {
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, getEvaluations, METH_VARARGS),
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, getOptima, METH_NOARGS),
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, optimize, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiStartUnivariateOptimizer)[] = {
          { Py_tp_methods, t_MultiStartUnivariateOptimizer__methods_ },
          { Py_tp_init, (void *) t_MultiStartUnivariateOptimizer_init_ },
          { Py_tp_getset, t_MultiStartUnivariateOptimizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiStartUnivariateOptimizer)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::univariate::UnivariateOptimizer),
          NULL
        };

        DEFINE_TYPE(MultiStartUnivariateOptimizer, t_MultiStartUnivariateOptimizer, MultiStartUnivariateOptimizer);
        PyObject *t_MultiStartUnivariateOptimizer::wrap_Object(const MultiStartUnivariateOptimizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MultiStartUnivariateOptimizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MultiStartUnivariateOptimizer *self = (t_MultiStartUnivariateOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MultiStartUnivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MultiStartUnivariateOptimizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MultiStartUnivariateOptimizer *self = (t_MultiStartUnivariateOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MultiStartUnivariateOptimizer::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiStartUnivariateOptimizer), &PY_TYPE_DEF(MultiStartUnivariateOptimizer), module, "MultiStartUnivariateOptimizer", 0);
        }

        void t_MultiStartUnivariateOptimizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartUnivariateOptimizer), "class_", make_descriptor(MultiStartUnivariateOptimizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartUnivariateOptimizer), "wrapfn_", make_descriptor(t_MultiStartUnivariateOptimizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartUnivariateOptimizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultiStartUnivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiStartUnivariateOptimizer::initializeClass, 1)))
            return NULL;
          return t_MultiStartUnivariateOptimizer::wrap_Object(MultiStartUnivariateOptimizer(((t_MultiStartUnivariateOptimizer *) arg)->object.this$));
        }
        static PyObject *t_MultiStartUnivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiStartUnivariateOptimizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultiStartUnivariateOptimizer_of_(t_MultiStartUnivariateOptimizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MultiStartUnivariateOptimizer_init_(t_MultiStartUnivariateOptimizer *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::optim::univariate::UnivariateOptimizer a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          ::org::hipparchus::random::RandomGenerator a2((jobject) NULL);
          MultiStartUnivariateOptimizer object((jobject) NULL);

          if (!parseArgs(args, "KIk", ::org::hipparchus::optim::univariate::UnivariateOptimizer::initializeClass, ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &p0, ::org::hipparchus::optim::univariate::t_UnivariateOptimizer::parameters_, &a1, &a2))
          {
            INT_CALL(object = MultiStartUnivariateOptimizer(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MultiStartUnivariateOptimizer_getEvaluations(t_MultiStartUnivariateOptimizer *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEvaluations());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(MultiStartUnivariateOptimizer), (PyObject *) self, "getEvaluations", args, 2);
        }

        static PyObject *t_MultiStartUnivariateOptimizer_getOptima(t_MultiStartUnivariateOptimizer *self)
        {
          JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair > result((jobject) NULL);
          OBJ_CALL(result = self->object.getOptima());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_jobject);
        }

        static PyObject *t_MultiStartUnivariateOptimizer_optimize(t_MultiStartUnivariateOptimizer *self, PyObject *args)
        {
          JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_Object(result);
          }

          return callSuper(PY_TYPE(MultiStartUnivariateOptimizer), (PyObject *) self, "optimize", args, 2);
        }
        static PyObject *t_MultiStartUnivariateOptimizer_get__parameters_(t_MultiStartUnivariateOptimizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MultiStartUnivariateOptimizer_get__evaluations(t_MultiStartUnivariateOptimizer *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_MultiStartUnivariateOptimizer_get__optima(t_MultiStartUnivariateOptimizer *self, void *data)
        {
          JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair > value((jobject) NULL);
          OBJ_CALL(value = self->object.getOptima());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/HelmertTransformation.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *HelmertTransformation::class$ = NULL;
      jmethodID *HelmertTransformation::mids$ = NULL;
      bool HelmertTransformation::live$ = false;

      jclass HelmertTransformation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/HelmertTransformation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_71ab5990605d291d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDDDDDD)V");
          mids$[mid_getEpoch_c325492395d89b24] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getStaticTransform_5f13614b572308e8] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_09ace34b8a3460b2] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_976d4bc81671ce42] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_7a8ca6856fe3fc9e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HelmertTransformation::HelmertTransformation(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_71ab5990605d291d, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12)) {}

      ::org::orekit::time::AbsoluteDate HelmertTransformation::getEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_c325492395d89b24]));
      }

      ::org::orekit::frames::StaticTransform HelmertTransformation::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_5f13614b572308e8], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform HelmertTransformation::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_09ace34b8a3460b2], a0.this$));
      }

      ::org::orekit::frames::Transform HelmertTransformation::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_976d4bc81671ce42], a0.this$));
      }

      ::org::orekit::frames::FieldTransform HelmertTransformation::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_7a8ca6856fe3fc9e], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/frames/HelmertTransformation$Predefined.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_HelmertTransformation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HelmertTransformation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HelmertTransformation_init_(t_HelmertTransformation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HelmertTransformation_getEpoch(t_HelmertTransformation *self);
      static PyObject *t_HelmertTransformation_getStaticTransform(t_HelmertTransformation *self, PyObject *args);
      static PyObject *t_HelmertTransformation_getTransform(t_HelmertTransformation *self, PyObject *args);
      static PyObject *t_HelmertTransformation_get__epoch(t_HelmertTransformation *self, void *data);
      static PyGetSetDef t_HelmertTransformation__fields_[] = {
        DECLARE_GET_FIELD(t_HelmertTransformation, epoch),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HelmertTransformation__methods_[] = {
        DECLARE_METHOD(t_HelmertTransformation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation, getEpoch, METH_NOARGS),
        DECLARE_METHOD(t_HelmertTransformation, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HelmertTransformation)[] = {
        { Py_tp_methods, t_HelmertTransformation__methods_ },
        { Py_tp_init, (void *) t_HelmertTransformation_init_ },
        { Py_tp_getset, t_HelmertTransformation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HelmertTransformation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HelmertTransformation, t_HelmertTransformation, HelmertTransformation);

      void t_HelmertTransformation::install(PyObject *module)
      {
        installType(&PY_TYPE(HelmertTransformation), &PY_TYPE_DEF(HelmertTransformation), module, "HelmertTransformation", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "Predefined", make_descriptor(&PY_TYPE_DEF(HelmertTransformation$Predefined)));
      }

      void t_HelmertTransformation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "class_", make_descriptor(HelmertTransformation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "wrapfn_", make_descriptor(t_HelmertTransformation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HelmertTransformation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HelmertTransformation::initializeClass, 1)))
          return NULL;
        return t_HelmertTransformation::wrap_Object(HelmertTransformation(((t_HelmertTransformation *) arg)->object.this$));
      }
      static PyObject *t_HelmertTransformation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HelmertTransformation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HelmertTransformation_init_(t_HelmertTransformation *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        jdouble a8;
        jdouble a9;
        jdouble a10;
        jdouble a11;
        jdouble a12;
        HelmertTransformation object((jobject) NULL);

        if (!parseArgs(args, "kDDDDDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
        {
          INT_CALL(object = HelmertTransformation(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_HelmertTransformation_getEpoch(t_HelmertTransformation *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_HelmertTransformation_getStaticTransform(t_HelmertTransformation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation_getTransform(t_HelmertTransformation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation_get__epoch(t_HelmertTransformation *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataSource$Opener.h"
#include "java/io/IOException.h"
#include "java/io/Reader.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource$Opener::class$ = NULL;
      jmethodID *DataSource$Opener::mids$ = NULL;
      bool DataSource$Opener::live$ = false;

      jclass DataSource$Opener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource$Opener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_openReaderOnce_b2bc6d3e210c2dd4] = env->getMethodID(cls, "openReaderOnce", "()Ljava/io/Reader;");
          mids$[mid_openStreamOnce_6c37d64ac8173086] = env->getMethodID(cls, "openStreamOnce", "()Ljava/io/InputStream;");
          mids$[mid_rawDataIsBinary_9ab94ac1dc23b105] = env->getMethodID(cls, "rawDataIsBinary", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::io::Reader DataSource$Opener::openReaderOnce() const
      {
        return ::java::io::Reader(env->callObjectMethod(this$, mids$[mid_openReaderOnce_b2bc6d3e210c2dd4]));
      }

      ::java::io::InputStream DataSource$Opener::openStreamOnce() const
      {
        return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_openStreamOnce_6c37d64ac8173086]));
      }

      jboolean DataSource$Opener::rawDataIsBinary() const
      {
        return env->callBooleanMethod(this$, mids$[mid_rawDataIsBinary_9ab94ac1dc23b105]);
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
      static PyObject *t_DataSource$Opener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$Opener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$Opener_openReaderOnce(t_DataSource$Opener *self);
      static PyObject *t_DataSource$Opener_openStreamOnce(t_DataSource$Opener *self);
      static PyObject *t_DataSource$Opener_rawDataIsBinary(t_DataSource$Opener *self);

      static PyMethodDef t_DataSource$Opener__methods_[] = {
        DECLARE_METHOD(t_DataSource$Opener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$Opener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$Opener, openReaderOnce, METH_NOARGS),
        DECLARE_METHOD(t_DataSource$Opener, openStreamOnce, METH_NOARGS),
        DECLARE_METHOD(t_DataSource$Opener, rawDataIsBinary, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource$Opener)[] = {
        { Py_tp_methods, t_DataSource$Opener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource$Opener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource$Opener, t_DataSource$Opener, DataSource$Opener);

      void t_DataSource$Opener::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource$Opener), &PY_TYPE_DEF(DataSource$Opener), module, "DataSource$Opener", 0);
      }

      void t_DataSource$Opener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$Opener), "class_", make_descriptor(DataSource$Opener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$Opener), "wrapfn_", make_descriptor(t_DataSource$Opener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$Opener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource$Opener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource$Opener::initializeClass, 1)))
          return NULL;
        return t_DataSource$Opener::wrap_Object(DataSource$Opener(((t_DataSource$Opener *) arg)->object.this$));
      }
      static PyObject *t_DataSource$Opener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource$Opener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataSource$Opener_openReaderOnce(t_DataSource$Opener *self)
      {
        ::java::io::Reader result((jobject) NULL);
        OBJ_CALL(result = self->object.openReaderOnce());
        return ::java::io::t_Reader::wrap_Object(result);
      }

      static PyObject *t_DataSource$Opener_openStreamOnce(t_DataSource$Opener *self)
      {
        ::java::io::InputStream result((jobject) NULL);
        OBJ_CALL(result = self->object.openStreamOnce());
        return ::java::io::t_InputStream::wrap_Object(result);
      }

      static PyObject *t_DataSource$Opener_rawDataIsBinary(t_DataSource$Opener *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.rawDataIsBinary());
        Py_RETURN_BOOL(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedDoubleHermiteInterpolator.h"
#include "org/orekit/time/TimeStampedDouble.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedDoubleHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedDoubleHermiteInterpolator::mids$ = NULL;
      bool TimeStampedDoubleHermiteInterpolator::live$ = false;

      jclass TimeStampedDoubleHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedDoubleHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_interpolate_18d0053526c9e5d7] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStampedDouble;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedDoubleHermiteInterpolator::TimeStampedDoubleHermiteInterpolator() : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      TimeStampedDoubleHermiteInterpolator::TimeStampedDoubleHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      TimeStampedDoubleHermiteInterpolator::TimeStampedDoubleHermiteInterpolator(jint a0, jdouble a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_of_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedDoubleHermiteInterpolator_init_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_get__parameters_(t_TimeStampedDoubleHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedDoubleHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedDoubleHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedDoubleHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedDoubleHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDoubleHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDoubleHermiteInterpolator, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedDoubleHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedDoubleHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedDoubleHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedDoubleHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedDoubleHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedDoubleHermiteInterpolator, t_TimeStampedDoubleHermiteInterpolator, TimeStampedDoubleHermiteInterpolator);
      PyObject *t_TimeStampedDoubleHermiteInterpolator::wrap_Object(const TimeStampedDoubleHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedDoubleHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedDoubleHermiteInterpolator *self = (t_TimeStampedDoubleHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedDoubleHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedDoubleHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedDoubleHermiteInterpolator *self = (t_TimeStampedDoubleHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedDoubleHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedDoubleHermiteInterpolator), &PY_TYPE_DEF(TimeStampedDoubleHermiteInterpolator), module, "TimeStampedDoubleHermiteInterpolator", 0);
      }

      void t_TimeStampedDoubleHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDoubleHermiteInterpolator), "class_", make_descriptor(TimeStampedDoubleHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDoubleHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedDoubleHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDoubleHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedDoubleHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedDoubleHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedDoubleHermiteInterpolator::wrap_Object(TimeStampedDoubleHermiteInterpolator(((t_TimeStampedDoubleHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedDoubleHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedDoubleHermiteInterpolator_of_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedDoubleHermiteInterpolator_init_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedDoubleHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedDoubleHermiteInterpolator());
            self->object = object;
            self->parameters[0] = ::org::orekit::time::PY_TYPE(TimeStampedDouble);
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedDoubleHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedDoubleHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::time::PY_TYPE(TimeStampedDouble);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            TimeStampedDoubleHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = TimeStampedDoubleHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::time::PY_TYPE(TimeStampedDouble);
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
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_get__parameters_(t_TimeStampedDoubleHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/TimeDependentLOS.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/stream/Stream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *TimeDependentLOS::class$ = NULL;
        jmethodID *TimeDependentLOS::mids$ = NULL;
        bool TimeDependentLOS::live$ = false;

        jclass TimeDependentLOS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/TimeDependentLOS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getLOS_3533789b6b080f9a] = env->getMethodID(cls, "getLOS", "(ILorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLOSDerivatives_567235bef337e7c5] = env->getMethodID(cls, "getLOSDerivatives", "(ILorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getNbPixels_55546ef6a647f39b] = env->getMethodID(cls, "getNbPixels", "()I");
            mids$[mid_getParametersDrivers_14e21bf777ff0ccf] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeDependentLOS::getLOS(jint a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLOS_3533789b6b080f9a], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeDependentLOS::getLOSDerivatives(jint a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getLOSDerivatives_567235bef337e7c5], a0, a1.this$, a2.this$));
        }

        jint TimeDependentLOS::getNbPixels() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPixels_55546ef6a647f39b]);
        }

        ::java::util::stream::Stream TimeDependentLOS::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_14e21bf777ff0ccf]));
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
      namespace los {
        static PyObject *t_TimeDependentLOS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDependentLOS_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDependentLOS_getLOS(t_TimeDependentLOS *self, PyObject *args);
        static PyObject *t_TimeDependentLOS_getLOSDerivatives(t_TimeDependentLOS *self, PyObject *args);
        static PyObject *t_TimeDependentLOS_getNbPixels(t_TimeDependentLOS *self);
        static PyObject *t_TimeDependentLOS_getParametersDrivers(t_TimeDependentLOS *self);
        static PyObject *t_TimeDependentLOS_get__nbPixels(t_TimeDependentLOS *self, void *data);
        static PyObject *t_TimeDependentLOS_get__parametersDrivers(t_TimeDependentLOS *self, void *data);
        static PyGetSetDef t_TimeDependentLOS__fields_[] = {
          DECLARE_GET_FIELD(t_TimeDependentLOS, nbPixels),
          DECLARE_GET_FIELD(t_TimeDependentLOS, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeDependentLOS__methods_[] = {
          DECLARE_METHOD(t_TimeDependentLOS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDependentLOS, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDependentLOS, getLOS, METH_VARARGS),
          DECLARE_METHOD(t_TimeDependentLOS, getLOSDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_TimeDependentLOS, getNbPixels, METH_NOARGS),
          DECLARE_METHOD(t_TimeDependentLOS, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeDependentLOS)[] = {
          { Py_tp_methods, t_TimeDependentLOS__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TimeDependentLOS__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeDependentLOS)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeDependentLOS, t_TimeDependentLOS, TimeDependentLOS);

        void t_TimeDependentLOS::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeDependentLOS), &PY_TYPE_DEF(TimeDependentLOS), module, "TimeDependentLOS", 0);
        }

        void t_TimeDependentLOS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDependentLOS), "class_", make_descriptor(TimeDependentLOS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDependentLOS), "wrapfn_", make_descriptor(t_TimeDependentLOS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDependentLOS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TimeDependentLOS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeDependentLOS::initializeClass, 1)))
            return NULL;
          return t_TimeDependentLOS::wrap_Object(TimeDependentLOS(((t_TimeDependentLOS *) arg)->object.this$));
        }
        static PyObject *t_TimeDependentLOS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeDependentLOS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TimeDependentLOS_getLOS(t_TimeDependentLOS *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "Ik", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getLOS(a0, a1));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLOS", args);
          return NULL;
        }

        static PyObject *t_TimeDependentLOS_getLOSDerivatives(t_TimeDependentLOS *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

          if (!parseArgs(args, "IkK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
          {
            OBJ_CALL(result = self->object.getLOSDerivatives(a0, a1, a2));
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLOSDerivatives", args);
          return NULL;
        }

        static PyObject *t_TimeDependentLOS_getNbPixels(t_TimeDependentLOS *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPixels());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_TimeDependentLOS_getParametersDrivers(t_TimeDependentLOS *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_TimeDependentLOS_get__nbPixels(t_TimeDependentLOS *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPixels());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_TimeDependentLOS_get__parametersDrivers(t_TimeDependentLOS *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/DividedDifferenceInterpolator.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *DividedDifferenceInterpolator::class$ = NULL;
        jmethodID *DividedDifferenceInterpolator::mids$ = NULL;
        bool DividedDifferenceInterpolator::live$ = false;

        jclass DividedDifferenceInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/DividedDifferenceInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_fcf97439b0a93692] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm;");
            mids$[mid_computeDividedDifference_1badeb24cd1b9588] = env->getStaticMethodID(cls, "computeDividedDifference", "([D[D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DividedDifferenceInterpolator::DividedDifferenceInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm DividedDifferenceInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm(env->callObjectMethod(this$, mids$[mid_interpolate_fcf97439b0a93692], a0.this$, a1.this$));
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
      namespace interpolation {
        static PyObject *t_DividedDifferenceInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DividedDifferenceInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DividedDifferenceInterpolator_init_(t_DividedDifferenceInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DividedDifferenceInterpolator_interpolate(t_DividedDifferenceInterpolator *self, PyObject *args);

        static PyMethodDef t_DividedDifferenceInterpolator__methods_[] = {
          DECLARE_METHOD(t_DividedDifferenceInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DividedDifferenceInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DividedDifferenceInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DividedDifferenceInterpolator)[] = {
          { Py_tp_methods, t_DividedDifferenceInterpolator__methods_ },
          { Py_tp_init, (void *) t_DividedDifferenceInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DividedDifferenceInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DividedDifferenceInterpolator, t_DividedDifferenceInterpolator, DividedDifferenceInterpolator);

        void t_DividedDifferenceInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(DividedDifferenceInterpolator), &PY_TYPE_DEF(DividedDifferenceInterpolator), module, "DividedDifferenceInterpolator", 0);
        }

        void t_DividedDifferenceInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DividedDifferenceInterpolator), "class_", make_descriptor(DividedDifferenceInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DividedDifferenceInterpolator), "wrapfn_", make_descriptor(t_DividedDifferenceInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DividedDifferenceInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DividedDifferenceInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DividedDifferenceInterpolator::initializeClass, 1)))
            return NULL;
          return t_DividedDifferenceInterpolator::wrap_Object(DividedDifferenceInterpolator(((t_DividedDifferenceInterpolator *) arg)->object.this$));
        }
        static PyObject *t_DividedDifferenceInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DividedDifferenceInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DividedDifferenceInterpolator_init_(t_DividedDifferenceInterpolator *self, PyObject *args, PyObject *kwds)
        {
          DividedDifferenceInterpolator object((jobject) NULL);

          INT_CALL(object = DividedDifferenceInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_DividedDifferenceInterpolator_interpolate(t_DividedDifferenceInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunctionNewtonForm::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/BrentOptimizer.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *BrentOptimizer::class$ = NULL;
        jmethodID *BrentOptimizer::mids$ = NULL;
        bool BrentOptimizer::live$ = false;

        jclass BrentOptimizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/BrentOptimizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b6324221e091bb31] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/optim/ConvergenceChecker;)V");
            mids$[mid_doOptimize_4a799806e31c160d] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrentOptimizer::BrentOptimizer(jdouble a0, jdouble a1) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        BrentOptimizer::BrentOptimizer(jdouble a0, jdouble a1, const ::org::hipparchus::optim::ConvergenceChecker & a2) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_b6324221e091bb31, a0, a1, a2.this$)) {}
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
      namespace univariate {
        static PyObject *t_BrentOptimizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentOptimizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentOptimizer_of_(t_BrentOptimizer *self, PyObject *args);
        static int t_BrentOptimizer_init_(t_BrentOptimizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrentOptimizer_get__parameters_(t_BrentOptimizer *self, void *data);
        static PyGetSetDef t_BrentOptimizer__fields_[] = {
          DECLARE_GET_FIELD(t_BrentOptimizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BrentOptimizer__methods_[] = {
          DECLARE_METHOD(t_BrentOptimizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentOptimizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentOptimizer, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrentOptimizer)[] = {
          { Py_tp_methods, t_BrentOptimizer__methods_ },
          { Py_tp_init, (void *) t_BrentOptimizer_init_ },
          { Py_tp_getset, t_BrentOptimizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrentOptimizer)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::univariate::UnivariateOptimizer),
          NULL
        };

        DEFINE_TYPE(BrentOptimizer, t_BrentOptimizer, BrentOptimizer);
        PyObject *t_BrentOptimizer::wrap_Object(const BrentOptimizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentOptimizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentOptimizer *self = (t_BrentOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BrentOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentOptimizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentOptimizer *self = (t_BrentOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BrentOptimizer::install(PyObject *module)
        {
          installType(&PY_TYPE(BrentOptimizer), &PY_TYPE_DEF(BrentOptimizer), module, "BrentOptimizer", 0);
        }

        void t_BrentOptimizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentOptimizer), "class_", make_descriptor(BrentOptimizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentOptimizer), "wrapfn_", make_descriptor(t_BrentOptimizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentOptimizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BrentOptimizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrentOptimizer::initializeClass, 1)))
            return NULL;
          return t_BrentOptimizer::wrap_Object(BrentOptimizer(((t_BrentOptimizer *) arg)->object.this$));
        }
        static PyObject *t_BrentOptimizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrentOptimizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BrentOptimizer_of_(t_BrentOptimizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BrentOptimizer_init_(t_BrentOptimizer *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              BrentOptimizer object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BrentOptimizer(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::hipparchus::optim::ConvergenceChecker a2((jobject) NULL);
              PyTypeObject **p2;
              BrentOptimizer object((jobject) NULL);

              if (!parseArgs(args, "DDK", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                INT_CALL(object = BrentOptimizer(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
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
        static PyObject *t_BrentOptimizer_get__parameters_(t_BrentOptimizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *OneWayGNSSRange::class$ = NULL;
          jmethodID *OneWayGNSSRange::mids$ = NULL;
          bool OneWayGNSSRange::live$ = false;
          ::java::lang::String *OneWayGNSSRange::MEASUREMENT_TYPE = NULL;

          jclass OneWayGNSSRange::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/OneWayGNSSRange");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4cb1dcd15ede25ec] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OneWayGNSSRange::OneWayGNSSRange(const ::org::orekit::utils::PVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_4cb1dcd15ede25ec, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}
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
        namespace gnss {
          static PyObject *t_OneWayGNSSRange_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRange_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRange_of_(t_OneWayGNSSRange *self, PyObject *args);
          static int t_OneWayGNSSRange_init_(t_OneWayGNSSRange *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OneWayGNSSRange_get__parameters_(t_OneWayGNSSRange *self, void *data);
          static PyGetSetDef t_OneWayGNSSRange__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSRange, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSRange__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSRange, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRange, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRange, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSRange)[] = {
            { Py_tp_methods, t_OneWayGNSSRange__methods_ },
            { Py_tp_init, (void *) t_OneWayGNSSRange_init_ },
            { Py_tp_getset, t_OneWayGNSSRange__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSRange)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSRange, t_OneWayGNSSRange, OneWayGNSSRange);
          PyObject *t_OneWayGNSSRange::wrap_Object(const OneWayGNSSRange& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRange::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRange *self = (t_OneWayGNSSRange *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRange::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRange *self = (t_OneWayGNSSRange *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSRange::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSRange), &PY_TYPE_DEF(OneWayGNSSRange), module, "OneWayGNSSRange", 0);
          }

          void t_OneWayGNSSRange::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "class_", make_descriptor(OneWayGNSSRange::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "wrapfn_", make_descriptor(t_OneWayGNSSRange::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "boxfn_", make_descriptor(boxObject));
            env->getClass(OneWayGNSSRange::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*OneWayGNSSRange::MEASUREMENT_TYPE)));
          }

          static PyObject *t_OneWayGNSSRange_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSRange::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSRange::wrap_Object(OneWayGNSSRange(((t_OneWayGNSSRange *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSRange_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSRange::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSRange_of_(t_OneWayGNSSRange *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_OneWayGNSSRange_init_(t_OneWayGNSSRange *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
            OneWayGNSSRange object((jobject) NULL);

            if (!parseArgs(args, "kDkDDDk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = OneWayGNSSRange(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(OneWayGNSSRange);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
          static PyObject *t_OneWayGNSSRange_get__parameters_(t_OneWayGNSSRange *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/AmbiguitySolver.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AmbiguitySolver::class$ = NULL;
          jmethodID *AmbiguitySolver::mids$ = NULL;
          bool AmbiguitySolver::live$ = false;

          jclass AmbiguitySolver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AmbiguitySolver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3356cf5f248c9aa7] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver;Lorg/orekit/estimation/measurements/gnss/AmbiguityAcceptance;)V");
              mids$[mid_fixIntegerAmbiguities_28ffeedd0599d7ff] = env->getMethodID(cls, "fixIntegerAmbiguities", "(ILjava/util/List;Lorg/hipparchus/linear/RealMatrix;)Ljava/util/List;");
              mids$[mid_getAllAmbiguityDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAllAmbiguityDrivers", "()Ljava/util/List;");
              mids$[mid_unFixAmbiguity_5791d10af4720a8e] = env->getMethodID(cls, "unFixAmbiguity", "(Lorg/orekit/utils/ParameterDriver;)V");
              mids$[mid_getFreeAmbiguityDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getFreeAmbiguityDrivers", "()Ljava/util/List;");
              mids$[mid_getFreeAmbiguityIndirection_e94c5cd44e918936] = env->getMethodID(cls, "getFreeAmbiguityIndirection", "(ILjava/util/List;)[I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AmbiguitySolver::AmbiguitySolver(const ::java::util::List & a0, const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolver & a1, const ::org::orekit::estimation::measurements::gnss::AmbiguityAcceptance & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3356cf5f248c9aa7, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List AmbiguitySolver::fixIntegerAmbiguities(jint a0, const ::java::util::List & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_fixIntegerAmbiguities_28ffeedd0599d7ff], a0, a1.this$, a2.this$));
          }

          ::java::util::List AmbiguitySolver::getAllAmbiguityDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllAmbiguityDrivers_e62d3bb06d56d7e3]));
          }

          void AmbiguitySolver::unFixAmbiguity(const ::org::orekit::utils::ParameterDriver & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_unFixAmbiguity_5791d10af4720a8e], a0.this$);
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
        namespace gnss {
          static PyObject *t_AmbiguitySolver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AmbiguitySolver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AmbiguitySolver_init_(t_AmbiguitySolver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AmbiguitySolver_fixIntegerAmbiguities(t_AmbiguitySolver *self, PyObject *args);
          static PyObject *t_AmbiguitySolver_getAllAmbiguityDrivers(t_AmbiguitySolver *self);
          static PyObject *t_AmbiguitySolver_unFixAmbiguity(t_AmbiguitySolver *self, PyObject *arg);
          static PyObject *t_AmbiguitySolver_get__allAmbiguityDrivers(t_AmbiguitySolver *self, void *data);
          static PyGetSetDef t_AmbiguitySolver__fields_[] = {
            DECLARE_GET_FIELD(t_AmbiguitySolver, allAmbiguityDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AmbiguitySolver__methods_[] = {
            DECLARE_METHOD(t_AmbiguitySolver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguitySolver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguitySolver, fixIntegerAmbiguities, METH_VARARGS),
            DECLARE_METHOD(t_AmbiguitySolver, getAllAmbiguityDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AmbiguitySolver, unFixAmbiguity, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AmbiguitySolver)[] = {
            { Py_tp_methods, t_AmbiguitySolver__methods_ },
            { Py_tp_init, (void *) t_AmbiguitySolver_init_ },
            { Py_tp_getset, t_AmbiguitySolver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AmbiguitySolver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AmbiguitySolver, t_AmbiguitySolver, AmbiguitySolver);

          void t_AmbiguitySolver::install(PyObject *module)
          {
            installType(&PY_TYPE(AmbiguitySolver), &PY_TYPE_DEF(AmbiguitySolver), module, "AmbiguitySolver", 0);
          }

          void t_AmbiguitySolver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguitySolver), "class_", make_descriptor(AmbiguitySolver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguitySolver), "wrapfn_", make_descriptor(t_AmbiguitySolver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguitySolver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AmbiguitySolver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AmbiguitySolver::initializeClass, 1)))
              return NULL;
            return t_AmbiguitySolver::wrap_Object(AmbiguitySolver(((t_AmbiguitySolver *) arg)->object.this$));
          }
          static PyObject *t_AmbiguitySolver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AmbiguitySolver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AmbiguitySolver_init_(t_AmbiguitySolver *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolver a1((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::AmbiguityAcceptance a2((jobject) NULL);
            AmbiguitySolver object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::java::util::List::initializeClass, ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolver::initializeClass, ::org::orekit::estimation::measurements::gnss::AmbiguityAcceptance::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
            {
              INT_CALL(object = AmbiguitySolver(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AmbiguitySolver_fixIntegerAmbiguities(t_AmbiguitySolver *self, PyObject *args)
          {
            jint a0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "IKk", ::java::util::List::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.fixIntegerAmbiguities(a0, a1, a2));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            PyErr_SetArgsError((PyObject *) self, "fixIntegerAmbiguities", args);
            return NULL;
          }

          static PyObject *t_AmbiguitySolver_getAllAmbiguityDrivers(t_AmbiguitySolver *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getAllAmbiguityDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AmbiguitySolver_unFixAmbiguity(t_AmbiguitySolver *self, PyObject *arg)
          {
            ::org::orekit::utils::ParameterDriver a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
            {
              OBJ_CALL(self->object.unFixAmbiguity(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "unFixAmbiguity", arg);
            return NULL;
          }

          static PyObject *t_AmbiguitySolver_get__allAmbiguityDrivers(t_AmbiguitySolver *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getAllAmbiguityDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/parser/MessagesParser.h"
#include "java/lang/Integer.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *Type::class$ = NULL;
          jmethodID *Type::mids$ = NULL;
          bool Type::live$ = false;
          Type *Type::IGS_SSR = NULL;
          Type *Type::RTCM = NULL;

          jclass Type::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/Type");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParser_1cc26214b1e2c708] = env->getMethodID(cls, "getParser", "(Ljava/util/List;)Lorg/orekit/gnss/metric/parser/MessagesParser;");
              mids$[mid_valueOf_9244764a4bbee0b9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/Type;");
              mids$[mid_values_75adff9a0344f94e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/Type;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IGS_SSR = new Type(env->getStaticObjectField(cls, "IGS_SSR", "Lorg/orekit/gnss/metric/ntrip/Type;"));
              RTCM = new Type(env->getStaticObjectField(cls, "RTCM", "Lorg/orekit/gnss/metric/ntrip/Type;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::gnss::metric::parser::MessagesParser Type::getParser(const ::java::util::List & a0) const
          {
            return ::org::orekit::gnss::metric::parser::MessagesParser(env->callObjectMethod(this$, mids$[mid_getParser_1cc26214b1e2c708], a0.this$));
          }

          Type Type::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Type(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9244764a4bbee0b9], a0.this$));
          }

          JArray< Type > Type::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< Type >(env->callStaticObjectMethod(cls, mids$[mid_values_75adff9a0344f94e]));
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
          static PyObject *t_Type_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Type_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Type_of_(t_Type *self, PyObject *args);
          static PyObject *t_Type_getParser(t_Type *self, PyObject *arg);
          static PyObject *t_Type_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_Type_values(PyTypeObject *type);
          static PyObject *t_Type_get__parameters_(t_Type *self, void *data);
          static PyGetSetDef t_Type__fields_[] = {
            DECLARE_GET_FIELD(t_Type, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Type__methods_[] = {
            DECLARE_METHOD(t_Type, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Type, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Type, of_, METH_VARARGS),
            DECLARE_METHOD(t_Type, getParser, METH_O),
            DECLARE_METHOD(t_Type, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Type, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Type)[] = {
            { Py_tp_methods, t_Type__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Type__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Type)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(Type, t_Type, Type);
          PyObject *t_Type::wrap_Object(const Type& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Type::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Type *self = (t_Type *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Type::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Type::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Type *self = (t_Type *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Type::install(PyObject *module)
          {
            installType(&PY_TYPE(Type), &PY_TYPE_DEF(Type), module, "Type", 0);
          }

          void t_Type::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "class_", make_descriptor(Type::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "wrapfn_", make_descriptor(t_Type::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "boxfn_", make_descriptor(boxObject));
            env->getClass(Type::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "IGS_SSR", make_descriptor(t_Type::wrap_Object(*Type::IGS_SSR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "RTCM", make_descriptor(t_Type::wrap_Object(*Type::RTCM)));
          }

          static PyObject *t_Type_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Type::initializeClass, 1)))
              return NULL;
            return t_Type::wrap_Object(Type(((t_Type *) arg)->object.this$));
          }
          static PyObject *t_Type_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Type::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Type_of_(t_Type *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Type_getParser(t_Type *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::metric::parser::MessagesParser result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.getParser(a0));
              return ::org::orekit::gnss::metric::parser::t_MessagesParser::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getParser", arg);
            return NULL;
          }

          static PyObject *t_Type_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            Type result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Type::valueOf(a0));
              return t_Type::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_Type_values(PyTypeObject *type)
          {
            JArray< Type > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Type::values());
            return JArray<jobject>(result.this$).wrap(t_Type::wrap_jobject);
          }
          static PyObject *t_Type_get__parameters_(t_Type *self, void *data)
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
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiTheta.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldTheta.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldJacobiTheta::class$ = NULL;
          jmethodID *FieldJacobiTheta::mids$ = NULL;
          bool FieldJacobiTheta::live$ = false;

          jclass FieldJacobiTheta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldJacobiTheta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f2b4bfa0af1007e8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_getQ_81520b552cb3fa26] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_values_cf7474926eefb4a1] = env->getMethodID(cls, "values", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldTheta;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldJacobiTheta::FieldJacobiTheta(const ::org::hipparchus::CalculusFieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f2b4bfa0af1007e8, a0.this$)) {}

          ::org::hipparchus::CalculusFieldElement FieldJacobiTheta::getQ() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ_81520b552cb3fa26]));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldTheta FieldJacobiTheta::values(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldTheta(env->callObjectMethod(this$, mids$[mid_values_cf7474926eefb4a1], a0.this$));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldJacobiTheta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiTheta_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiTheta_of_(t_FieldJacobiTheta *self, PyObject *args);
          static int t_FieldJacobiTheta_init_(t_FieldJacobiTheta *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldJacobiTheta_getQ(t_FieldJacobiTheta *self);
          static PyObject *t_FieldJacobiTheta_values(t_FieldJacobiTheta *self, PyObject *arg);
          static PyObject *t_FieldJacobiTheta_get__q(t_FieldJacobiTheta *self, void *data);
          static PyObject *t_FieldJacobiTheta_get__parameters_(t_FieldJacobiTheta *self, void *data);
          static PyGetSetDef t_FieldJacobiTheta__fields_[] = {
            DECLARE_GET_FIELD(t_FieldJacobiTheta, q),
            DECLARE_GET_FIELD(t_FieldJacobiTheta, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldJacobiTheta__methods_[] = {
            DECLARE_METHOD(t_FieldJacobiTheta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiTheta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiTheta, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiTheta, getQ, METH_NOARGS),
            DECLARE_METHOD(t_FieldJacobiTheta, values, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldJacobiTheta)[] = {
            { Py_tp_methods, t_FieldJacobiTheta__methods_ },
            { Py_tp_init, (void *) t_FieldJacobiTheta_init_ },
            { Py_tp_getset, t_FieldJacobiTheta__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldJacobiTheta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldJacobiTheta, t_FieldJacobiTheta, FieldJacobiTheta);
          PyObject *t_FieldJacobiTheta::wrap_Object(const FieldJacobiTheta& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiTheta::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiTheta *self = (t_FieldJacobiTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldJacobiTheta::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiTheta::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiTheta *self = (t_FieldJacobiTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldJacobiTheta::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldJacobiTheta), &PY_TYPE_DEF(FieldJacobiTheta), module, "FieldJacobiTheta", 0);
          }

          void t_FieldJacobiTheta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiTheta), "class_", make_descriptor(FieldJacobiTheta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiTheta), "wrapfn_", make_descriptor(t_FieldJacobiTheta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiTheta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldJacobiTheta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldJacobiTheta::initializeClass, 1)))
              return NULL;
            return t_FieldJacobiTheta::wrap_Object(FieldJacobiTheta(((t_FieldJacobiTheta *) arg)->object.this$));
          }
          static PyObject *t_FieldJacobiTheta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldJacobiTheta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldJacobiTheta_of_(t_FieldJacobiTheta *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldJacobiTheta_init_(t_FieldJacobiTheta *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldJacobiTheta object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldJacobiTheta(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldJacobiTheta_getQ(t_FieldJacobiTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldJacobiTheta_values(t_FieldJacobiTheta *self, PyObject *arg)
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::special::elliptic::jacobi::FieldTheta result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.values(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_FieldTheta::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "values", arg);
            return NULL;
          }
          static PyObject *t_FieldJacobiTheta_get__parameters_(t_FieldJacobiTheta *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldJacobiTheta_get__q(t_FieldJacobiTheta *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/DataStreamRecord.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/ntrip/StreamedMessage.h"
#include "org/orekit/gnss/metric/ntrip/NavigationSystem.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "org/orekit/gnss/metric/ntrip/DataFormat.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/CarrierPhase.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *DataStreamRecord::class$ = NULL;
          jmethodID *DataStreamRecord::mids$ = NULL;
          bool DataStreamRecord::live$ = false;

          jclass DataStreamRecord::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/DataStreamRecord");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_areFeesRequired_9ab94ac1dc23b105] = env->getMethodID(cls, "areFeesRequired", "()Z");
              mids$[mid_getAuthentication_94d108ef01c519e6] = env->getMethodID(cls, "getAuthentication", "()Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_getBitRate_55546ef6a647f39b] = env->getMethodID(cls, "getBitRate", "()I");
              mids$[mid_getCarrierPhase_684b70c06f5630be] = env->getMethodID(cls, "getCarrierPhase", "()Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");
              mids$[mid_getCompressionEncryption_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCompressionEncryption", "()Ljava/lang/String;");
              mids$[mid_getCountry_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
              mids$[mid_getFormat_be80987a68694316] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/gnss/metric/ntrip/DataFormat;");
              mids$[mid_getFormatDetails_e62d3bb06d56d7e3] = env->getMethodID(cls, "getFormatDetails", "()Ljava/util/List;");
              mids$[mid_getGenerator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getGenerator", "()Ljava/lang/String;");
              mids$[mid_getLatitude_b74f83833fdad017] = env->getMethodID(cls, "getLatitude", "()D");
              mids$[mid_getLongitude_b74f83833fdad017] = env->getMethodID(cls, "getLongitude", "()D");
              mids$[mid_getMountPoint_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMountPoint", "()Ljava/lang/String;");
              mids$[mid_getNavigationSystems_e62d3bb06d56d7e3] = env->getMethodID(cls, "getNavigationSystems", "()Ljava/util/List;");
              mids$[mid_getNetwork_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getNetwork", "()Ljava/lang/String;");
              mids$[mid_getRecordType_3f153b7c7459a9e2] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getSourceIdentifier_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSourceIdentifier", "()Ljava/lang/String;");
              mids$[mid_isNMEARequired_9ab94ac1dc23b105] = env->getMethodID(cls, "isNMEARequired", "()Z");
              mids$[mid_isNetworked_9ab94ac1dc23b105] = env->getMethodID(cls, "isNetworked", "()Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DataStreamRecord::DataStreamRecord(const ::java::lang::String & a0) : ::org::orekit::gnss::metric::ntrip::Record(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

          jboolean DataStreamRecord::areFeesRequired() const
          {
            return env->callBooleanMethod(this$, mids$[mid_areFeesRequired_9ab94ac1dc23b105]);
          }

          ::org::orekit::gnss::metric::ntrip::Authentication DataStreamRecord::getAuthentication() const
          {
            return ::org::orekit::gnss::metric::ntrip::Authentication(env->callObjectMethod(this$, mids$[mid_getAuthentication_94d108ef01c519e6]));
          }

          jint DataStreamRecord::getBitRate() const
          {
            return env->callIntMethod(this$, mids$[mid_getBitRate_55546ef6a647f39b]);
          }

          ::org::orekit::gnss::metric::ntrip::CarrierPhase DataStreamRecord::getCarrierPhase() const
          {
            return ::org::orekit::gnss::metric::ntrip::CarrierPhase(env->callObjectMethod(this$, mids$[mid_getCarrierPhase_684b70c06f5630be]));
          }

          ::java::lang::String DataStreamRecord::getCompressionEncryption() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCompressionEncryption_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String DataStreamRecord::getCountry() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::gnss::metric::ntrip::DataFormat DataStreamRecord::getFormat() const
          {
            return ::org::orekit::gnss::metric::ntrip::DataFormat(env->callObjectMethod(this$, mids$[mid_getFormat_be80987a68694316]));
          }

          ::java::util::List DataStreamRecord::getFormatDetails() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFormatDetails_e62d3bb06d56d7e3]));
          }

          ::java::lang::String DataStreamRecord::getGenerator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getGenerator_1c1fa1e935d6cdcf]));
          }

          jdouble DataStreamRecord::getLatitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLatitude_b74f83833fdad017]);
          }

          jdouble DataStreamRecord::getLongitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLongitude_b74f83833fdad017]);
          }

          ::java::lang::String DataStreamRecord::getMountPoint() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMountPoint_1c1fa1e935d6cdcf]));
          }

          ::java::util::List DataStreamRecord::getNavigationSystems() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNavigationSystems_e62d3bb06d56d7e3]));
          }

          ::java::lang::String DataStreamRecord::getNetwork() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNetwork_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::gnss::metric::ntrip::RecordType DataStreamRecord::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_3f153b7c7459a9e2]));
          }

          ::java::lang::String DataStreamRecord::getSourceIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceIdentifier_1c1fa1e935d6cdcf]));
          }

          jboolean DataStreamRecord::isNMEARequired() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNMEARequired_9ab94ac1dc23b105]);
          }

          jboolean DataStreamRecord::isNetworked() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNetworked_9ab94ac1dc23b105]);
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
          static PyObject *t_DataStreamRecord_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataStreamRecord_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DataStreamRecord_init_(t_DataStreamRecord *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DataStreamRecord_areFeesRequired(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getAuthentication(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getBitRate(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getCarrierPhase(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getCompressionEncryption(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getCountry(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getFormat(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getFormatDetails(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getGenerator(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getLatitude(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getLongitude(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getMountPoint(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getNavigationSystems(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getNetwork(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getRecordType(t_DataStreamRecord *self, PyObject *args);
          static PyObject *t_DataStreamRecord_getSourceIdentifier(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_isNMEARequired(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_isNetworked(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_get__authentication(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__bitRate(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__carrierPhase(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__compressionEncryption(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__country(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__format(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__formatDetails(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__generator(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__latitude(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__longitude(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__mountPoint(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__nMEARequired(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__navigationSystems(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__network(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__networked(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__recordType(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__sourceIdentifier(t_DataStreamRecord *self, void *data);
          static PyGetSetDef t_DataStreamRecord__fields_[] = {
            DECLARE_GET_FIELD(t_DataStreamRecord, authentication),
            DECLARE_GET_FIELD(t_DataStreamRecord, bitRate),
            DECLARE_GET_FIELD(t_DataStreamRecord, carrierPhase),
            DECLARE_GET_FIELD(t_DataStreamRecord, compressionEncryption),
            DECLARE_GET_FIELD(t_DataStreamRecord, country),
            DECLARE_GET_FIELD(t_DataStreamRecord, format),
            DECLARE_GET_FIELD(t_DataStreamRecord, formatDetails),
            DECLARE_GET_FIELD(t_DataStreamRecord, generator),
            DECLARE_GET_FIELD(t_DataStreamRecord, latitude),
            DECLARE_GET_FIELD(t_DataStreamRecord, longitude),
            DECLARE_GET_FIELD(t_DataStreamRecord, mountPoint),
            DECLARE_GET_FIELD(t_DataStreamRecord, nMEARequired),
            DECLARE_GET_FIELD(t_DataStreamRecord, navigationSystems),
            DECLARE_GET_FIELD(t_DataStreamRecord, network),
            DECLARE_GET_FIELD(t_DataStreamRecord, networked),
            DECLARE_GET_FIELD(t_DataStreamRecord, recordType),
            DECLARE_GET_FIELD(t_DataStreamRecord, sourceIdentifier),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DataStreamRecord__methods_[] = {
            DECLARE_METHOD(t_DataStreamRecord, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataStreamRecord, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataStreamRecord, areFeesRequired, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getAuthentication, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getBitRate, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getCarrierPhase, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getCompressionEncryption, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getCountry, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getFormat, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getFormatDetails, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getGenerator, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getLatitude, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getLongitude, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getMountPoint, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getNavigationSystems, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getNetwork, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getRecordType, METH_VARARGS),
            DECLARE_METHOD(t_DataStreamRecord, getSourceIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, isNMEARequired, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, isNetworked, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataStreamRecord)[] = {
            { Py_tp_methods, t_DataStreamRecord__methods_ },
            { Py_tp_init, (void *) t_DataStreamRecord_init_ },
            { Py_tp_getset, t_DataStreamRecord__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataStreamRecord)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::ntrip::Record),
            NULL
          };

          DEFINE_TYPE(DataStreamRecord, t_DataStreamRecord, DataStreamRecord);

          void t_DataStreamRecord::install(PyObject *module)
          {
            installType(&PY_TYPE(DataStreamRecord), &PY_TYPE_DEF(DataStreamRecord), module, "DataStreamRecord", 0);
          }

          void t_DataStreamRecord::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataStreamRecord), "class_", make_descriptor(DataStreamRecord::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataStreamRecord), "wrapfn_", make_descriptor(t_DataStreamRecord::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataStreamRecord), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DataStreamRecord_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataStreamRecord::initializeClass, 1)))
              return NULL;
            return t_DataStreamRecord::wrap_Object(DataStreamRecord(((t_DataStreamRecord *) arg)->object.this$));
          }
          static PyObject *t_DataStreamRecord_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataStreamRecord::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DataStreamRecord_init_(t_DataStreamRecord *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            DataStreamRecord object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = DataStreamRecord(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DataStreamRecord_areFeesRequired(t_DataStreamRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.areFeesRequired());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DataStreamRecord_getAuthentication(t_DataStreamRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication result((jobject) NULL);
            OBJ_CALL(result = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(result);
          }

          static PyObject *t_DataStreamRecord_getBitRate(t_DataStreamRecord *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getBitRate());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_DataStreamRecord_getCarrierPhase(t_DataStreamRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::CarrierPhase result((jobject) NULL);
            OBJ_CALL(result = self->object.getCarrierPhase());
            return ::org::orekit::gnss::metric::ntrip::t_CarrierPhase::wrap_Object(result);
          }

          static PyObject *t_DataStreamRecord_getCompressionEncryption(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCompressionEncryption());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getCountry(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCountry());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getFormat(t_DataStreamRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::DataFormat result((jobject) NULL);
            OBJ_CALL(result = self->object.getFormat());
            return ::org::orekit::gnss::metric::ntrip::t_DataFormat::wrap_Object(result);
          }

          static PyObject *t_DataStreamRecord_getFormatDetails(t_DataStreamRecord *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getFormatDetails());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(StreamedMessage));
          }

          static PyObject *t_DataStreamRecord_getGenerator(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getGenerator());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getLatitude(t_DataStreamRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLatitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_DataStreamRecord_getLongitude(t_DataStreamRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLongitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_DataStreamRecord_getMountPoint(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMountPoint());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getNavigationSystems(t_DataStreamRecord *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getNavigationSystems());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(NavigationSystem));
          }

          static PyObject *t_DataStreamRecord_getNetwork(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetwork());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getRecordType(t_DataStreamRecord *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getRecordType());
              return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DataStreamRecord), (PyObject *) self, "getRecordType", args, 2);
          }

          static PyObject *t_DataStreamRecord_getSourceIdentifier(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSourceIdentifier());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_isNMEARequired(t_DataStreamRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNMEARequired());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DataStreamRecord_isNetworked(t_DataStreamRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNetworked());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DataStreamRecord_get__authentication(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication value((jobject) NULL);
            OBJ_CALL(value = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__bitRate(t_DataStreamRecord *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getBitRate());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_DataStreamRecord_get__carrierPhase(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::CarrierPhase value((jobject) NULL);
            OBJ_CALL(value = self->object.getCarrierPhase());
            return ::org::orekit::gnss::metric::ntrip::t_CarrierPhase::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__compressionEncryption(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCompressionEncryption());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__country(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCountry());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__format(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::DataFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getFormat());
            return ::org::orekit::gnss::metric::ntrip::t_DataFormat::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__formatDetails(t_DataStreamRecord *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getFormatDetails());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__generator(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getGenerator());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__latitude(t_DataStreamRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLatitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_DataStreamRecord_get__longitude(t_DataStreamRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLongitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_DataStreamRecord_get__mountPoint(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMountPoint());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__nMEARequired(t_DataStreamRecord *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNMEARequired());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_DataStreamRecord_get__navigationSystems(t_DataStreamRecord *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getNavigationSystems());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__network(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetwork());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__networked(t_DataStreamRecord *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNetworked());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_DataStreamRecord_get__recordType(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__sourceIdentifier(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSourceIdentifier());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter2DPOCMethod.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *PythonAbstractShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *PythonAbstractShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool PythonAbstractShortTermEncounter2DPOCMethod::live$ = false;

              jclass PythonAbstractShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
                  mids$[mid_compute_a73e6347f5238a63] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_11689cd07cf55453] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getType_8397a286d982b383] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonAbstractShortTermEncounter2DPOCMethod::PythonAbstractShortTermEncounter2DPOCMethod(const ::java::lang::String & a0) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

              void PythonAbstractShortTermEncounter2DPOCMethod::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
              }

              jlong PythonAbstractShortTermEncounter2DPOCMethod::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
              }

              void PythonAbstractShortTermEncounter2DPOCMethod::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonAbstractShortTermEncounter2DPOCMethod_init_(t_PythonAbstractShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter2DPOCMethod *self);
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter2DPOCMethod *self, PyObject *args);
              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4);
              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4);
              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_PythonAbstractShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_PythonAbstractShortTermEncounter2DPOCMethod, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonAbstractShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter2DPOCMethod, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter2DPOCMethod, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonAbstractShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_PythonAbstractShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_init_ },
                { Py_tp_getset, t_PythonAbstractShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonAbstractShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(PythonAbstractShortTermEncounter2DPOCMethod, t_PythonAbstractShortTermEncounter2DPOCMethod, PythonAbstractShortTermEncounter2DPOCMethod);

              void t_PythonAbstractShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(PythonAbstractShortTermEncounter2DPOCMethod), module, "PythonAbstractShortTermEncounter2DPOCMethod", 1);
              }

              void t_PythonAbstractShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod), "class_", make_descriptor(PythonAbstractShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_PythonAbstractShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonAbstractShortTermEncounter2DPOCMethod::initializeClass);
                JNINativeMethod methods[] = {
                  { "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_compute0 },
                  { "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_compute1 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_getType2 },
                  { "pythonDecRef", "()V", (void *) t_PythonAbstractShortTermEncounter2DPOCMethod_pythonDecRef3 },
                };
                env->registerNatives(cls, methods, 4);
              }

              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonAbstractShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_PythonAbstractShortTermEncounter2DPOCMethod::wrap_Object(PythonAbstractShortTermEncounter2DPOCMethod(((t_PythonAbstractShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonAbstractShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonAbstractShortTermEncounter2DPOCMethod_init_(t_PythonAbstractShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                PythonAbstractShortTermEncounter2DPOCMethod object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = PythonAbstractShortTermEncounter2DPOCMethod(a0));
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

              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter2DPOCMethod *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter2DPOCMethod *self, PyObject *args)
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "compute", "ddddd", (double) a0, (double) a1, (double) a2, (double) a3, (double) a4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *o3 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOO", o0, o1, o2, o3, o4);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "getType", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::initializeClass, &value))
                {
                  throwTypeError("getType", result);
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

              static void JNICALL t_PythonAbstractShortTermEncounter2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonAbstractShortTermEncounter2DPOCMethod::mids$[PythonAbstractShortTermEncounter2DPOCMethod::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonAbstractShortTermEncounter2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter2DPOCMethod *self, void *data)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTJ2SquaredClosedFormContext::class$ = NULL;
            jmethodID *DSSTJ2SquaredClosedFormContext::mids$ = NULL;
            bool DSSTJ2SquaredClosedFormContext::live$ = false;

            jclass DSSTJ2SquaredClosedFormContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_30f8c8d6272440f5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_getA4_b74f83833fdad017] = env->getMethodID(cls, "getA4", "()D");
                mids$[mid_getAlpha4_b74f83833fdad017] = env->getMethodID(cls, "getAlpha4", "()D");
                mids$[mid_getC_b74f83833fdad017] = env->getMethodID(cls, "getC", "()D");
                mids$[mid_getEta_b74f83833fdad017] = env->getMethodID(cls, "getEta", "()D");
                mids$[mid_getS2_b74f83833fdad017] = env->getMethodID(cls, "getS2", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTJ2SquaredClosedFormContext::DSSTJ2SquaredClosedFormContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_30f8c8d6272440f5, a0.this$, a1.this$)) {}

            jdouble DSSTJ2SquaredClosedFormContext::getA4() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getA4_b74f83833fdad017]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getAlpha4() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha4_b74f83833fdad017]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getC_b74f83833fdad017]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getEta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getEta_b74f83833fdad017]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getS2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS2_b74f83833fdad017]);
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
            static PyObject *t_DSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTJ2SquaredClosedFormContext_init_(t_DSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getA4(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getAlpha4(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getC(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getEta(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getS2(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__a4(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__alpha4(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__c(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__eta(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__s2(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyGetSetDef t_DSSTJ2SquaredClosedFormContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, a4),
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, alpha4),
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, c),
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, eta),
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, s2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTJ2SquaredClosedFormContext__methods_[] = {
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getA4, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getAlpha4, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getC, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getEta, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getS2, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTJ2SquaredClosedFormContext)[] = {
              { Py_tp_methods, t_DSSTJ2SquaredClosedFormContext__methods_ },
              { Py_tp_init, (void *) t_DSSTJ2SquaredClosedFormContext_init_ },
              { Py_tp_getset, t_DSSTJ2SquaredClosedFormContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTJ2SquaredClosedFormContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTJ2SquaredClosedFormContext, t_DSSTJ2SquaredClosedFormContext, DSSTJ2SquaredClosedFormContext);

            void t_DSSTJ2SquaredClosedFormContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTJ2SquaredClosedFormContext), &PY_TYPE_DEF(DSSTJ2SquaredClosedFormContext), module, "DSSTJ2SquaredClosedFormContext", 0);
            }

            void t_DSSTJ2SquaredClosedFormContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedFormContext), "class_", make_descriptor(DSSTJ2SquaredClosedFormContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedFormContext), "wrapfn_", make_descriptor(t_DSSTJ2SquaredClosedFormContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedFormContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTJ2SquaredClosedFormContext::initializeClass, 1)))
                return NULL;
              return t_DSSTJ2SquaredClosedFormContext::wrap_Object(DSSTJ2SquaredClosedFormContext(((t_DSSTJ2SquaredClosedFormContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTJ2SquaredClosedFormContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTJ2SquaredClosedFormContext_init_(t_DSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              DSSTJ2SquaredClosedFormContext object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTJ2SquaredClosedFormContext(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getA4(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getA4());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getAlpha4(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha4());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getC(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getEta(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getEta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getS2(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getS2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__a4(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getA4());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__alpha4(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha4());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__c(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__eta(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getEta());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__s2(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getS2());
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
#include "org/hipparchus/util/ResizableDoubleArray.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/MathArrays$Function.h"
#include "org/hipparchus/util/ResizableDoubleArray$ExpansionMode.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/ResizableDoubleArray.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ResizableDoubleArray::class$ = NULL;
      jmethodID *ResizableDoubleArray::mids$ = NULL;
      bool ResizableDoubleArray::live$ = false;

      jclass ResizableDoubleArray::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ResizableDoubleArray");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_cdd9dee35d124091] = env->getMethodID(cls, "<init>", "(IDD)V");
          mids$[mid_init$_14e7cb2d05650bff] = env->getMethodID(cls, "<init>", "(IDDLorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;[D)V");
          mids$[mid_addElement_8ba9fe7a847cecad] = env->getMethodID(cls, "addElement", "(D)V");
          mids$[mid_addElementRolling_04fd0666b613d2ab] = env->getMethodID(cls, "addElementRolling", "(D)D");
          mids$[mid_addElements_ab69da052b88f50c] = env->getMethodID(cls, "addElements", "([D)V");
          mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_compute_e0041a7a3b51fe97] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/util/MathArrays$Function;)D");
          mids$[mid_contract_a1fa5dae97ea5ed2] = env->getMethodID(cls, "contract", "()V");
          mids$[mid_copy_50ed3e24b16184cd] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/util/ResizableDoubleArray;");
          mids$[mid_discardFrontElements_44ed599e93e8a30c] = env->getMethodID(cls, "discardFrontElements", "(I)V");
          mids$[mid_discardMostRecentElements_44ed599e93e8a30c] = env->getMethodID(cls, "discardMostRecentElements", "(I)V");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getCapacity_55546ef6a647f39b] = env->getMethodID(cls, "getCapacity", "()I");
          mids$[mid_getContractionCriterion_b74f83833fdad017] = env->getMethodID(cls, "getContractionCriterion", "()D");
          mids$[mid_getElement_2afcbc21f4e57ab2] = env->getMethodID(cls, "getElement", "(I)D");
          mids$[mid_getElements_25e1757a36c4dde2] = env->getMethodID(cls, "getElements", "()[D");
          mids$[mid_getExpansionFactor_b74f83833fdad017] = env->getMethodID(cls, "getExpansionFactor", "()D");
          mids$[mid_getExpansionMode_630c36c2fb1d7068] = env->getMethodID(cls, "getExpansionMode", "()Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;");
          mids$[mid_getNumElements_55546ef6a647f39b] = env->getMethodID(cls, "getNumElements", "()I");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_setElement_d5322b8b512aeb26] = env->getMethodID(cls, "setElement", "(ID)V");
          mids$[mid_setNumElements_44ed599e93e8a30c] = env->getMethodID(cls, "setNumElements", "(I)V");
          mids$[mid_substituteMostRecentElement_04fd0666b613d2ab] = env->getMethodID(cls, "substituteMostRecentElement", "(D)D");
          mids$[mid_checkContractExpand_369b4c97255d5afa] = env->getMethodID(cls, "checkContractExpand", "(DD)V");
          mids$[mid_getArrayRef_25e1757a36c4dde2] = env->getMethodID(cls, "getArrayRef", "()[D");
          mids$[mid_getStartIndex_55546ef6a647f39b] = env->getMethodID(cls, "getStartIndex", "()I");
          mids$[mid_expand_a1fa5dae97ea5ed2] = env->getMethodID(cls, "expand", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ResizableDoubleArray::ResizableDoubleArray() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ResizableDoubleArray::ResizableDoubleArray(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cdd9dee35d124091, a0, a1, a2)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0, jdouble a1, jdouble a2, const ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode & a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_14e7cb2d05650bff, a0, a1, a2, a3.this$, a4.this$)) {}

      void ResizableDoubleArray::addElement(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addElement_8ba9fe7a847cecad], a0);
      }

      jdouble ResizableDoubleArray::addElementRolling(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_addElementRolling_04fd0666b613d2ab], a0);
      }

      void ResizableDoubleArray::addElements(const JArray< jdouble > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addElements_ab69da052b88f50c], a0.this$);
      }

      void ResizableDoubleArray::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
      }

      jdouble ResizableDoubleArray::compute(const ::org::hipparchus::util::MathArrays$Function & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_compute_e0041a7a3b51fe97], a0.this$);
      }

      void ResizableDoubleArray::contract() const
      {
        env->callVoidMethod(this$, mids$[mid_contract_a1fa5dae97ea5ed2]);
      }

      ResizableDoubleArray ResizableDoubleArray::copy() const
      {
        return ResizableDoubleArray(env->callObjectMethod(this$, mids$[mid_copy_50ed3e24b16184cd]));
      }

      void ResizableDoubleArray::discardFrontElements(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_discardFrontElements_44ed599e93e8a30c], a0);
      }

      void ResizableDoubleArray::discardMostRecentElements(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_discardMostRecentElements_44ed599e93e8a30c], a0);
      }

      jboolean ResizableDoubleArray::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      jint ResizableDoubleArray::getCapacity() const
      {
        return env->callIntMethod(this$, mids$[mid_getCapacity_55546ef6a647f39b]);
      }

      jdouble ResizableDoubleArray::getContractionCriterion() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getContractionCriterion_b74f83833fdad017]);
      }

      jdouble ResizableDoubleArray::getElement(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElement_2afcbc21f4e57ab2], a0);
      }

      JArray< jdouble > ResizableDoubleArray::getElements() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getElements_25e1757a36c4dde2]));
      }

      jdouble ResizableDoubleArray::getExpansionFactor() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExpansionFactor_b74f83833fdad017]);
      }

      ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode ResizableDoubleArray::getExpansionMode() const
      {
        return ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode(env->callObjectMethod(this$, mids$[mid_getExpansionMode_630c36c2fb1d7068]));
      }

      jint ResizableDoubleArray::getNumElements() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumElements_55546ef6a647f39b]);
      }

      jint ResizableDoubleArray::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      void ResizableDoubleArray::setElement(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setElement_d5322b8b512aeb26], a0, a1);
      }

      void ResizableDoubleArray::setNumElements(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setNumElements_44ed599e93e8a30c], a0);
      }

      jdouble ResizableDoubleArray::substituteMostRecentElement(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_substituteMostRecentElement_04fd0666b613d2ab], a0);
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
      static PyObject *t_ResizableDoubleArray_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ResizableDoubleArray_init_(t_ResizableDoubleArray *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ResizableDoubleArray_addElement(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_addElementRolling(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_addElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_clear(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_compute(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_contract(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_copy(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_discardFrontElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_discardMostRecentElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_equals(t_ResizableDoubleArray *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray_getCapacity(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getContractionCriterion(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getElement(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_getElements(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getExpansionFactor(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getExpansionMode(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getNumElements(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_hashCode(t_ResizableDoubleArray *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray_setElement(t_ResizableDoubleArray *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray_setNumElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_substituteMostRecentElement(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_get__capacity(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__contractionCriterion(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__elements(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__expansionFactor(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__expansionMode(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__numElements(t_ResizableDoubleArray *self, void *data);
      static int t_ResizableDoubleArray_set__numElements(t_ResizableDoubleArray *self, PyObject *arg, void *data);
      static PyGetSetDef t_ResizableDoubleArray__fields_[] = {
        DECLARE_GET_FIELD(t_ResizableDoubleArray, capacity),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, contractionCriterion),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, elements),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, expansionFactor),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, expansionMode),
        DECLARE_GETSET_FIELD(t_ResizableDoubleArray, numElements),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ResizableDoubleArray__methods_[] = {
        DECLARE_METHOD(t_ResizableDoubleArray, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray, addElement, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, addElementRolling, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, addElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, clear, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, compute, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, contract, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, copy, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, discardFrontElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, discardMostRecentElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, equals, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getCapacity, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getContractionCriterion, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getElement, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, getElements, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getExpansionFactor, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getExpansionMode, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getNumElements, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, setElement, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, setNumElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, substituteMostRecentElement, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ResizableDoubleArray)[] = {
        { Py_tp_methods, t_ResizableDoubleArray__methods_ },
        { Py_tp_init, (void *) t_ResizableDoubleArray_init_ },
        { Py_tp_getset, t_ResizableDoubleArray__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ResizableDoubleArray)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ResizableDoubleArray, t_ResizableDoubleArray, ResizableDoubleArray);

      void t_ResizableDoubleArray::install(PyObject *module)
      {
        installType(&PY_TYPE(ResizableDoubleArray), &PY_TYPE_DEF(ResizableDoubleArray), module, "ResizableDoubleArray", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "ExpansionMode", make_descriptor(&PY_TYPE_DEF(ResizableDoubleArray$ExpansionMode)));
      }

      void t_ResizableDoubleArray::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "class_", make_descriptor(ResizableDoubleArray::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "wrapfn_", make_descriptor(t_ResizableDoubleArray::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ResizableDoubleArray_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ResizableDoubleArray::initializeClass, 1)))
          return NULL;
        return t_ResizableDoubleArray::wrap_Object(ResizableDoubleArray(((t_ResizableDoubleArray *) arg)->object.this$));
      }
      static PyObject *t_ResizableDoubleArray_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ResizableDoubleArray::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ResizableDoubleArray_init_(t_ResizableDoubleArray *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ResizableDoubleArray object((jobject) NULL);

            INT_CALL(object = ResizableDoubleArray());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = ResizableDoubleArray(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = ResizableDoubleArray(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = ResizableDoubleArray(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            jdouble a2;
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "IDD", &a0, &a1, &a2))
            {
              INT_CALL(object = ResizableDoubleArray(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jint a0;
            jdouble a1;
            jdouble a2;
            ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode a3((jobject) NULL);
            PyTypeObject **p3;
            JArray< jdouble > a4((jobject) NULL);
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "IDDK[D", ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::util::t_ResizableDoubleArray$ExpansionMode::parameters_, &a4))
            {
              INT_CALL(object = ResizableDoubleArray(a0, a1, a2, a3, a4));
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

      static PyObject *t_ResizableDoubleArray_addElement(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.addElement(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addElement", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_addElementRolling(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.addElementRolling(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "addElementRolling", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_addElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(self->object.addElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_clear(t_ResizableDoubleArray *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_ResizableDoubleArray_compute(t_ResizableDoubleArray *self, PyObject *arg)
      {
        ::org::hipparchus::util::MathArrays$Function a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::hipparchus::util::MathArrays$Function::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compute(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compute", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_contract(t_ResizableDoubleArray *self)
      {
        OBJ_CALL(self->object.contract());
        Py_RETURN_NONE;
      }

      static PyObject *t_ResizableDoubleArray_copy(t_ResizableDoubleArray *self)
      {
        ResizableDoubleArray result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_ResizableDoubleArray::wrap_Object(result);
      }

      static PyObject *t_ResizableDoubleArray_discardFrontElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.discardFrontElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "discardFrontElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_discardMostRecentElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.discardMostRecentElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "discardMostRecentElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_equals(t_ResizableDoubleArray *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ResizableDoubleArray), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ResizableDoubleArray_getCapacity(t_ResizableDoubleArray *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCapacity());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ResizableDoubleArray_getContractionCriterion(t_ResizableDoubleArray *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getContractionCriterion());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ResizableDoubleArray_getElement(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getElement(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getElement", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_getElements(t_ResizableDoubleArray *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getElements());
        return result.wrap();
      }

      static PyObject *t_ResizableDoubleArray_getExpansionFactor(t_ResizableDoubleArray *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExpansionFactor());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ResizableDoubleArray_getExpansionMode(t_ResizableDoubleArray *self)
      {
        ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode result((jobject) NULL);
        OBJ_CALL(result = self->object.getExpansionMode());
        return ::org::hipparchus::util::t_ResizableDoubleArray$ExpansionMode::wrap_Object(result);
      }

      static PyObject *t_ResizableDoubleArray_getNumElements(t_ResizableDoubleArray *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumElements());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ResizableDoubleArray_hashCode(t_ResizableDoubleArray *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ResizableDoubleArray), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ResizableDoubleArray_setElement(t_ResizableDoubleArray *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setElement(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setElement", args);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_setNumElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setNumElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setNumElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_substituteMostRecentElement(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.substituteMostRecentElement(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "substituteMostRecentElement", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_get__capacity(t_ResizableDoubleArray *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCapacity());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ResizableDoubleArray_get__contractionCriterion(t_ResizableDoubleArray *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getContractionCriterion());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ResizableDoubleArray_get__elements(t_ResizableDoubleArray *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getElements());
        return value.wrap();
      }

      static PyObject *t_ResizableDoubleArray_get__expansionFactor(t_ResizableDoubleArray *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExpansionFactor());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ResizableDoubleArray_get__expansionMode(t_ResizableDoubleArray *self, void *data)
      {
        ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode value((jobject) NULL);
        OBJ_CALL(value = self->object.getExpansionMode());
        return ::org::hipparchus::util::t_ResizableDoubleArray$ExpansionMode::wrap_Object(value);
      }

      static PyObject *t_ResizableDoubleArray_get__numElements(t_ResizableDoubleArray *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumElements());
        return PyLong_FromLong((long) value);
      }
      static int t_ResizableDoubleArray_set__numElements(t_ResizableDoubleArray *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setNumElements(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "numElements", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnits.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnits.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *RangeUnits::class$ = NULL;
            jmethodID *RangeUnits::mids$ = NULL;
            bool RangeUnits::live$ = false;
            RangeUnits *RangeUnits::RU = NULL;
            RangeUnits *RangeUnits::km = NULL;
            RangeUnits *RangeUnits::s = NULL;

            jclass RangeUnits::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/RangeUnits");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_23c5752b6e8d9c07] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;");
                mids$[mid_values_cb64de91172f517e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                RU = new RangeUnits(env->getStaticObjectField(cls, "RU", "Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;"));
                km = new RangeUnits(env->getStaticObjectField(cls, "km", "Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;"));
                s = new RangeUnits(env->getStaticObjectField(cls, "s", "Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RangeUnits RangeUnits::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return RangeUnits(env->callStaticObjectMethod(cls, mids$[mid_valueOf_23c5752b6e8d9c07], a0.this$));
            }

            JArray< RangeUnits > RangeUnits::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< RangeUnits >(env->callStaticObjectMethod(cls, mids$[mid_values_cb64de91172f517e]));
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
            static PyObject *t_RangeUnits_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnits_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnits_of_(t_RangeUnits *self, PyObject *args);
            static PyObject *t_RangeUnits_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_RangeUnits_values(PyTypeObject *type);
            static PyObject *t_RangeUnits_get__parameters_(t_RangeUnits *self, void *data);
            static PyGetSetDef t_RangeUnits__fields_[] = {
              DECLARE_GET_FIELD(t_RangeUnits, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RangeUnits__methods_[] = {
              DECLARE_METHOD(t_RangeUnits, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnits, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnits, of_, METH_VARARGS),
              DECLARE_METHOD(t_RangeUnits, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RangeUnits, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RangeUnits)[] = {
              { Py_tp_methods, t_RangeUnits__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_RangeUnits__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RangeUnits)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(RangeUnits, t_RangeUnits, RangeUnits);
            PyObject *t_RangeUnits::wrap_Object(const RangeUnits& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeUnits::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeUnits *self = (t_RangeUnits *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RangeUnits::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeUnits::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeUnits *self = (t_RangeUnits *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RangeUnits::install(PyObject *module)
            {
              installType(&PY_TYPE(RangeUnits), &PY_TYPE_DEF(RangeUnits), module, "RangeUnits", 0);
            }

            void t_RangeUnits::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "class_", make_descriptor(RangeUnits::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "wrapfn_", make_descriptor(t_RangeUnits::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "boxfn_", make_descriptor(boxObject));
              env->getClass(RangeUnits::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "RU", make_descriptor(t_RangeUnits::wrap_Object(*RangeUnits::RU)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "km", make_descriptor(t_RangeUnits::wrap_Object(*RangeUnits::km)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "s", make_descriptor(t_RangeUnits::wrap_Object(*RangeUnits::s)));
            }

            static PyObject *t_RangeUnits_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RangeUnits::initializeClass, 1)))
                return NULL;
              return t_RangeUnits::wrap_Object(RangeUnits(((t_RangeUnits *) arg)->object.this$));
            }
            static PyObject *t_RangeUnits_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RangeUnits::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RangeUnits_of_(t_RangeUnits *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_RangeUnits_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              RangeUnits result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::valueOf(a0));
                return t_RangeUnits::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_RangeUnits_values(PyTypeObject *type)
            {
              JArray< RangeUnits > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::values());
              return JArray<jobject>(result.this$).wrap(t_RangeUnits::wrap_jobject);
            }
            static PyObject *t_RangeUnits_get__parameters_(t_RangeUnits *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/SortedSet.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *AbstractSolarActivityDataLoader::class$ = NULL;
            jmethodID *AbstractSolarActivityDataLoader::mids$ = NULL;
            bool AbstractSolarActivityDataLoader::live$ = false;

            jclass AbstractSolarActivityDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getDataSet_7961e54fd3a47d94] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getUTC_34d3bda0a8989e3e] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/TimeScale;");
                mids$[mid_setMaxDate_02135a6ef25adb4b] = env->getMethodID(cls, "setMaxDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setMinDate_02135a6ef25adb4b] = env->getMethodID(cls, "setMinDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_stillAcceptsData_9ab94ac1dc23b105] = env->getMethodID(cls, "stillAcceptsData", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::SortedSet AbstractSolarActivityDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_7961e54fd3a47d94]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityDataLoader::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityDataLoader::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
            }

            ::org::orekit::time::TimeScale AbstractSolarActivityDataLoader::getUTC() const
            {
              return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getUTC_34d3bda0a8989e3e]));
            }

            void AbstractSolarActivityDataLoader::setMaxDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMaxDate_02135a6ef25adb4b], a0.this$);
            }

            void AbstractSolarActivityDataLoader::setMinDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMinDate_02135a6ef25adb4b], a0.this$);
            }

            jboolean AbstractSolarActivityDataLoader::stillAcceptsData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_9ab94ac1dc23b105]);
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
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_AbstractSolarActivityDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_of_(t_AbstractSolarActivityDataLoader *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader_getDataSet(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_getMaxDate(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_getMinDate(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_getUTC(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_setMaxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_setMinDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_stillAcceptsData(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_get__dataSet(t_AbstractSolarActivityDataLoader *self, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__maxDate(t_AbstractSolarActivityDataLoader *self, void *data);
            static int t_AbstractSolarActivityDataLoader_set__maxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__minDate(t_AbstractSolarActivityDataLoader *self, void *data);
            static int t_AbstractSolarActivityDataLoader_set__minDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__uTC(t_AbstractSolarActivityDataLoader *self, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__parameters_(t_AbstractSolarActivityDataLoader *self, void *data);
            static PyGetSetDef t_AbstractSolarActivityDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader, dataSet),
              DECLARE_GETSET_FIELD(t_AbstractSolarActivityDataLoader, maxDate),
              DECLARE_GETSET_FIELD(t_AbstractSolarActivityDataLoader, minDate),
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader, uTC),
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSolarActivityDataLoader__methods_[] = {
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getDataSet, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getUTC, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, setMaxDate, METH_O),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, setMinDate, METH_O),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, stillAcceptsData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSolarActivityDataLoader)[] = {
              { Py_tp_methods, t_AbstractSolarActivityDataLoader__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractSolarActivityDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSolarActivityDataLoader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSolarActivityDataLoader, t_AbstractSolarActivityDataLoader, AbstractSolarActivityDataLoader);
            PyObject *t_AbstractSolarActivityDataLoader::wrap_Object(const AbstractSolarActivityDataLoader& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader *self = (t_AbstractSolarActivityDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AbstractSolarActivityDataLoader::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader *self = (t_AbstractSolarActivityDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AbstractSolarActivityDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSolarActivityDataLoader), &PY_TYPE_DEF(AbstractSolarActivityDataLoader), module, "AbstractSolarActivityDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(AbstractSolarActivityDataLoader$LineParameters)));
            }

            void t_AbstractSolarActivityDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "class_", make_descriptor(AbstractSolarActivityDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "wrapfn_", make_descriptor(t_AbstractSolarActivityDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSolarActivityDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSolarActivityDataLoader::initializeClass, 1)))
                return NULL;
              return t_AbstractSolarActivityDataLoader::wrap_Object(AbstractSolarActivityDataLoader(((t_AbstractSolarActivityDataLoader *) arg)->object.this$));
            }
            static PyObject *t_AbstractSolarActivityDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSolarActivityDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_of_(t_AbstractSolarActivityDataLoader *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getDataSet(t_AbstractSolarActivityDataLoader *self)
            {
              ::java::util::SortedSet result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getMaxDate(t_AbstractSolarActivityDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getMinDate(t_AbstractSolarActivityDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getUTC(t_AbstractSolarActivityDataLoader *self)
            {
              ::org::orekit::time::TimeScale result((jobject) NULL);
              OBJ_CALL(result = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_setMaxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setMaxDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMaxDate", arg);
              return NULL;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_setMinDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setMinDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMinDate", arg);
              return NULL;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_stillAcceptsData(t_AbstractSolarActivityDataLoader *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.stillAcceptsData());
              Py_RETURN_BOOL(result);
            }
            static PyObject *t_AbstractSolarActivityDataLoader_get__parameters_(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__dataSet(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__maxDate(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractSolarActivityDataLoader_set__maxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setMaxDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maxDate", arg);
              return -1;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__minDate(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractSolarActivityDataLoader_set__minDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setMinDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "minDate", arg);
              return -1;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__uTC(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::org::orekit::time::TimeScale value((jobject) NULL);
              OBJ_CALL(value = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
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
          mids$[mid_loadOffsets_e62d3bb06d56d7e3] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List UTCTAIOffsetsLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_e62d3bb06d56d7e3]));
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
#include "org/orekit/propagation/sampling/PythonFieldOrekitFixedStepHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
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
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_54d9efbf99822980] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_54d9efbf99822980] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_init_6c5f4137442325ee] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOrekitFixedStepHandler::PythonFieldOrekitFixedStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonFieldOrekitFixedStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonFieldOrekitFixedStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonFieldOrekitFixedStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm04Data::class$ = NULL;
              jmethodID *SsrIgm04Data::mids$ = NULL;
              bool SsrIgm04Data::live$ = false;

              jclass SsrIgm04Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getHighRateClockCorrection_b74f83833fdad017] = env->getMethodID(cls, "getHighRateClockCorrection", "()D");
                  mids$[mid_setHighRateClockCorrection_8ba9fe7a847cecad] = env->getMethodID(cls, "setHighRateClockCorrection", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm04Data::SsrIgm04Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jdouble SsrIgm04Data::getHighRateClockCorrection() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getHighRateClockCorrection_b74f83833fdad017]);
              }

              void SsrIgm04Data::setHighRateClockCorrection(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setHighRateClockCorrection_8ba9fe7a847cecad], a0);
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
              static PyObject *t_SsrIgm04Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm04Data_init_(t_SsrIgm04Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm04Data_getHighRateClockCorrection(t_SsrIgm04Data *self);
              static PyObject *t_SsrIgm04Data_setHighRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg);
              static PyObject *t_SsrIgm04Data_get__highRateClockCorrection(t_SsrIgm04Data *self, void *data);
              static int t_SsrIgm04Data_set__highRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm04Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm04Data, highRateClockCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm04Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm04Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04Data, getHighRateClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm04Data, setHighRateClockCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm04Data)[] = {
                { Py_tp_methods, t_SsrIgm04Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm04Data_init_ },
                { Py_tp_getset, t_SsrIgm04Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm04Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm04Data, t_SsrIgm04Data, SsrIgm04Data);

              void t_SsrIgm04Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm04Data), &PY_TYPE_DEF(SsrIgm04Data), module, "SsrIgm04Data", 0);
              }

              void t_SsrIgm04Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Data), "class_", make_descriptor(SsrIgm04Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Data), "wrapfn_", make_descriptor(t_SsrIgm04Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm04Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm04Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm04Data::wrap_Object(SsrIgm04Data(((t_SsrIgm04Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm04Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm04Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm04Data_init_(t_SsrIgm04Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm04Data object((jobject) NULL);

                INT_CALL(object = SsrIgm04Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm04Data_getHighRateClockCorrection(t_SsrIgm04Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getHighRateClockCorrection());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm04Data_setHighRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setHighRateClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setHighRateClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm04Data_get__highRateClockCorrection(t_SsrIgm04Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getHighRateClockCorrection());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm04Data_set__highRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setHighRateClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "highRateClockCorrection", arg);
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
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *LexicalAnalyzer::class$ = NULL;
            jmethodID *LexicalAnalyzer::mids$ = NULL;
            bool LexicalAnalyzer::live$ = false;

            jclass LexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_315581e8824888b8] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::Object LexicalAnalyzer::accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_accept_315581e8824888b8], a0.this$));
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
        namespace utils {
          namespace lexical {
            static PyObject *t_LexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzer_accept(t_LexicalAnalyzer *self, PyObject *arg);

            static PyMethodDef t_LexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_LexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LexicalAnalyzer)[] = {
              { Py_tp_methods, t_LexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LexicalAnalyzer, t_LexicalAnalyzer, LexicalAnalyzer);

            void t_LexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(LexicalAnalyzer), &PY_TYPE_DEF(LexicalAnalyzer), module, "LexicalAnalyzer", 0);
            }

            void t_LexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzer), "class_", make_descriptor(LexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzer), "wrapfn_", make_descriptor(t_LexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_LexicalAnalyzer::wrap_Object(LexicalAnalyzer(((t_LexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_LexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LexicalAnalyzer_accept(t_LexicalAnalyzer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::MessageParser a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::lexical::MessageParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::parameters_))
              {
                OBJ_CALL(result = self->object.accept(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadataKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmMetadataKey::class$ = NULL;
            jmethodID *TdmMetadataKey::mids$ = NULL;
            bool TdmMetadataKey::live$ = false;
            TdmMetadataKey *TdmMetadataKey::ANGLE_TYPE = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTIONS_APPLIED = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ABERRATION_DIURNAL = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ABERRATION_YEARLY = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ANGLE_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ANGLE_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_DOPPLER = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_MAG = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_RANGE = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_RCS = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_RECEIVE = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_TRANSMIT = NULL;
            TdmMetadataKey *TdmMetadataKey::DATA_QUALITY = NULL;
            TdmMetadataKey *TdmMetadataKey::DATA_TYPES = NULL;
            TdmMetadataKey *TdmMetadataKey::DOPPLER_COUNT_BIAS = NULL;
            TdmMetadataKey *TdmMetadataKey::DOPPLER_COUNT_ROLLOVER = NULL;
            TdmMetadataKey *TdmMetadataKey::DOPPLER_COUNT_SCALE = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::FREQ_OFFSET = NULL;
            TdmMetadataKey *TdmMetadataKey::INTEGRATION_INTERVAL = NULL;
            TdmMetadataKey *TdmMetadataKey::INTEGRATION_REF = NULL;
            TdmMetadataKey *TdmMetadataKey::INTERPOLATION = NULL;
            TdmMetadataKey *TdmMetadataKey::INTERPOLATION_DEGREE = NULL;
            TdmMetadataKey *TdmMetadataKey::MODE = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::PATH = NULL;
            TdmMetadataKey *TdmMetadataKey::PATH_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::PATH_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::RANGE_MODE = NULL;
            TdmMetadataKey *TdmMetadataKey::RANGE_MODULUS = NULL;
            TdmMetadataKey *TdmMetadataKey::RANGE_UNITS = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_BAND = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::REFERENCE_FRAME = NULL;
            TdmMetadataKey *TdmMetadataKey::START_TIME = NULL;
            TdmMetadataKey *TdmMetadataKey::STOP_TIME = NULL;
            TdmMetadataKey *TdmMetadataKey::TIMETAG_REF = NULL;
            TdmMetadataKey *TdmMetadataKey::TRACK_ID = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_BAND = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::TURNAROUND_DENOMINATOR = NULL;
            TdmMetadataKey *TdmMetadataKey::TURNAROUND_NUMERATOR = NULL;

            jclass TdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_c6df8ae1c43904fb] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;)Z");
                mids$[mid_valueOf_49e9325975047108] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;");
                mids$[mid_values_fc6d45bc45ecb912] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ANGLE_TYPE = new TdmMetadataKey(env->getStaticObjectField(cls, "ANGLE_TYPE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTIONS_APPLIED = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTIONS_APPLIED", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ABERRATION_DIURNAL = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ABERRATION_DIURNAL", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ABERRATION_YEARLY = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ABERRATION_YEARLY", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ANGLE_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ANGLE_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ANGLE_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ANGLE_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_DOPPLER = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_DOPPLER", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_MAG = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_MAG", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_RANGE = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_RANGE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_RCS = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_RCS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_RECEIVE = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_RECEIVE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_TRANSMIT = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_TRANSMIT", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DATA_QUALITY = new TdmMetadataKey(env->getStaticObjectField(cls, "DATA_QUALITY", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DATA_TYPES = new TdmMetadataKey(env->getStaticObjectField(cls, "DATA_TYPES", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DOPPLER_COUNT_BIAS = new TdmMetadataKey(env->getStaticObjectField(cls, "DOPPLER_COUNT_BIAS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DOPPLER_COUNT_ROLLOVER = new TdmMetadataKey(env->getStaticObjectField(cls, "DOPPLER_COUNT_ROLLOVER", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DOPPLER_COUNT_SCALE = new TdmMetadataKey(env->getStaticObjectField(cls, "DOPPLER_COUNT_SCALE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                FREQ_OFFSET = new TdmMetadataKey(env->getStaticObjectField(cls, "FREQ_OFFSET", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTEGRATION_INTERVAL = new TdmMetadataKey(env->getStaticObjectField(cls, "INTEGRATION_INTERVAL", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTEGRATION_REF = new TdmMetadataKey(env->getStaticObjectField(cls, "INTEGRATION_REF", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTERPOLATION = new TdmMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTERPOLATION_DEGREE = new TdmMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                MODE = new TdmMetadataKey(env->getStaticObjectField(cls, "MODE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PATH = new TdmMetadataKey(env->getStaticObjectField(cls, "PATH", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PATH_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "PATH_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PATH_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "PATH_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RANGE_MODE = new TdmMetadataKey(env->getStaticObjectField(cls, "RANGE_MODE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RANGE_MODULUS = new TdmMetadataKey(env->getStaticObjectField(cls, "RANGE_MODULUS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RANGE_UNITS = new TdmMetadataKey(env->getStaticObjectField(cls, "RANGE_UNITS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_BAND = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_BAND", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                REFERENCE_FRAME = new TdmMetadataKey(env->getStaticObjectField(cls, "REFERENCE_FRAME", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                START_TIME = new TdmMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                STOP_TIME = new TdmMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TIMETAG_REF = new TdmMetadataKey(env->getStaticObjectField(cls, "TIMETAG_REF", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRACK_ID = new TdmMetadataKey(env->getStaticObjectField(cls, "TRACK_ID", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_BAND = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_BAND", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TURNAROUND_DENOMINATOR = new TdmMetadataKey(env->getStaticObjectField(cls, "TURNAROUND_DENOMINATOR", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TURNAROUND_NUMERATOR = new TdmMetadataKey(env->getStaticObjectField(cls, "TURNAROUND_NUMERATOR", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean TdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_c6df8ae1c43904fb], a0.this$, a1.this$, a2.this$);
            }

            TdmMetadataKey TdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_49e9325975047108], a0.this$));
            }

            JArray< TdmMetadataKey > TdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_fc6d45bc45ecb912]));
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
            static PyObject *t_TdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmMetadataKey_of_(t_TdmMetadataKey *self, PyObject *args);
            static PyObject *t_TdmMetadataKey_process(t_TdmMetadataKey *self, PyObject *args);
            static PyObject *t_TdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_TdmMetadataKey_get__parameters_(t_TdmMetadataKey *self, void *data);
            static PyGetSetDef t_TdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_TdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_TdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmMetadataKey)[] = {
              { Py_tp_methods, t_TdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TdmMetadataKey, t_TdmMetadataKey, TdmMetadataKey);
            PyObject *t_TdmMetadataKey::wrap_Object(const TdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmMetadataKey *self = (t_TdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmMetadataKey *self = (t_TdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmMetadataKey), &PY_TYPE_DEF(TdmMetadataKey), module, "TdmMetadataKey", 0);
            }

            void t_TdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "class_", make_descriptor(TdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "wrapfn_", make_descriptor(t_TdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(TdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "ANGLE_TYPE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::ANGLE_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTIONS_APPLIED", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTIONS_APPLIED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ABERRATION_DIURNAL", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ABERRATION_DIURNAL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ABERRATION_YEARLY", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ABERRATION_YEARLY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ANGLE_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ANGLE_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ANGLE_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ANGLE_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_DOPPLER", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_DOPPLER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_MAG", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_MAG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_RANGE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_RANGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_RCS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_RCS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_RECEIVE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_RECEIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_TRANSMIT", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_TRANSMIT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DATA_QUALITY", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DATA_QUALITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DATA_TYPES", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DATA_TYPES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DOPPLER_COUNT_BIAS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DOPPLER_COUNT_BIAS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DOPPLER_COUNT_ROLLOVER", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DOPPLER_COUNT_ROLLOVER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DOPPLER_COUNT_SCALE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DOPPLER_COUNT_SCALE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "FREQ_OFFSET", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::FREQ_OFFSET)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTEGRATION_INTERVAL", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTEGRATION_INTERVAL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTEGRATION_REF", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTEGRATION_REF)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTERPOLATION", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTERPOLATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTERPOLATION_DEGREE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "MODE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::MODE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PATH", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PATH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PATH_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PATH_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PATH_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PATH_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RANGE_MODE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RANGE_MODE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RANGE_MODULUS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RANGE_MODULUS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RANGE_UNITS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RANGE_UNITS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_BAND", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_BAND)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "REFERENCE_FRAME", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::REFERENCE_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "START_TIME", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::START_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "STOP_TIME", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::STOP_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TIMETAG_REF", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TIMETAG_REF)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRACK_ID", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRACK_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_BAND", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_BAND)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TURNAROUND_DENOMINATOR", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TURNAROUND_DENOMINATOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TURNAROUND_NUMERATOR", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TURNAROUND_NUMERATOR)));
            }

            static PyObject *t_TdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_TdmMetadataKey::wrap_Object(TdmMetadataKey(((t_TdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_TdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmMetadataKey_of_(t_TdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TdmMetadataKey_process(t_TdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_TdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmMetadataKey::valueOf(a0));
                return t_TdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< TdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_TdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_TdmMetadataKey_get__parameters_(t_TdmMetadataKey *self, void *data)
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
#include "org/orekit/utils/PythonParameterFunction.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonParameterFunction::class$ = NULL;
      jmethodID *PythonParameterFunction::mids$ = NULL;
      bool PythonParameterFunction::live$ = false;

      jclass PythonParameterFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonParameterFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_863711af540c36c0] = env->getMethodID(cls, "value", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParameterFunction::PythonParameterFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonParameterFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonParameterFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonParameterFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonParameterFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParameterFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParameterFunction_init_(t_PythonParameterFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParameterFunction_finalize(t_PythonParameterFunction *self);
      static PyObject *t_PythonParameterFunction_pythonExtension(t_PythonParameterFunction *self, PyObject *args);
      static void JNICALL t_PythonParameterFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonParameterFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static PyObject *t_PythonParameterFunction_get__self(t_PythonParameterFunction *self, void *data);
      static PyGetSetDef t_PythonParameterFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParameterFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParameterFunction__methods_[] = {
        DECLARE_METHOD(t_PythonParameterFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParameterFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParameterFunction)[] = {
        { Py_tp_methods, t_PythonParameterFunction__methods_ },
        { Py_tp_init, (void *) t_PythonParameterFunction_init_ },
        { Py_tp_getset, t_PythonParameterFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParameterFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParameterFunction, t_PythonParameterFunction, PythonParameterFunction);

      void t_PythonParameterFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParameterFunction), &PY_TYPE_DEF(PythonParameterFunction), module, "PythonParameterFunction", 1);
      }

      void t_PythonParameterFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterFunction), "class_", make_descriptor(PythonParameterFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterFunction), "wrapfn_", make_descriptor(t_PythonParameterFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParameterFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonParameterFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonParameterFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonParameterFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParameterFunction::initializeClass, 1)))
          return NULL;
        return t_PythonParameterFunction::wrap_Object(PythonParameterFunction(((t_PythonParameterFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonParameterFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParameterFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParameterFunction_init_(t_PythonParameterFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonParameterFunction object((jobject) NULL);

        INT_CALL(object = PythonParameterFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParameterFunction_finalize(t_PythonParameterFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParameterFunction_pythonExtension(t_PythonParameterFunction *self, PyObject *args)
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

      static void JNICALL t_PythonParameterFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterFunction::mids$[PythonParameterFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParameterFunction::mids$[PythonParameterFunction::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonParameterFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterFunction::mids$[PythonParameterFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::utils::t_ParameterDriver::wrap_Object(::org::orekit::utils::ParameterDriver(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "value", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static PyObject *t_PythonParameterFunction_get__self(t_PythonParameterFunction *self, void *data)
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
#include "org/hipparchus/linear/SparseRealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseRealVector::class$ = NULL;
      jmethodID *SparseRealVector::mids$ = NULL;
      bool SparseRealVector::live$ = false;

      jclass SparseRealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseRealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SparseRealVector::SparseRealVector() : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_SparseRealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseRealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SparseRealVector_init_(t_SparseRealVector *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_SparseRealVector__methods_[] = {
        DECLARE_METHOD(t_SparseRealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseRealVector, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseRealVector)[] = {
        { Py_tp_methods, t_SparseRealVector__methods_ },
        { Py_tp_init, (void *) t_SparseRealVector_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseRealVector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::RealVector),
        NULL
      };

      DEFINE_TYPE(SparseRealVector, t_SparseRealVector, SparseRealVector);

      void t_SparseRealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseRealVector), &PY_TYPE_DEF(SparseRealVector), module, "SparseRealVector", 0);
      }

      void t_SparseRealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealVector), "class_", make_descriptor(SparseRealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealVector), "wrapfn_", make_descriptor(t_SparseRealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseRealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseRealVector::initializeClass, 1)))
          return NULL;
        return t_SparseRealVector::wrap_Object(SparseRealVector(((t_SparseRealVector *) arg)->object.this$));
      }
      static PyObject *t_SparseRealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseRealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SparseRealVector_init_(t_SparseRealVector *self, PyObject *args, PyObject *kwds)
      {
        SparseRealVector object((jobject) NULL);

        INT_CALL(object = SparseRealVector());
        self->object = object;

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonStreamOpener.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource$StreamOpener.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonStreamOpener::class$ = NULL;
      jmethodID *PythonStreamOpener::mids$ = NULL;
      bool PythonStreamOpener::live$ = false;

      jclass PythonStreamOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonStreamOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_openOnce_6c37d64ac8173086] = env->getMethodID(cls, "openOnce", "()Ljava/io/InputStream;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStreamOpener::PythonStreamOpener() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonStreamOpener::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonStreamOpener::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonStreamOpener::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonStreamOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStreamOpener_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStreamOpener_init_(t_PythonStreamOpener *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStreamOpener_finalize(t_PythonStreamOpener *self);
      static PyObject *t_PythonStreamOpener_pythonExtension(t_PythonStreamOpener *self, PyObject *args);
      static jobject JNICALL t_PythonStreamOpener_openOnce0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonStreamOpener_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonStreamOpener_get__self(t_PythonStreamOpener *self, void *data);
      static PyGetSetDef t_PythonStreamOpener__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStreamOpener, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStreamOpener__methods_[] = {
        DECLARE_METHOD(t_PythonStreamOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStreamOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStreamOpener, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStreamOpener, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStreamOpener)[] = {
        { Py_tp_methods, t_PythonStreamOpener__methods_ },
        { Py_tp_init, (void *) t_PythonStreamOpener_init_ },
        { Py_tp_getset, t_PythonStreamOpener__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStreamOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStreamOpener, t_PythonStreamOpener, PythonStreamOpener);

      void t_PythonStreamOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStreamOpener), &PY_TYPE_DEF(PythonStreamOpener), module, "PythonStreamOpener", 1);
      }

      void t_PythonStreamOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStreamOpener), "class_", make_descriptor(PythonStreamOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStreamOpener), "wrapfn_", make_descriptor(t_PythonStreamOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStreamOpener), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStreamOpener::initializeClass);
        JNINativeMethod methods[] = {
          { "openOnce", "()Ljava/io/InputStream;", (void *) t_PythonStreamOpener_openOnce0 },
          { "pythonDecRef", "()V", (void *) t_PythonStreamOpener_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonStreamOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStreamOpener::initializeClass, 1)))
          return NULL;
        return t_PythonStreamOpener::wrap_Object(PythonStreamOpener(((t_PythonStreamOpener *) arg)->object.this$));
      }
      static PyObject *t_PythonStreamOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStreamOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStreamOpener_init_(t_PythonStreamOpener *self, PyObject *args, PyObject *kwds)
      {
        PythonStreamOpener object((jobject) NULL);

        INT_CALL(object = PythonStreamOpener());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStreamOpener_finalize(t_PythonStreamOpener *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStreamOpener_pythonExtension(t_PythonStreamOpener *self, PyObject *args)
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

      static jobject JNICALL t_PythonStreamOpener_openOnce0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStreamOpener::mids$[PythonStreamOpener::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::io::InputStream value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "openOnce", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::io::InputStream::initializeClass, &value))
        {
          throwTypeError("openOnce", result);
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

      static void JNICALL t_PythonStreamOpener_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStreamOpener::mids$[PythonStreamOpener::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStreamOpener::mids$[PythonStreamOpener::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonStreamOpener_get__self(t_PythonStreamOpener *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/RuleFactory.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *RuleFactory::class$ = NULL;
          jmethodID *RuleFactory::mids$ = NULL;
          bool RuleFactory::live$ = false;

          jclass RuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/RuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getRule_acde278e36767299] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::util::Pair RuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_acde278e36767299], a0));
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
          static PyObject *t_RuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RuleFactory_getRule(t_RuleFactory *self, PyObject *arg);

          static PyMethodDef t_RuleFactory__methods_[] = {
            DECLARE_METHOD(t_RuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RuleFactory)[] = {
            { Py_tp_methods, t_RuleFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RuleFactory, t_RuleFactory, RuleFactory);

          void t_RuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(RuleFactory), &PY_TYPE_DEF(RuleFactory), module, "RuleFactory", 0);
          }

          void t_RuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleFactory), "class_", make_descriptor(RuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleFactory), "wrapfn_", make_descriptor(t_RuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RuleFactory::initializeClass, 1)))
              return NULL;
            return t_RuleFactory::wrap_Object(RuleFactory(((t_RuleFactory *) arg)->object.this$));
          }
          static PyObject *t_RuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RuleFactory_getRule(t_RuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::java::lang::PY_TYPE(Object), ::java::lang::PY_TYPE(Object));
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
        }
      }
    }
  }
}
