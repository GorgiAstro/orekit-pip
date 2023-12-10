#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ITRFVersionLoader.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersionLoader::class$ = NULL;
      jmethodID *ITRFVersionLoader::mids$ = NULL;
      bool ITRFVersionLoader::live$ = false;
      ::java::lang::String *ITRFVersionLoader::SUPPORTED_NAMES = NULL;

      jclass ITRFVersionLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersionLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_63232a42a5419b09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_getConfiguration_20c55d75fa126896] = env->getMethodID(cls, "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ITRFVersionLoader::ITRFVersionLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ITRFVersionLoader::ITRFVersionLoader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

      ITRFVersionLoader::ITRFVersionLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_63232a42a5419b09, a0.this$, a1.this$)) {}

      ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration ITRFVersionLoader::getConfiguration(const ::java::lang::String & a0, jint a1) const
      {
        return ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration(env->callObjectMethod(this$, mids$[mid_getConfiguration_20c55d75fa126896], a0.this$, a1));
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
      static PyObject *t_ITRFVersionLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersionLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ITRFVersionLoader_init_(t_ITRFVersionLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ITRFVersionLoader_getConfiguration(t_ITRFVersionLoader *self, PyObject *args);

      static PyMethodDef t_ITRFVersionLoader__methods_[] = {
        DECLARE_METHOD(t_ITRFVersionLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader, getConfiguration, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersionLoader)[] = {
        { Py_tp_methods, t_ITRFVersionLoader__methods_ },
        { Py_tp_init, (void *) t_ITRFVersionLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersionLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ITRFVersionLoader, t_ITRFVersionLoader, ITRFVersionLoader);

      void t_ITRFVersionLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersionLoader), &PY_TYPE_DEF(ITRFVersionLoader), module, "ITRFVersionLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "ITRFVersionConfiguration", make_descriptor(&PY_TYPE_DEF(ITRFVersionLoader$ITRFVersionConfiguration)));
      }

      void t_ITRFVersionLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "class_", make_descriptor(ITRFVersionLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "wrapfn_", make_descriptor(t_ITRFVersionLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(ITRFVersionLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "SUPPORTED_NAMES", make_descriptor(j2p(*ITRFVersionLoader::SUPPORTED_NAMES)));
      }

      static PyObject *t_ITRFVersionLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersionLoader::initializeClass, 1)))
          return NULL;
        return t_ITRFVersionLoader::wrap_Object(ITRFVersionLoader(((t_ITRFVersionLoader *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersionLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersionLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ITRFVersionLoader_init_(t_ITRFVersionLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ITRFVersionLoader object((jobject) NULL);

            INT_CALL(object = ITRFVersionLoader());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ITRFVersionLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = ITRFVersionLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            ITRFVersionLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ITRFVersionLoader(a0, a1));
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

      static PyObject *t_ITRFVersionLoader_getConfiguration(t_ITRFVersionLoader *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        jint a1;
        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration result((jobject) NULL);

        if (!parseArgs(args, "sI", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getConfiguration(a0, a1));
          return ::org::orekit::frames::t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getConfiguration", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/AbstractScheduler.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/SortedSet.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/time/DatesSelector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AbstractScheduler::class$ = NULL;
          jmethodID *AbstractScheduler::mids$ = NULL;
          bool AbstractScheduler::live$ = false;

          jclass AbstractScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AbstractScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_generate_e61f6829e4c9c5f5] = env->getMethodID(cls, "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;");
              mids$[mid_getBuilder_63a5a16953d5c5b8] = env->getMethodID(cls, "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;");
              mids$[mid_getSelector_3bc688e0bfd96a7f] = env->getMethodID(cls, "getSelector", "()Lorg/orekit/time/DatesSelector;");
              mids$[mid_init_a9e71d848b81c8f8] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_measurementIsFeasible_db6d81809797ddaa] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::SortedSet AbstractScheduler::generate(const ::java::util::Map & a0) const
          {
            return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_generate_e61f6829e4c9c5f5], a0.this$));
          }

          ::org::orekit::estimation::measurements::generation::MeasurementBuilder AbstractScheduler::getBuilder() const
          {
            return ::org::orekit::estimation::measurements::generation::MeasurementBuilder(env->callObjectMethod(this$, mids$[mid_getBuilder_63a5a16953d5c5b8]));
          }

          ::org::orekit::time::DatesSelector AbstractScheduler::getSelector() const
          {
            return ::org::orekit::time::DatesSelector(env->callObjectMethod(this$, mids$[mid_getSelector_3bc688e0bfd96a7f]));
          }

          void AbstractScheduler::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_a9e71d848b81c8f8], a0.this$, a1.this$);
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
          static PyObject *t_AbstractScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractScheduler_of_(t_AbstractScheduler *self, PyObject *args);
          static PyObject *t_AbstractScheduler_generate(t_AbstractScheduler *self, PyObject *arg);
          static PyObject *t_AbstractScheduler_getBuilder(t_AbstractScheduler *self);
          static PyObject *t_AbstractScheduler_getSelector(t_AbstractScheduler *self);
          static PyObject *t_AbstractScheduler_init(t_AbstractScheduler *self, PyObject *args);
          static PyObject *t_AbstractScheduler_get__builder(t_AbstractScheduler *self, void *data);
          static PyObject *t_AbstractScheduler_get__selector(t_AbstractScheduler *self, void *data);
          static PyObject *t_AbstractScheduler_get__parameters_(t_AbstractScheduler *self, void *data);
          static PyGetSetDef t_AbstractScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractScheduler, builder),
            DECLARE_GET_FIELD(t_AbstractScheduler, selector),
            DECLARE_GET_FIELD(t_AbstractScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractScheduler__methods_[] = {
            DECLARE_METHOD(t_AbstractScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractScheduler, generate, METH_O),
            DECLARE_METHOD(t_AbstractScheduler, getBuilder, METH_NOARGS),
            DECLARE_METHOD(t_AbstractScheduler, getSelector, METH_NOARGS),
            DECLARE_METHOD(t_AbstractScheduler, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractScheduler)[] = {
            { Py_tp_methods, t_AbstractScheduler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractScheduler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractScheduler, t_AbstractScheduler, AbstractScheduler);
          PyObject *t_AbstractScheduler::wrap_Object(const AbstractScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractScheduler *self = (t_AbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractScheduler *self = (t_AbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractScheduler), &PY_TYPE_DEF(AbstractScheduler), module, "AbstractScheduler", 0);
          }

          void t_AbstractScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractScheduler), "class_", make_descriptor(AbstractScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractScheduler), "wrapfn_", make_descriptor(t_AbstractScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractScheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractScheduler::initializeClass, 1)))
              return NULL;
            return t_AbstractScheduler::wrap_Object(AbstractScheduler(((t_AbstractScheduler *) arg)->object.this$));
          }
          static PyObject *t_AbstractScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractScheduler_of_(t_AbstractScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractScheduler_generate(t_AbstractScheduler *self, PyObject *arg)
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::SortedSet result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.generate(a0));
              return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "generate", arg);
            return NULL;
          }

          static PyObject *t_AbstractScheduler_getBuilder(t_AbstractScheduler *self)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder result((jobject) NULL);
            OBJ_CALL(result = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_AbstractScheduler_getSelector(t_AbstractScheduler *self)
          {
            ::org::orekit::time::DatesSelector result((jobject) NULL);
            OBJ_CALL(result = self->object.getSelector());
            return ::org::orekit::time::t_DatesSelector::wrap_Object(result);
          }

          static PyObject *t_AbstractScheduler_init(t_AbstractScheduler *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }
          static PyObject *t_AbstractScheduler_get__parameters_(t_AbstractScheduler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractScheduler_get__builder(t_AbstractScheduler *self, void *data)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder value((jobject) NULL);
            OBJ_CALL(value = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(value);
          }

          static PyObject *t_AbstractScheduler_get__selector(t_AbstractScheduler *self, void *data)
          {
            ::org::orekit::time::DatesSelector value((jobject) NULL);
            OBJ_CALL(value = self->object.getSelector());
            return ::org::orekit::time::t_DatesSelector::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *StreamingOcmWriter$BlockWriter::class$ = NULL;
              jmethodID *StreamingOcmWriter$BlockWriter::mids$ = NULL;
              bool StreamingOcmWriter$BlockWriter::live$ = false;

              jclass StreamingOcmWriter$BlockWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_5e771c0a59ef898d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter;)V");
                  mids$[mid_finish_0ee5c56004643a2e] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_handleStep_0ee5c56004643a2e] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_init_eb5e26882ba2d9b9] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOcmWriter$BlockWriter::StreamingOcmWriter$BlockWriter(const ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5e771c0a59ef898d, a0.this$)) {}

              void StreamingOcmWriter$BlockWriter::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_finish_0ee5c56004643a2e], a0.this$);
              }

              void StreamingOcmWriter$BlockWriter::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_handleStep_0ee5c56004643a2e], a0.this$);
              }

              void StreamingOcmWriter$BlockWriter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_init_eb5e26882ba2d9b9], a0.this$, a1.this$, a2);
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
              static PyObject *t_StreamingOcmWriter$BlockWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOcmWriter$BlockWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOcmWriter$BlockWriter_init_(t_StreamingOcmWriter$BlockWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOcmWriter$BlockWriter_finish(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg);
              static PyObject *t_StreamingOcmWriter$BlockWriter_handleStep(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg);
              static PyObject *t_StreamingOcmWriter$BlockWriter_init(t_StreamingOcmWriter$BlockWriter *self, PyObject *args);

              static PyMethodDef t_StreamingOcmWriter$BlockWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, finish, METH_O),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, handleStep, METH_O),
                DECLARE_METHOD(t_StreamingOcmWriter$BlockWriter, init, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOcmWriter$BlockWriter)[] = {
                { Py_tp_methods, t_StreamingOcmWriter$BlockWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOcmWriter$BlockWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOcmWriter$BlockWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOcmWriter$BlockWriter, t_StreamingOcmWriter$BlockWriter, StreamingOcmWriter$BlockWriter);

              void t_StreamingOcmWriter$BlockWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOcmWriter$BlockWriter), &PY_TYPE_DEF(StreamingOcmWriter$BlockWriter), module, "StreamingOcmWriter$BlockWriter", 0);
              }

              void t_StreamingOcmWriter$BlockWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter$BlockWriter), "class_", make_descriptor(StreamingOcmWriter$BlockWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter$BlockWriter), "wrapfn_", make_descriptor(t_StreamingOcmWriter$BlockWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter$BlockWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOcmWriter$BlockWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOcmWriter$BlockWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOcmWriter$BlockWriter::wrap_Object(StreamingOcmWriter$BlockWriter(((t_StreamingOcmWriter$BlockWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOcmWriter$BlockWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOcmWriter$BlockWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOcmWriter$BlockWriter_init_(t_StreamingOcmWriter$BlockWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter a0((jobject) NULL);
                StreamingOcmWriter$BlockWriter object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter::initializeClass, &a0))
                {
                  INT_CALL(object = StreamingOcmWriter$BlockWriter(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingOcmWriter$BlockWriter_finish(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.finish(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "finish", arg);
                return NULL;
              }

              static PyObject *t_StreamingOcmWriter$BlockWriter_handleStep(t_StreamingOcmWriter$BlockWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.handleStep(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
                return NULL;
              }

              static PyObject *t_StreamingOcmWriter$BlockWriter_init(t_StreamingOcmWriter$BlockWriter *self, PyObject *args)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.init(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "init", args);
                return NULL;
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
#include "org/orekit/attitudes/FixedRate.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FixedRate::class$ = NULL;
      jmethodID *FixedRate::mids$ = NULL;
      bool FixedRate::live$ = false;

      jclass FixedRate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FixedRate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ba686ec2be369c23] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getReferenceAttitude_bd12f6f74bd44dca] = env->getMethodID(cls, "getReferenceAttitude", "()Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedRate::FixedRate(const ::org::orekit::attitudes::Attitude & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ba686ec2be369c23, a0.this$)) {}

      ::org::orekit::attitudes::Attitude FixedRate::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude FixedRate::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude FixedRate::getReferenceAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getReferenceAttitude_bd12f6f74bd44dca]));
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
      static PyObject *t_FixedRate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedRate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedRate_init_(t_FixedRate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedRate_getAttitude(t_FixedRate *self, PyObject *args);
      static PyObject *t_FixedRate_getReferenceAttitude(t_FixedRate *self);
      static PyObject *t_FixedRate_get__referenceAttitude(t_FixedRate *self, void *data);
      static PyGetSetDef t_FixedRate__fields_[] = {
        DECLARE_GET_FIELD(t_FixedRate, referenceAttitude),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FixedRate__methods_[] = {
        DECLARE_METHOD(t_FixedRate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedRate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedRate, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_FixedRate, getReferenceAttitude, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedRate)[] = {
        { Py_tp_methods, t_FixedRate__methods_ },
        { Py_tp_init, (void *) t_FixedRate_init_ },
        { Py_tp_getset, t_FixedRate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedRate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedRate, t_FixedRate, FixedRate);

      void t_FixedRate::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedRate), &PY_TYPE_DEF(FixedRate), module, "FixedRate", 0);
      }

      void t_FixedRate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRate), "class_", make_descriptor(FixedRate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRate), "wrapfn_", make_descriptor(t_FixedRate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedRate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedRate::initializeClass, 1)))
          return NULL;
        return t_FixedRate::wrap_Object(FixedRate(((t_FixedRate *) arg)->object.this$));
      }
      static PyObject *t_FixedRate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedRate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedRate_init_(t_FixedRate *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::attitudes::Attitude a0((jobject) NULL);
        FixedRate object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::attitudes::Attitude::initializeClass, &a0))
        {
          INT_CALL(object = FixedRate(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedRate_getAttitude(t_FixedRate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_FixedRate_getReferenceAttitude(t_FixedRate *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_FixedRate_get__referenceAttitude(t_FixedRate *self, void *data)
      {
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {

              ::java::lang::Class *SsrIm201Data::class$ = NULL;
              jmethodID *SsrIm201Data::mids$ = NULL;
              bool SsrIm201Data::live$ = false;

              jclass SsrIm201Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCnm_0358d8ea02f2cdb1] = env->getMethodID(cls, "getCnm", "()[[D");
                  mids$[mid_getHeightIonosphericLayer_dff5885c2c873297] = env->getMethodID(cls, "getHeightIonosphericLayer", "()D");
                  mids$[mid_getSnm_0358d8ea02f2cdb1] = env->getMethodID(cls, "getSnm", "()[[D");
                  mids$[mid_getSphericalHarmonicsDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getSphericalHarmonicsDegree", "()I");
                  mids$[mid_getSphericalHarmonicsOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getSphericalHarmonicsOrder", "()I");
                  mids$[mid_setCnm_a0befc7f3dc19e41] = env->getMethodID(cls, "setCnm", "([[D)V");
                  mids$[mid_setHeightIonosphericLayer_17db3a65980d3441] = env->getMethodID(cls, "setHeightIonosphericLayer", "(D)V");
                  mids$[mid_setSnm_a0befc7f3dc19e41] = env->getMethodID(cls, "setSnm", "([[D)V");
                  mids$[mid_setSphericalHarmonicsDegree_99803b0791f320ff] = env->getMethodID(cls, "setSphericalHarmonicsDegree", "(I)V");
                  mids$[mid_setSphericalHarmonicsOrder_99803b0791f320ff] = env->getMethodID(cls, "setSphericalHarmonicsOrder", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIm201Data::SsrIm201Data() : ::org::orekit::gnss::metric::messages::ssr::SsrData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              JArray< JArray< jdouble > > SsrIm201Data::getCnm() const
              {
                return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCnm_0358d8ea02f2cdb1]));
              }

              jdouble SsrIm201Data::getHeightIonosphericLayer() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getHeightIonosphericLayer_dff5885c2c873297]);
              }

              JArray< JArray< jdouble > > SsrIm201Data::getSnm() const
              {
                return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getSnm_0358d8ea02f2cdb1]));
              }

              jint SsrIm201Data::getSphericalHarmonicsDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getSphericalHarmonicsDegree_570ce0828f81a2c1]);
              }

              jint SsrIm201Data::getSphericalHarmonicsOrder() const
              {
                return env->callIntMethod(this$, mids$[mid_getSphericalHarmonicsOrder_570ce0828f81a2c1]);
              }

              void SsrIm201Data::setCnm(const JArray< JArray< jdouble > > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCnm_a0befc7f3dc19e41], a0.this$);
              }

              void SsrIm201Data::setHeightIonosphericLayer(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setHeightIonosphericLayer_17db3a65980d3441], a0);
              }

              void SsrIm201Data::setSnm(const JArray< JArray< jdouble > > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSnm_a0befc7f3dc19e41], a0.this$);
              }

              void SsrIm201Data::setSphericalHarmonicsDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSphericalHarmonicsDegree_99803b0791f320ff], a0);
              }

              void SsrIm201Data::setSphericalHarmonicsOrder(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSphericalHarmonicsOrder_99803b0791f320ff], a0);
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
            namespace subtype {
              static PyObject *t_SsrIm201Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIm201Data_init_(t_SsrIm201Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIm201Data_getCnm(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getHeightIonosphericLayer(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getSnm(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getSphericalHarmonicsDegree(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getSphericalHarmonicsOrder(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_setCnm(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setHeightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setSnm(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setSphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setSphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_get__cnm(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__cnm(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__heightIonosphericLayer(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__heightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__snm(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__snm(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsDegree(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__sphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsOrder(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__sphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIm201Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIm201Data, cnm),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, heightIonosphericLayer),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, snm),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, sphericalHarmonicsDegree),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, sphericalHarmonicsOrder),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIm201Data__methods_[] = {
                DECLARE_METHOD(t_SsrIm201Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Data, getCnm, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getHeightIonosphericLayer, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getSnm, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getSphericalHarmonicsDegree, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getSphericalHarmonicsOrder, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, setCnm, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setHeightIonosphericLayer, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setSnm, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setSphericalHarmonicsDegree, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setSphericalHarmonicsOrder, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIm201Data)[] = {
                { Py_tp_methods, t_SsrIm201Data__methods_ },
                { Py_tp_init, (void *) t_SsrIm201Data_init_ },
                { Py_tp_getset, t_SsrIm201Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIm201Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrData),
                NULL
              };

              DEFINE_TYPE(SsrIm201Data, t_SsrIm201Data, SsrIm201Data);

              void t_SsrIm201Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIm201Data), &PY_TYPE_DEF(SsrIm201Data), module, "SsrIm201Data", 0);
              }

              void t_SsrIm201Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Data), "class_", make_descriptor(SsrIm201Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Data), "wrapfn_", make_descriptor(t_SsrIm201Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIm201Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIm201Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIm201Data::wrap_Object(SsrIm201Data(((t_SsrIm201Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIm201Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIm201Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIm201Data_init_(t_SsrIm201Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIm201Data object((jobject) NULL);

                INT_CALL(object = SsrIm201Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIm201Data_getCnm(t_SsrIm201Data *self)
              {
                JArray< JArray< jdouble > > result((jobject) NULL);
                OBJ_CALL(result = self->object.getCnm());
                return JArray<jobject>(result.this$).wrap(NULL);
              }

              static PyObject *t_SsrIm201Data_getHeightIonosphericLayer(t_SsrIm201Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getHeightIonosphericLayer());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIm201Data_getSnm(t_SsrIm201Data *self)
              {
                JArray< JArray< jdouble > > result((jobject) NULL);
                OBJ_CALL(result = self->object.getSnm());
                return JArray<jobject>(result.this$).wrap(NULL);
              }

              static PyObject *t_SsrIm201Data_getSphericalHarmonicsDegree(t_SsrIm201Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSphericalHarmonicsDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIm201Data_getSphericalHarmonicsOrder(t_SsrIm201Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSphericalHarmonicsOrder());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIm201Data_setCnm(t_SsrIm201Data *self, PyObject *arg)
              {
                JArray< JArray< jdouble > > a0((jobject) NULL);

                if (!parseArg(arg, "[[D", &a0))
                {
                  OBJ_CALL(self->object.setCnm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCnm", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setHeightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setHeightIonosphericLayer(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setHeightIonosphericLayer", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setSnm(t_SsrIm201Data *self, PyObject *arg)
              {
                JArray< JArray< jdouble > > a0((jobject) NULL);

                if (!parseArg(arg, "[[D", &a0))
                {
                  OBJ_CALL(self->object.setSnm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSnm", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setSphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSphericalHarmonicsDegree(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSphericalHarmonicsDegree", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setSphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSphericalHarmonicsOrder(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSphericalHarmonicsOrder", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_get__cnm(t_SsrIm201Data *self, void *data)
              {
                JArray< JArray< jdouble > > value((jobject) NULL);
                OBJ_CALL(value = self->object.getCnm());
                return JArray<jobject>(value.this$).wrap(NULL);
              }
              static int t_SsrIm201Data_set__cnm(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  JArray< JArray< jdouble > > value((jobject) NULL);
                  if (!parseArg(arg, "[[D", &value))
                  {
                    INT_CALL(self->object.setCnm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "cnm", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__heightIonosphericLayer(t_SsrIm201Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getHeightIonosphericLayer());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIm201Data_set__heightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setHeightIonosphericLayer(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "heightIonosphericLayer", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__snm(t_SsrIm201Data *self, void *data)
              {
                JArray< JArray< jdouble > > value((jobject) NULL);
                OBJ_CALL(value = self->object.getSnm());
                return JArray<jobject>(value.this$).wrap(NULL);
              }
              static int t_SsrIm201Data_set__snm(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  JArray< JArray< jdouble > > value((jobject) NULL);
                  if (!parseArg(arg, "[[D", &value))
                  {
                    INT_CALL(self->object.setSnm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "snm", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsDegree(t_SsrIm201Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSphericalHarmonicsDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIm201Data_set__sphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSphericalHarmonicsDegree(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sphericalHarmonicsDegree", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsOrder(t_SsrIm201Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSphericalHarmonicsOrder());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIm201Data_set__sphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSphericalHarmonicsOrder(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sphericalHarmonicsOrder", arg);
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
#include "org/orekit/propagation/events/FieldApsideDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldApsideDetector::class$ = NULL;
        jmethodID *FieldApsideDetector::mids$ = NULL;
        bool FieldApsideDetector::live$ = false;

        jclass FieldApsideDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldApsideDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1cbcb2601e7d1334] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
            mids$[mid_init$_7d2b5fee17c8356b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;)V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_create_f6d4515668f2d483] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldApsideDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldApsideDetector::FieldApsideDetector(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_1cbcb2601e7d1334, a0.this$)) {}

        FieldApsideDetector::FieldApsideDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_7d2b5fee17c8356b, a0.this$, a1.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldApsideDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
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
        static PyObject *t_FieldApsideDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldApsideDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldApsideDetector_of_(t_FieldApsideDetector *self, PyObject *args);
        static int t_FieldApsideDetector_init_(t_FieldApsideDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldApsideDetector_g(t_FieldApsideDetector *self, PyObject *args);
        static PyObject *t_FieldApsideDetector_get__parameters_(t_FieldApsideDetector *self, void *data);
        static PyGetSetDef t_FieldApsideDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldApsideDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldApsideDetector__methods_[] = {
          DECLARE_METHOD(t_FieldApsideDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldApsideDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldApsideDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldApsideDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldApsideDetector)[] = {
          { Py_tp_methods, t_FieldApsideDetector__methods_ },
          { Py_tp_init, (void *) t_FieldApsideDetector_init_ },
          { Py_tp_getset, t_FieldApsideDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldApsideDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldApsideDetector, t_FieldApsideDetector, FieldApsideDetector);
        PyObject *t_FieldApsideDetector::wrap_Object(const FieldApsideDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldApsideDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldApsideDetector *self = (t_FieldApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldApsideDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldApsideDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldApsideDetector *self = (t_FieldApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldApsideDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldApsideDetector), &PY_TYPE_DEF(FieldApsideDetector), module, "FieldApsideDetector", 0);
        }

        void t_FieldApsideDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldApsideDetector), "class_", make_descriptor(FieldApsideDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldApsideDetector), "wrapfn_", make_descriptor(t_FieldApsideDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldApsideDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldApsideDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldApsideDetector::initializeClass, 1)))
            return NULL;
          return t_FieldApsideDetector::wrap_Object(FieldApsideDetector(((t_FieldApsideDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldApsideDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldApsideDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldApsideDetector_of_(t_FieldApsideDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldApsideDetector_init_(t_FieldApsideDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              FieldApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                INT_CALL(object = FieldApsideDetector(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
              PyTypeObject **p1;
              FieldApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                INT_CALL(object = FieldApsideDetector(a0, a1));
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

        static PyObject *t_FieldApsideDetector_g(t_FieldApsideDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldApsideDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_FieldApsideDetector_get__parameters_(t_FieldApsideDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "java/lang/String.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPFHeader::class$ = NULL;
        jmethodID *CPFHeader::mids$ = NULL;
        bool CPFHeader::live$ = false;

        jclass CPFHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPFHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getCenterOfMassOffset_dff5885c2c873297] = env->getMethodID(cls, "getCenterOfMassOffset", "()D");
            mids$[mid_getPrf_dff5885c2c873297] = env->getMethodID(cls, "getPrf", "()D");
            mids$[mid_getRefFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getRefFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getRefFrameId_570ce0828f81a2c1] = env->getMethodID(cls, "getRefFrameId", "()I");
            mids$[mid_getRotationalAngleType_570ce0828f81a2c1] = env->getMethodID(cls, "getRotationalAngleType", "()I");
            mids$[mid_getSource_11b109bd155ca898] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
            mids$[mid_getStep_570ce0828f81a2c1] = env->getMethodID(cls, "getStep", "()I");
            mids$[mid_getSubDailySequenceNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getSubDailySequenceNumber", "()I");
            mids$[mid_getTranspClkRef_dff5885c2c873297] = env->getMethodID(cls, "getTranspClkRef", "()D");
            mids$[mid_getTranspOscDrift_dff5885c2c873297] = env->getMethodID(cls, "getTranspOscDrift", "()D");
            mids$[mid_getTranspTransmitDelay_dff5885c2c873297] = env->getMethodID(cls, "getTranspTransmitDelay", "()D");
            mids$[mid_getTranspUtcOffset_dff5885c2c873297] = env->getMethodID(cls, "getTranspUtcOffset", "()D");
            mids$[mid_isCenterOfMassCorrectionApplied_b108b35ef48e27bd] = env->getMethodID(cls, "isCenterOfMassCorrectionApplied", "()Z");
            mids$[mid_isCompatibleWithTIVs_b108b35ef48e27bd] = env->getMethodID(cls, "isCompatibleWithTIVs", "()Z");
            mids$[mid_setCenterOfMassOffset_17db3a65980d3441] = env->getMethodID(cls, "setCenterOfMassOffset", "(D)V");
            mids$[mid_setIsCenterOfMassCorrectionApplied_bd04c9335fb9e4cf] = env->getMethodID(cls, "setIsCenterOfMassCorrectionApplied", "(Z)V");
            mids$[mid_setIsCompatibleWithTIVs_bd04c9335fb9e4cf] = env->getMethodID(cls, "setIsCompatibleWithTIVs", "(Z)V");
            mids$[mid_setPrf_17db3a65980d3441] = env->getMethodID(cls, "setPrf", "(D)V");
            mids$[mid_setRefFrame_b5680f5c30eede66] = env->getMethodID(cls, "setRefFrame", "(Lorg/orekit/frames/Frame;)V");
            mids$[mid_setRefFrameId_99803b0791f320ff] = env->getMethodID(cls, "setRefFrameId", "(I)V");
            mids$[mid_setRotationalAngleType_99803b0791f320ff] = env->getMethodID(cls, "setRotationalAngleType", "(I)V");
            mids$[mid_setSource_d0bc48d5b00dc40c] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
            mids$[mid_setStep_99803b0791f320ff] = env->getMethodID(cls, "setStep", "(I)V");
            mids$[mid_setSubDailySequenceNumber_99803b0791f320ff] = env->getMethodID(cls, "setSubDailySequenceNumber", "(I)V");
            mids$[mid_setTranspClkRef_17db3a65980d3441] = env->getMethodID(cls, "setTranspClkRef", "(D)V");
            mids$[mid_setTranspOscDrift_17db3a65980d3441] = env->getMethodID(cls, "setTranspOscDrift", "(D)V");
            mids$[mid_setTranspTransmitDelay_17db3a65980d3441] = env->getMethodID(cls, "setTranspTransmitDelay", "(D)V");
            mids$[mid_setTranspUtcOffset_17db3a65980d3441] = env->getMethodID(cls, "setTranspUtcOffset", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPFHeader::CPFHeader() : ::org::orekit::files::ilrs::ILRSHeader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble CPFHeader::getCenterOfMassOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCenterOfMassOffset_dff5885c2c873297]);
        }

        jdouble CPFHeader::getPrf() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPrf_dff5885c2c873297]);
        }

        ::org::orekit::frames::Frame CPFHeader::getRefFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getRefFrame_b86f9f61d97a7244]));
        }

        jint CPFHeader::getRefFrameId() const
        {
          return env->callIntMethod(this$, mids$[mid_getRefFrameId_570ce0828f81a2c1]);
        }

        jint CPFHeader::getRotationalAngleType() const
        {
          return env->callIntMethod(this$, mids$[mid_getRotationalAngleType_570ce0828f81a2c1]);
        }

        ::java::lang::String CPFHeader::getSource() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_11b109bd155ca898]));
        }

        jint CPFHeader::getStep() const
        {
          return env->callIntMethod(this$, mids$[mid_getStep_570ce0828f81a2c1]);
        }

        jint CPFHeader::getSubDailySequenceNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getSubDailySequenceNumber_570ce0828f81a2c1]);
        }

        jdouble CPFHeader::getTranspClkRef() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspClkRef_dff5885c2c873297]);
        }

        jdouble CPFHeader::getTranspOscDrift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspOscDrift_dff5885c2c873297]);
        }

        jdouble CPFHeader::getTranspTransmitDelay() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspTransmitDelay_dff5885c2c873297]);
        }

        jdouble CPFHeader::getTranspUtcOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspUtcOffset_dff5885c2c873297]);
        }

        jboolean CPFHeader::isCenterOfMassCorrectionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCenterOfMassCorrectionApplied_b108b35ef48e27bd]);
        }

        jboolean CPFHeader::isCompatibleWithTIVs() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCompatibleWithTIVs_b108b35ef48e27bd]);
        }

        void CPFHeader::setCenterOfMassOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setCenterOfMassOffset_17db3a65980d3441], a0);
        }

        void CPFHeader::setIsCenterOfMassCorrectionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsCenterOfMassCorrectionApplied_bd04c9335fb9e4cf], a0);
        }

        void CPFHeader::setIsCompatibleWithTIVs(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsCompatibleWithTIVs_bd04c9335fb9e4cf], a0);
        }

        void CPFHeader::setPrf(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPrf_17db3a65980d3441], a0);
        }

        void CPFHeader::setRefFrame(const ::org::orekit::frames::Frame & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRefFrame_b5680f5c30eede66], a0.this$);
        }

        void CPFHeader::setRefFrameId(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRefFrameId_99803b0791f320ff], a0);
        }

        void CPFHeader::setRotationalAngleType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRotationalAngleType_99803b0791f320ff], a0);
        }

        void CPFHeader::setSource(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSource_d0bc48d5b00dc40c], a0.this$);
        }

        void CPFHeader::setStep(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStep_99803b0791f320ff], a0);
        }

        void CPFHeader::setSubDailySequenceNumber(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSubDailySequenceNumber_99803b0791f320ff], a0);
        }

        void CPFHeader::setTranspClkRef(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspClkRef_17db3a65980d3441], a0);
        }

        void CPFHeader::setTranspOscDrift(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspOscDrift_17db3a65980d3441], a0);
        }

        void CPFHeader::setTranspTransmitDelay(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspTransmitDelay_17db3a65980d3441], a0);
        }

        void CPFHeader::setTranspUtcOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspUtcOffset_17db3a65980d3441], a0);
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
      namespace ilrs {
        static PyObject *t_CPFHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPFHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPFHeader_init_(t_CPFHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPFHeader_getCenterOfMassOffset(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getPrf(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getRefFrame(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getRefFrameId(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getRotationalAngleType(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getSource(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getStep(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getSubDailySequenceNumber(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getTranspClkRef(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getTranspOscDrift(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getTranspTransmitDelay(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getTranspUtcOffset(t_CPFHeader *self);
        static PyObject *t_CPFHeader_isCenterOfMassCorrectionApplied(t_CPFHeader *self);
        static PyObject *t_CPFHeader_isCompatibleWithTIVs(t_CPFHeader *self);
        static PyObject *t_CPFHeader_setCenterOfMassOffset(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setIsCenterOfMassCorrectionApplied(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setIsCompatibleWithTIVs(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setPrf(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setRefFrame(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setRefFrameId(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setRotationalAngleType(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setSource(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setStep(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setSubDailySequenceNumber(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setTranspClkRef(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setTranspOscDrift(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setTranspTransmitDelay(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setTranspUtcOffset(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_get__centerOfMassCorrectionApplied(t_CPFHeader *self, void *data);
        static PyObject *t_CPFHeader_get__centerOfMassOffset(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__centerOfMassOffset(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__compatibleWithTIVs(t_CPFHeader *self, void *data);
        static PyObject *t_CPFHeader_get__prf(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__prf(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__refFrame(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__refFrame(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__refFrameId(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__refFrameId(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__rotationalAngleType(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__rotationalAngleType(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__source(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__source(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__step(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__step(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__subDailySequenceNumber(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__subDailySequenceNumber(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__transpClkRef(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__transpClkRef(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__transpOscDrift(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__transpOscDrift(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__transpTransmitDelay(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__transpTransmitDelay(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__transpUtcOffset(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__transpUtcOffset(t_CPFHeader *self, PyObject *arg, void *data);
        static PyGetSetDef t_CPFHeader__fields_[] = {
          DECLARE_GET_FIELD(t_CPFHeader, centerOfMassCorrectionApplied),
          DECLARE_GETSET_FIELD(t_CPFHeader, centerOfMassOffset),
          DECLARE_GET_FIELD(t_CPFHeader, compatibleWithTIVs),
          DECLARE_GETSET_FIELD(t_CPFHeader, prf),
          DECLARE_GETSET_FIELD(t_CPFHeader, refFrame),
          DECLARE_GETSET_FIELD(t_CPFHeader, refFrameId),
          DECLARE_GETSET_FIELD(t_CPFHeader, rotationalAngleType),
          DECLARE_GETSET_FIELD(t_CPFHeader, source),
          DECLARE_GETSET_FIELD(t_CPFHeader, step),
          DECLARE_GETSET_FIELD(t_CPFHeader, subDailySequenceNumber),
          DECLARE_GETSET_FIELD(t_CPFHeader, transpClkRef),
          DECLARE_GETSET_FIELD(t_CPFHeader, transpOscDrift),
          DECLARE_GETSET_FIELD(t_CPFHeader, transpTransmitDelay),
          DECLARE_GETSET_FIELD(t_CPFHeader, transpUtcOffset),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPFHeader__methods_[] = {
          DECLARE_METHOD(t_CPFHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFHeader, getCenterOfMassOffset, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getPrf, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getRefFrame, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getRefFrameId, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getRotationalAngleType, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getSource, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getStep, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getSubDailySequenceNumber, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getTranspClkRef, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getTranspOscDrift, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getTranspTransmitDelay, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getTranspUtcOffset, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, isCenterOfMassCorrectionApplied, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, isCompatibleWithTIVs, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, setCenterOfMassOffset, METH_O),
          DECLARE_METHOD(t_CPFHeader, setIsCenterOfMassCorrectionApplied, METH_O),
          DECLARE_METHOD(t_CPFHeader, setIsCompatibleWithTIVs, METH_O),
          DECLARE_METHOD(t_CPFHeader, setPrf, METH_O),
          DECLARE_METHOD(t_CPFHeader, setRefFrame, METH_O),
          DECLARE_METHOD(t_CPFHeader, setRefFrameId, METH_O),
          DECLARE_METHOD(t_CPFHeader, setRotationalAngleType, METH_O),
          DECLARE_METHOD(t_CPFHeader, setSource, METH_O),
          DECLARE_METHOD(t_CPFHeader, setStep, METH_O),
          DECLARE_METHOD(t_CPFHeader, setSubDailySequenceNumber, METH_O),
          DECLARE_METHOD(t_CPFHeader, setTranspClkRef, METH_O),
          DECLARE_METHOD(t_CPFHeader, setTranspOscDrift, METH_O),
          DECLARE_METHOD(t_CPFHeader, setTranspTransmitDelay, METH_O),
          DECLARE_METHOD(t_CPFHeader, setTranspUtcOffset, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPFHeader)[] = {
          { Py_tp_methods, t_CPFHeader__methods_ },
          { Py_tp_init, (void *) t_CPFHeader_init_ },
          { Py_tp_getset, t_CPFHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPFHeader)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::ILRSHeader),
          NULL
        };

        DEFINE_TYPE(CPFHeader, t_CPFHeader, CPFHeader);

        void t_CPFHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(CPFHeader), &PY_TYPE_DEF(CPFHeader), module, "CPFHeader", 0);
        }

        void t_CPFHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFHeader), "class_", make_descriptor(CPFHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFHeader), "wrapfn_", make_descriptor(t_CPFHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFHeader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPFHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPFHeader::initializeClass, 1)))
            return NULL;
          return t_CPFHeader::wrap_Object(CPFHeader(((t_CPFHeader *) arg)->object.this$));
        }
        static PyObject *t_CPFHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPFHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPFHeader_init_(t_CPFHeader *self, PyObject *args, PyObject *kwds)
        {
          CPFHeader object((jobject) NULL);

          INT_CALL(object = CPFHeader());
          self->object = object;

          return 0;
        }

        static PyObject *t_CPFHeader_getCenterOfMassOffset(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getCenterOfMassOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getPrf(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPrf());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getRefFrame(t_CPFHeader *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_CPFHeader_getRefFrameId(t_CPFHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getRefFrameId());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPFHeader_getRotationalAngleType(t_CPFHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getRotationalAngleType());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPFHeader_getSource(t_CPFHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSource());
          return j2p(result);
        }

        static PyObject *t_CPFHeader_getStep(t_CPFHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStep());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPFHeader_getSubDailySequenceNumber(t_CPFHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSubDailySequenceNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPFHeader_getTranspClkRef(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspClkRef());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getTranspOscDrift(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspOscDrift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getTranspTransmitDelay(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspTransmitDelay());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getTranspUtcOffset(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspUtcOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_isCenterOfMassCorrectionApplied(t_CPFHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCenterOfMassCorrectionApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CPFHeader_isCompatibleWithTIVs(t_CPFHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCompatibleWithTIVs());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CPFHeader_setCenterOfMassOffset(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setCenterOfMassOffset(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setCenterOfMassOffset", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setIsCenterOfMassCorrectionApplied(t_CPFHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsCenterOfMassCorrectionApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsCenterOfMassCorrectionApplied", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setIsCompatibleWithTIVs(t_CPFHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsCompatibleWithTIVs(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsCompatibleWithTIVs", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setPrf(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPrf(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPrf", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setRefFrame(t_CPFHeader *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setRefFrame(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setRefFrame", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setRefFrameId(t_CPFHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setRefFrameId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setRefFrameId", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setRotationalAngleType(t_CPFHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setRotationalAngleType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setRotationalAngleType", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setSource(t_CPFHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSource(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSource", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setStep(t_CPFHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStep", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setSubDailySequenceNumber(t_CPFHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSubDailySequenceNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSubDailySequenceNumber", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setTranspClkRef(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspClkRef(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspClkRef", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setTranspOscDrift(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspOscDrift(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspOscDrift", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setTranspTransmitDelay(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspTransmitDelay(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspTransmitDelay", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setTranspUtcOffset(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspUtcOffset(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspUtcOffset", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_get__centerOfMassCorrectionApplied(t_CPFHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCenterOfMassCorrectionApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CPFHeader_get__centerOfMassOffset(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getCenterOfMassOffset());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__centerOfMassOffset(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setCenterOfMassOffset(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "centerOfMassOffset", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__compatibleWithTIVs(t_CPFHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCompatibleWithTIVs());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CPFHeader_get__prf(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPrf());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__prf(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPrf(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "prf", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__refFrame(t_CPFHeader *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
        static int t_CPFHeader_set__refFrame(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &value))
            {
              INT_CALL(self->object.setRefFrame(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "refFrame", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__refFrameId(t_CPFHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getRefFrameId());
          return PyLong_FromLong((long) value);
        }
        static int t_CPFHeader_set__refFrameId(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setRefFrameId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "refFrameId", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__rotationalAngleType(t_CPFHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getRotationalAngleType());
          return PyLong_FromLong((long) value);
        }
        static int t_CPFHeader_set__rotationalAngleType(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setRotationalAngleType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "rotationalAngleType", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__source(t_CPFHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSource());
          return j2p(value);
        }
        static int t_CPFHeader_set__source(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSource(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "source", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__step(t_CPFHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStep());
          return PyLong_FromLong((long) value);
        }
        static int t_CPFHeader_set__step(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setStep(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "step", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__subDailySequenceNumber(t_CPFHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSubDailySequenceNumber());
          return PyLong_FromLong((long) value);
        }
        static int t_CPFHeader_set__subDailySequenceNumber(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSubDailySequenceNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "subDailySequenceNumber", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__transpClkRef(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspClkRef());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__transpClkRef(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspClkRef(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpClkRef", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__transpOscDrift(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspOscDrift());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__transpOscDrift(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspOscDrift(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpOscDrift", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__transpTransmitDelay(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspTransmitDelay());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__transpTransmitDelay(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspTransmitDelay(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpTransmitDelay", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__transpUtcOffset(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspUtcOffset());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__transpUtcOffset(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspUtcOffset(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpUtcOffset", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FixedFrameBuilder.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FixedFrameBuilder::class$ = NULL;
      jmethodID *FixedFrameBuilder::mids$ = NULL;
      bool FixedFrameBuilder::live$ = false;

      jclass FixedFrameBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FixedFrameBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b5680f5c30eede66] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_build_32e9a4ac991f1702] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_build_54b3b52d9ecd9e48] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedFrameBuilder::FixedFrameBuilder(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5680f5c30eede66, a0.this$)) {}

      ::org::orekit::attitudes::FieldAttitude FixedFrameBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::FieldPVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_build_32e9a4ac991f1702], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude FixedFrameBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_build_54b3b52d9ecd9e48], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_FixedFrameBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedFrameBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedFrameBuilder_init_(t_FixedFrameBuilder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedFrameBuilder_build(t_FixedFrameBuilder *self, PyObject *args);

      static PyMethodDef t_FixedFrameBuilder__methods_[] = {
        DECLARE_METHOD(t_FixedFrameBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedFrameBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedFrameBuilder, build, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedFrameBuilder)[] = {
        { Py_tp_methods, t_FixedFrameBuilder__methods_ },
        { Py_tp_init, (void *) t_FixedFrameBuilder_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedFrameBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedFrameBuilder, t_FixedFrameBuilder, FixedFrameBuilder);

      void t_FixedFrameBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedFrameBuilder), &PY_TYPE_DEF(FixedFrameBuilder), module, "FixedFrameBuilder", 0);
      }

      void t_FixedFrameBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedFrameBuilder), "class_", make_descriptor(FixedFrameBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedFrameBuilder), "wrapfn_", make_descriptor(t_FixedFrameBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedFrameBuilder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedFrameBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedFrameBuilder::initializeClass, 1)))
          return NULL;
        return t_FixedFrameBuilder::wrap_Object(FixedFrameBuilder(((t_FixedFrameBuilder *) arg)->object.this$));
      }
      static PyObject *t_FixedFrameBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedFrameBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedFrameBuilder_init_(t_FixedFrameBuilder *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        FixedFrameBuilder object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          INT_CALL(object = FixedFrameBuilder(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedFrameBuilder_build(t_FixedFrameBuilder *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedAngularCoordinates a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.build(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinatesProvider a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::TimeStampedFieldAngularCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "build", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/MultiStartUnivariateOptimizer.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
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
            mids$[mid_init$_7c79e557fab8c7ef] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/univariate/UnivariateOptimizer;ILorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getOptima_0b15fb2534825a09] = env->getMethodID(cls, "getOptima", "()[Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");
            mids$[mid_optimize_46d3687072fb1da8] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");
            mids$[mid_doOptimize_1512fd4a147f4927] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultiStartUnivariateOptimizer::MultiStartUnivariateOptimizer(const ::org::hipparchus::optim::univariate::UnivariateOptimizer & a0, jint a1, const ::org::hipparchus::random::RandomGenerator & a2) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_7c79e557fab8c7ef, a0.this$, a1, a2.this$)) {}

        jint MultiStartUnivariateOptimizer::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
        }

        JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair > MultiStartUnivariateOptimizer::getOptima() const
        {
          return JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair >(env->callObjectMethod(this$, mids$[mid_getOptima_0b15fb2534825a09]));
        }

        ::org::hipparchus::optim::univariate::UnivariatePointValuePair MultiStartUnivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::univariate::UnivariatePointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_46d3687072fb1da8], a0.this$));
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
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonAbstractGaussianContribution.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonAbstractGaussianContribution::class$ = NULL;
            jmethodID *PythonAbstractGaussianContribution::mids$ = NULL;
            bool PythonAbstractGaussianContribution::live$ = false;

            jclass PythonAbstractGaussianContribution::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonAbstractGaussianContribution");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_678a339a3ee778c2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/orekit/forces/ForceModel;D)V");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getLLimits_04690aaa2b6db52c] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getLLimits_7442885516ff2293] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDriversWithoutMu_2afa36052df4765d] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractGaussianContribution::PythonAbstractGaussianContribution(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::forces::ForceModel & a2, jdouble a3) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_678a339a3ee778c2, a0.this$, a1, a2.this$, a3)) {}

            void PythonAbstractGaussianContribution::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonAbstractGaussianContribution::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonAbstractGaussianContribution::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
            static PyObject *t_PythonAbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonAbstractGaussianContribution_init_(t_PythonAbstractGaussianContribution *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractGaussianContribution_finalize(t_PythonAbstractGaussianContribution *self);
            static PyObject *t_PythonAbstractGaussianContribution_pythonExtension(t_PythonAbstractGaussianContribution *self, PyObject *args);
            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonAbstractGaussianContribution_getParametersDriversWithoutMu2(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractGaussianContribution_pythonDecRef3(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonAbstractGaussianContribution_get__self(t_PythonAbstractGaussianContribution *self, void *data);
            static PyGetSetDef t_PythonAbstractGaussianContribution__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractGaussianContribution, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractGaussianContribution__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGaussianContribution)[] = {
              { Py_tp_methods, t_PythonAbstractGaussianContribution__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractGaussianContribution_init_ },
              { Py_tp_getset, t_PythonAbstractGaussianContribution__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractGaussianContribution)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution),
              NULL
            };

            DEFINE_TYPE(PythonAbstractGaussianContribution, t_PythonAbstractGaussianContribution, PythonAbstractGaussianContribution);

            void t_PythonAbstractGaussianContribution::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractGaussianContribution), &PY_TYPE_DEF(PythonAbstractGaussianContribution), module, "PythonAbstractGaussianContribution", 1);
            }

            void t_PythonAbstractGaussianContribution::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGaussianContribution), "class_", make_descriptor(PythonAbstractGaussianContribution::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGaussianContribution), "wrapfn_", make_descriptor(t_PythonAbstractGaussianContribution::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGaussianContribution), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractGaussianContribution::initializeClass);
              JNINativeMethod methods[] = {
                { "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAbstractGaussianContribution_getLLimits0 },
                { "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D", (void *) t_PythonAbstractGaussianContribution_getLLimits1 },
                { "getParametersDriversWithoutMu", "()Ljava/util/List;", (void *) t_PythonAbstractGaussianContribution_getParametersDriversWithoutMu2 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractGaussianContribution_pythonDecRef3 },
              };
              env->registerNatives(cls, methods, 4);
            }

            static PyObject *t_PythonAbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractGaussianContribution::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractGaussianContribution::wrap_Object(PythonAbstractGaussianContribution(((t_PythonAbstractGaussianContribution *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractGaussianContribution::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonAbstractGaussianContribution_init_(t_PythonAbstractGaussianContribution *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::forces::ForceModel a2((jobject) NULL);
              jdouble a3;
              PythonAbstractGaussianContribution object((jobject) NULL);

              if (!parseArgs(args, "sDkD", ::org::orekit::forces::ForceModel::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PythonAbstractGaussianContribution(a0, a1, a2, a3));
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

            static PyObject *t_PythonAbstractGaussianContribution_finalize(t_PythonAbstractGaussianContribution *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractGaussianContribution_pythonExtension(t_PythonAbstractGaussianContribution *self, PyObject *args)
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

            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(a1));
              PyObject *result = PyObject_CallMethod(obj, "getLLimits", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("getLLimits", result);
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

            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(a1));
              PyObject *result = PyObject_CallMethod(obj, "getLLimits", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getLLimits", result);
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

            static jobject JNICALL t_PythonAbstractGaussianContribution_getParametersDriversWithoutMu2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getParametersDriversWithoutMu", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("getParametersDriversWithoutMu", result);
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

            static void JNICALL t_PythonAbstractGaussianContribution_pythonDecRef3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonAbstractGaussianContribution_get__self(t_PythonAbstractGaussianContribution *self, void *data)
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
#include "java/lang/Number.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Number::class$ = NULL;
    jmethodID *Number::mids$ = NULL;
    bool Number::live$ = false;

    jclass Number::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Number");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_byteValue_42a1555092006f7f] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_doubleValue_dff5885c2c873297] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_floatValue_5adccb493ada08e8] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_intValue_570ce0828f81a2c1] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_492808a339bfa35f] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_shortValue_b5dd6688e7dce57d] = env->getMethodID(cls, "shortValue", "()S");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Number::Number() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    jbyte Number::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_42a1555092006f7f]);
    }

    jdouble Number::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_dff5885c2c873297]);
    }

    jfloat Number::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_5adccb493ada08e8]);
    }

    jint Number::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_570ce0828f81a2c1]);
    }

    jlong Number::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_492808a339bfa35f]);
    }

    jshort Number::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_b5dd6688e7dce57d]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Number_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Number_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Number_init_(t_Number *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Number_byteValue(t_Number *self);
    static PyObject *t_Number_doubleValue(t_Number *self);
    static PyObject *t_Number_floatValue(t_Number *self);
    static PyObject *t_Number_intValue(t_Number *self);
    static PyObject *t_Number_longValue(t_Number *self);
    static PyObject *t_Number_shortValue(t_Number *self);

    static PyMethodDef t_Number__methods_[] = {
      DECLARE_METHOD(t_Number, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Number, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Number, byteValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, doubleValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, floatValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, intValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, longValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, shortValue, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Number)[] = {
      { Py_tp_methods, t_Number__methods_ },
      { Py_tp_init, (void *) t_Number_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Number)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Number, t_Number, Number);

    void t_Number::install(PyObject *module)
    {
      installType(&PY_TYPE(Number), &PY_TYPE_DEF(Number), module, "Number", 0);
    }

    void t_Number::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Number), "class_", make_descriptor(Number::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Number), "wrapfn_", make_descriptor(t_Number::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Number), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Number_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Number::initializeClass, 1)))
        return NULL;
      return t_Number::wrap_Object(Number(((t_Number *) arg)->object.this$));
    }
    static PyObject *t_Number_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Number::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Number_init_(t_Number *self, PyObject *args, PyObject *kwds)
    {
      Number object((jobject) NULL);

      INT_CALL(object = Number());
      self->object = object;

      return 0;
    }

    static PyObject *t_Number_byteValue(t_Number *self)
    {
      jbyte result;
      OBJ_CALL(result = self->object.byteValue());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Number_doubleValue(t_Number *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.doubleValue());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Number_floatValue(t_Number *self)
    {
      jfloat result;
      OBJ_CALL(result = self->object.floatValue());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Number_intValue(t_Number *self)
    {
      jint result;
      OBJ_CALL(result = self->object.intValue());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Number_longValue(t_Number *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.longValue());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Number_shortValue(t_Number *self)
    {
      jshort result;
      OBJ_CALL(result = self->object.shortValue());
      return PyLong_FromLong((long) result);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldVectorPreservingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldVectorPreservingVisitor::class$ = NULL;
      jmethodID *FieldVectorPreservingVisitor::mids$ = NULL;
      bool FieldVectorPreservingVisitor::live$ = false;

      jclass FieldVectorPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldVectorPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_99097cb60cf2d774] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_8336200ef3dde36b] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_2c97e4718ab5a1ad] = env->getMethodID(cls, "visit", "(ILorg/hipparchus/FieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldVectorPreservingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_99097cb60cf2d774]));
      }

      void FieldVectorPreservingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_8336200ef3dde36b], a0, a1, a2);
      }

      void FieldVectorPreservingVisitor::visit(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_2c97e4718ab5a1ad], a0, a1.this$);
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
      static PyObject *t_FieldVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorPreservingVisitor_of_(t_FieldVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorPreservingVisitor_end(t_FieldVectorPreservingVisitor *self);
      static PyObject *t_FieldVectorPreservingVisitor_start(t_FieldVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorPreservingVisitor_visit(t_FieldVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorPreservingVisitor_get__parameters_(t_FieldVectorPreservingVisitor *self, void *data);
      static PyGetSetDef t_FieldVectorPreservingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldVectorPreservingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldVectorPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldVectorPreservingVisitor)[] = {
        { Py_tp_methods, t_FieldVectorPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldVectorPreservingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldVectorPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldVectorPreservingVisitor, t_FieldVectorPreservingVisitor, FieldVectorPreservingVisitor);
      PyObject *t_FieldVectorPreservingVisitor::wrap_Object(const FieldVectorPreservingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorPreservingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorPreservingVisitor *self = (t_FieldVectorPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldVectorPreservingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorPreservingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorPreservingVisitor *self = (t_FieldVectorPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldVectorPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldVectorPreservingVisitor), &PY_TYPE_DEF(FieldVectorPreservingVisitor), module, "FieldVectorPreservingVisitor", 0);
      }

      void t_FieldVectorPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorPreservingVisitor), "class_", make_descriptor(FieldVectorPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorPreservingVisitor), "wrapfn_", make_descriptor(t_FieldVectorPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldVectorPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldVectorPreservingVisitor::wrap_Object(FieldVectorPreservingVisitor(((t_FieldVectorPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldVectorPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldVectorPreservingVisitor_of_(t_FieldVectorPreservingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldVectorPreservingVisitor_end(t_FieldVectorPreservingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldVectorPreservingVisitor_start(t_FieldVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.start(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_FieldVectorPreservingVisitor_visit(t_FieldVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.visit(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldVectorPreservingVisitor_get__parameters_(t_FieldVectorPreservingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrixDecomposer::class$ = NULL;
      jmethodID *FieldMatrixDecomposer::mids$ = NULL;
      bool FieldMatrixDecomposer::live$ = false;

      jclass FieldMatrixDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrixDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_decompose_f65caede4265247f] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldDecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldMatrixDecomposer::decompose(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_f65caede4265247f], a0.this$));
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
      static PyObject *t_FieldMatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixDecomposer_of_(t_FieldMatrixDecomposer *self, PyObject *args);
      static PyObject *t_FieldMatrixDecomposer_decompose(t_FieldMatrixDecomposer *self, PyObject *arg);
      static PyObject *t_FieldMatrixDecomposer_get__parameters_(t_FieldMatrixDecomposer *self, void *data);
      static PyGetSetDef t_FieldMatrixDecomposer__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrixDecomposer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrixDecomposer__methods_[] = {
        DECLARE_METHOD(t_FieldMatrixDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixDecomposer, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrixDecomposer)[] = {
        { Py_tp_methods, t_FieldMatrixDecomposer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrixDecomposer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrixDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMatrixDecomposer, t_FieldMatrixDecomposer, FieldMatrixDecomposer);
      PyObject *t_FieldMatrixDecomposer::wrap_Object(const FieldMatrixDecomposer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixDecomposer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixDecomposer *self = (t_FieldMatrixDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrixDecomposer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixDecomposer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixDecomposer *self = (t_FieldMatrixDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrixDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrixDecomposer), &PY_TYPE_DEF(FieldMatrixDecomposer), module, "FieldMatrixDecomposer", 0);
      }

      void t_FieldMatrixDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixDecomposer), "class_", make_descriptor(FieldMatrixDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixDecomposer), "wrapfn_", make_descriptor(t_FieldMatrixDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrixDecomposer::initializeClass, 1)))
          return NULL;
        return t_FieldMatrixDecomposer::wrap_Object(FieldMatrixDecomposer(((t_FieldMatrixDecomposer *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrixDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrixDecomposer_of_(t_FieldMatrixDecomposer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrixDecomposer_decompose(t_FieldMatrixDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
      static PyObject *t_FieldMatrixDecomposer_get__parameters_(t_FieldMatrixDecomposer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/System.h"
#include "java/util/Map.h"
#include "java/io/InputStream.h"
#include "java/lang/System$Logger.h"
#include "java/util/Properties.h"
#include "java/lang/Class.h"
#include "java/util/ResourceBundle.h"
#include "java/io/Console.h"
#include "java/lang/String.h"
#include "java/io/PrintStream.h"
#include "java/lang/SecurityManager.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *System::class$ = NULL;
    jmethodID *System::mids$ = NULL;
    bool System::live$ = false;
    ::java::io::PrintStream *System::err = NULL;
    ::java::io::InputStream *System::in = NULL;
    ::java::io::PrintStream *System::out = NULL;

    jclass System::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/System");

        mids$ = new jmethodID[max_mid];
        mids$[mid_arraycopy_776a14184eee5fde] = env->getStaticMethodID(cls, "arraycopy", "(Ljava/lang/Object;ILjava/lang/Object;II)V");
        mids$[mid_clearProperty_92807efd57acb082] = env->getStaticMethodID(cls, "clearProperty", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_console_32592bc3486ad27a] = env->getStaticMethodID(cls, "console", "()Ljava/io/Console;");
        mids$[mid_currentTimeMillis_492808a339bfa35f] = env->getStaticMethodID(cls, "currentTimeMillis", "()J");
        mids$[mid_exit_99803b0791f320ff] = env->getStaticMethodID(cls, "exit", "(I)V");
        mids$[mid_gc_0fa09c18fee449d5] = env->getStaticMethodID(cls, "gc", "()V");
        mids$[mid_getLogger_ed85d719bd9cdfd2] = env->getStaticMethodID(cls, "getLogger", "(Ljava/lang/String;)Ljava/lang/System$Logger;");
        mids$[mid_getLogger_0f3c4ab133101be6] = env->getStaticMethodID(cls, "getLogger", "(Ljava/lang/String;Ljava/util/ResourceBundle;)Ljava/lang/System$Logger;");
        mids$[mid_getProperties_a9424c0c15e6d54c] = env->getStaticMethodID(cls, "getProperties", "()Ljava/util/Properties;");
        mids$[mid_getProperty_92807efd57acb082] = env->getStaticMethodID(cls, "getProperty", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getProperty_d3f6016a3bf93dcd] = env->getStaticMethodID(cls, "getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getSecurityManager_b09eb4e415badf01] = env->getStaticMethodID(cls, "getSecurityManager", "()Ljava/lang/SecurityManager;");
        mids$[mid_getenv_6f5a75ccd8c04465] = env->getStaticMethodID(cls, "getenv", "()Ljava/util/Map;");
        mids$[mid_getenv_92807efd57acb082] = env->getStaticMethodID(cls, "getenv", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_identityHashCode_90eb61a0d5cc5e34] = env->getStaticMethodID(cls, "identityHashCode", "(Ljava/lang/Object;)I");
        mids$[mid_lineSeparator_11b109bd155ca898] = env->getStaticMethodID(cls, "lineSeparator", "()Ljava/lang/String;");
        mids$[mid_load_d0bc48d5b00dc40c] = env->getStaticMethodID(cls, "load", "(Ljava/lang/String;)V");
        mids$[mid_loadLibrary_d0bc48d5b00dc40c] = env->getStaticMethodID(cls, "loadLibrary", "(Ljava/lang/String;)V");
        mids$[mid_mapLibraryName_92807efd57acb082] = env->getStaticMethodID(cls, "mapLibraryName", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_nanoTime_492808a339bfa35f] = env->getStaticMethodID(cls, "nanoTime", "()J");
        mids$[mid_runFinalization_0fa09c18fee449d5] = env->getStaticMethodID(cls, "runFinalization", "()V");
        mids$[mid_setErr_d7059445128d3e18] = env->getStaticMethodID(cls, "setErr", "(Ljava/io/PrintStream;)V");
        mids$[mid_setIn_42871fcf824ad25f] = env->getStaticMethodID(cls, "setIn", "(Ljava/io/InputStream;)V");
        mids$[mid_setOut_d7059445128d3e18] = env->getStaticMethodID(cls, "setOut", "(Ljava/io/PrintStream;)V");
        mids$[mid_setProperties_aaefff1d1d34ac3c] = env->getStaticMethodID(cls, "setProperties", "(Ljava/util/Properties;)V");
        mids$[mid_setProperty_d3f6016a3bf93dcd] = env->getStaticMethodID(cls, "setProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_setSecurityManager_dd0d69542528ce7e] = env->getStaticMethodID(cls, "setSecurityManager", "(Ljava/lang/SecurityManager;)V");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        err = new ::java::io::PrintStream(env->getStaticObjectField(cls, "err", "Ljava/io/PrintStream;"));
        in = new ::java::io::InputStream(env->getStaticObjectField(cls, "in", "Ljava/io/InputStream;"));
        out = new ::java::io::PrintStream(env->getStaticObjectField(cls, "out", "Ljava/io/PrintStream;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void System::arraycopy(const ::java::lang::Object & a0, jint a1, const ::java::lang::Object & a2, jint a3, jint a4)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_arraycopy_776a14184eee5fde], a0.this$, a1, a2.this$, a3, a4);
    }

    ::java::lang::String System::clearProperty(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_clearProperty_92807efd57acb082], a0.this$));
    }

    ::java::io::Console System::console()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::io::Console(env->callStaticObjectMethod(cls, mids$[mid_console_32592bc3486ad27a]));
    }

    jlong System::currentTimeMillis()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_currentTimeMillis_492808a339bfa35f]);
    }

    void System::exit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_exit_99803b0791f320ff], a0);
    }

    void System::gc()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_gc_0fa09c18fee449d5]);
    }

    ::java::lang::System$Logger System::getLogger(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::System$Logger(env->callStaticObjectMethod(cls, mids$[mid_getLogger_ed85d719bd9cdfd2], a0.this$));
    }

    ::java::lang::System$Logger System::getLogger(const ::java::lang::String & a0, const ::java::util::ResourceBundle & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::System$Logger(env->callStaticObjectMethod(cls, mids$[mid_getLogger_0f3c4ab133101be6], a0.this$, a1.this$));
    }

    ::java::util::Properties System::getProperties()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Properties(env->callStaticObjectMethod(cls, mids$[mid_getProperties_a9424c0c15e6d54c]));
    }

    ::java::lang::String System::getProperty(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getProperty_92807efd57acb082], a0.this$));
    }

    ::java::lang::String System::getProperty(const ::java::lang::String & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getProperty_d3f6016a3bf93dcd], a0.this$, a1.this$));
    }

    ::java::lang::SecurityManager System::getSecurityManager()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::SecurityManager(env->callStaticObjectMethod(cls, mids$[mid_getSecurityManager_b09eb4e415badf01]));
    }

    ::java::util::Map System::getenv()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_getenv_6f5a75ccd8c04465]));
    }

    ::java::lang::String System::getenv(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getenv_92807efd57acb082], a0.this$));
    }

    jint System::identityHashCode(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_identityHashCode_90eb61a0d5cc5e34], a0.this$);
    }

    ::java::lang::String System::lineSeparator()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_lineSeparator_11b109bd155ca898]));
    }

    void System::load(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_load_d0bc48d5b00dc40c], a0.this$);
    }

    void System::loadLibrary(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_loadLibrary_d0bc48d5b00dc40c], a0.this$);
    }

    ::java::lang::String System::mapLibraryName(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_mapLibraryName_92807efd57acb082], a0.this$));
    }

    jlong System::nanoTime()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_nanoTime_492808a339bfa35f]);
    }

    void System::runFinalization()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_runFinalization_0fa09c18fee449d5]);
    }

    void System::setErr(const ::java::io::PrintStream & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setErr_d7059445128d3e18], a0.this$);
    }

    void System::setIn(const ::java::io::InputStream & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setIn_42871fcf824ad25f], a0.this$);
    }

    void System::setOut(const ::java::io::PrintStream & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setOut_d7059445128d3e18], a0.this$);
    }

    void System::setProperties(const ::java::util::Properties & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setProperties_aaefff1d1d34ac3c], a0.this$);
    }

    ::java::lang::String System::setProperty(const ::java::lang::String & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_setProperty_d3f6016a3bf93dcd], a0.this$, a1.this$));
    }

    void System::setSecurityManager(const ::java::lang::SecurityManager & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setSecurityManager_dd0d69542528ce7e], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_System_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_arraycopy(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_clearProperty(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_console(PyTypeObject *type);
    static PyObject *t_System_currentTimeMillis(PyTypeObject *type);
    static PyObject *t_System_exit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_gc(PyTypeObject *type);
    static PyObject *t_System_getLogger(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_getProperties(PyTypeObject *type);
    static PyObject *t_System_getProperty(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_getSecurityManager(PyTypeObject *type);
    static PyObject *t_System_getenv(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_identityHashCode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_lineSeparator(PyTypeObject *type);
    static PyObject *t_System_load(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_loadLibrary(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_mapLibraryName(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_nanoTime(PyTypeObject *type);
    static PyObject *t_System_runFinalization(PyTypeObject *type);
    static PyObject *t_System_setErr(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setIn(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setOut(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setProperties(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setProperty(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_setSecurityManager(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_get__env(t_System *self, void *data);
    static int t_System_set__err(t_System *self, PyObject *arg, void *data);
    static int t_System_set__in(t_System *self, PyObject *arg, void *data);
    static int t_System_set__out(t_System *self, PyObject *arg, void *data);
    static PyObject *t_System_get__properties(t_System *self, void *data);
    static int t_System_set__properties(t_System *self, PyObject *arg, void *data);
    static PyObject *t_System_get__securityManager(t_System *self, void *data);
    static int t_System_set__securityManager(t_System *self, PyObject *arg, void *data);
    static PyGetSetDef t_System__fields_[] = {
      DECLARE_GET_FIELD(t_System, env),
      DECLARE_SET_FIELD(t_System, err),
      DECLARE_SET_FIELD(t_System, in),
      DECLARE_SET_FIELD(t_System, out),
      DECLARE_GETSET_FIELD(t_System, properties),
      DECLARE_GETSET_FIELD(t_System, securityManager),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_System__methods_[] = {
      DECLARE_METHOD(t_System, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, arraycopy, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, clearProperty, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, console, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, currentTimeMillis, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, exit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, gc, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getLogger, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getProperties, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getProperty, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getSecurityManager, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getenv, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, identityHashCode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, lineSeparator, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, load, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, loadLibrary, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, mapLibraryName, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, nanoTime, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, runFinalization, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, setErr, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setIn, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setOut, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setProperties, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setProperty, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, setSecurityManager, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(System)[] = {
      { Py_tp_methods, t_System__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_System__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(System)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(System, t_System, System);

    void t_System::install(PyObject *module)
    {
      installType(&PY_TYPE(System), &PY_TYPE_DEF(System), module, "System", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "Logger", make_descriptor(&PY_TYPE_DEF(System$Logger)));
    }

    void t_System::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "class_", make_descriptor(System::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "wrapfn_", make_descriptor(t_System::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "boxfn_", make_descriptor(boxObject));
      env->getClass(System::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "err", make_descriptor(::java::io::t_PrintStream::wrap_Object(*System::err)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "in", make_descriptor(::java::io::t_InputStream::wrap_Object(*System::in)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "out", make_descriptor(::java::io::t_PrintStream::wrap_Object(*System::out)));
    }

    static PyObject *t_System_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, System::initializeClass, 1)))
        return NULL;
      return t_System::wrap_Object(System(((t_System *) arg)->object.this$));
    }
    static PyObject *t_System_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, System::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_System_arraycopy(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint a1;
      ::java::lang::Object a2((jobject) NULL);
      jint a3;
      jint a4;

      if (!parseArgs(args, "oIoII", &a0, &a1, &a2, &a3, &a4))
      {
        OBJ_CALL(::java::lang::System::arraycopy(a0, a1, a2, a3, a4));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "arraycopy", args);
      return NULL;
    }

    static PyObject *t_System_clearProperty(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::System::clearProperty(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "clearProperty", arg);
      return NULL;
    }

    static PyObject *t_System_console(PyTypeObject *type)
    {
      ::java::io::Console result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::console());
      return ::java::io::t_Console::wrap_Object(result);
    }

    static PyObject *t_System_currentTimeMillis(PyTypeObject *type)
    {
      jlong result;
      OBJ_CALL(result = ::java::lang::System::currentTimeMillis());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_System_exit(PyTypeObject *type, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(::java::lang::System::exit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "exit", arg);
      return NULL;
    }

    static PyObject *t_System_gc(PyTypeObject *type)
    {
      OBJ_CALL(::java::lang::System::gc());
      Py_RETURN_NONE;
    }

    static PyObject *t_System_getLogger(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::System$Logger result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::System::getLogger(a0));
            return ::java::lang::t_System$Logger::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::ResourceBundle a1((jobject) NULL);
          ::java::lang::System$Logger result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::util::ResourceBundle::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::System::getLogger(a0, a1));
            return ::java::lang::t_System$Logger::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getLogger", args);
      return NULL;
    }

    static PyObject *t_System_getProperties(PyTypeObject *type)
    {
      ::java::util::Properties result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::getProperties());
      return ::java::util::t_Properties::wrap_Object(result);
    }

    static PyObject *t_System_getProperty(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::System::getProperty(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::System::getProperty(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getProperty", args);
      return NULL;
    }

    static PyObject *t_System_getSecurityManager(PyTypeObject *type)
    {
      ::java::lang::SecurityManager result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::getSecurityManager());
      return ::java::lang::t_SecurityManager::wrap_Object(result);
    }

    static PyObject *t_System_getenv(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = ::java::lang::System::getenv());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(String));
        }
        break;
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::System::getenv(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getenv", args);
      return NULL;
    }

    static PyObject *t_System_identityHashCode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::lang::System::identityHashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "identityHashCode", arg);
      return NULL;
    }

    static PyObject *t_System_lineSeparator(PyTypeObject *type)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::lineSeparator());
      return j2p(result);
    }

    static PyObject *t_System_load(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(::java::lang::System::load(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "load", arg);
      return NULL;
    }

    static PyObject *t_System_loadLibrary(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(::java::lang::System::loadLibrary(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "loadLibrary", arg);
      return NULL;
    }

    static PyObject *t_System_mapLibraryName(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::System::mapLibraryName(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "mapLibraryName", arg);
      return NULL;
    }

    static PyObject *t_System_nanoTime(PyTypeObject *type)
    {
      jlong result;
      OBJ_CALL(result = ::java::lang::System::nanoTime());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_System_runFinalization(PyTypeObject *type)
    {
      OBJ_CALL(::java::lang::System::runFinalization());
      Py_RETURN_NONE;
    }

    static PyObject *t_System_setErr(PyTypeObject *type, PyObject *arg)
    {
      ::java::io::PrintStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setErr(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setErr", arg);
      return NULL;
    }

    static PyObject *t_System_setIn(PyTypeObject *type, PyObject *arg)
    {
      ::java::io::InputStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setIn(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setIn", arg);
      return NULL;
    }

    static PyObject *t_System_setOut(PyTypeObject *type, PyObject *arg)
    {
      ::java::io::PrintStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setOut(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setOut", arg);
      return NULL;
    }

    static PyObject *t_System_setProperties(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Properties a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::Properties::initializeClass, &a0, &p0, ::java::util::t_Properties::parameters_))
      {
        OBJ_CALL(::java::lang::System::setProperties(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setProperties", arg);
      return NULL;
    }

    static PyObject *t_System_setProperty(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::System::setProperty(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "setProperty", args);
      return NULL;
    }

    static PyObject *t_System_setSecurityManager(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::SecurityManager a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::lang::SecurityManager::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setSecurityManager(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setSecurityManager", arg);
      return NULL;
    }

    static PyObject *t_System_get__env(t_System *self, void *data)
    {
      ::java::util::Map value((jobject) NULL);
      OBJ_CALL(value = self->object.getenv());
      return ::java::util::t_Map::wrap_Object(value);
    }

    static int t_System_set__err(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::io::PrintStream value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &value))
        {
          INT_CALL(self->object.setErr(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "err", arg);
      return -1;
    }

    static int t_System_set__in(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::io::InputStream value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &value))
        {
          INT_CALL(self->object.setIn(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "in", arg);
      return -1;
    }

    static int t_System_set__out(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::io::PrintStream value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &value))
        {
          INT_CALL(self->object.setOut(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "out", arg);
      return -1;
    }

    static PyObject *t_System_get__properties(t_System *self, void *data)
    {
      ::java::util::Properties value((jobject) NULL);
      OBJ_CALL(value = self->object.getProperties());
      return ::java::util::t_Properties::wrap_Object(value);
    }
    static int t_System_set__properties(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Properties value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Properties::initializeClass, &value))
        {
          INT_CALL(self->object.setProperties(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "properties", arg);
      return -1;
    }

    static PyObject *t_System_get__securityManager(t_System *self, void *data)
    {
      ::java::lang::SecurityManager value((jobject) NULL);
      OBJ_CALL(value = self->object.getSecurityManager());
      return ::java::lang::t_SecurityManager::wrap_Object(value);
    }
    static int t_System_set__securityManager(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::SecurityManager value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::lang::SecurityManager::initializeClass, &value))
        {
          INT_CALL(self->object.setSecurityManager(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "securityManager", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory$FieldSmoothStepFunction::class$ = NULL;
        jmethodID *SmoothStepFactory$FieldSmoothStepFunction::mids$ = NULL;
        bool SmoothStepFactory$FieldSmoothStepFunction::live$ = false;

        jclass SmoothStepFactory$FieldSmoothStepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_616c74807d7607b4] = env->getMethodID(cls, "value", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_a4b1871f4d29e58b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_51d6e6eb816495b3] = env->getMethodID(cls, "value", "(DDLorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_checkInputEdges_8f2e782d5278b131] = env->getMethodID(cls, "checkInputEdges", "(DD)V");
            mids$[mid_clampInput_51d6e6eb816495b3] = env->getMethodID(cls, "clampInput", "(DDLorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_normalizeInput_51d6e6eb816495b3] = env->getMethodID(cls, "normalizeInput", "(DDLorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement SmoothStepFactory$FieldSmoothStepFunction::value(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_616c74807d7607b4], a0));
        }

        ::org::hipparchus::CalculusFieldElement SmoothStepFactory$FieldSmoothStepFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a4b1871f4d29e58b], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement SmoothStepFactory$FieldSmoothStepFunction::value(jdouble a0, jdouble a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_51d6e6eb816495b3], a0, a1, a2.this$));
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
      namespace polynomials {
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_of_(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_value(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_get__parameters_(t_SmoothStepFactory$FieldSmoothStepFunction *self, void *data);
        static PyGetSetDef t_SmoothStepFactory$FieldSmoothStepFunction__fields_[] = {
          DECLARE_GET_FIELD(t_SmoothStepFactory$FieldSmoothStepFunction, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmoothStepFactory$FieldSmoothStepFunction__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, of_, METH_VARARGS),
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory$FieldSmoothStepFunction)[] = {
          { Py_tp_methods, t_SmoothStepFactory$FieldSmoothStepFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SmoothStepFactory$FieldSmoothStepFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory$FieldSmoothStepFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::polynomials::FieldPolynomialFunction),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory$FieldSmoothStepFunction, t_SmoothStepFactory$FieldSmoothStepFunction, SmoothStepFactory$FieldSmoothStepFunction);
        PyObject *t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(const SmoothStepFactory$FieldSmoothStepFunction& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SmoothStepFactory$FieldSmoothStepFunction *self = (t_SmoothStepFactory$FieldSmoothStepFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SmoothStepFactory$FieldSmoothStepFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SmoothStepFactory$FieldSmoothStepFunction::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SmoothStepFactory$FieldSmoothStepFunction *self = (t_SmoothStepFactory$FieldSmoothStepFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SmoothStepFactory$FieldSmoothStepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), &PY_TYPE_DEF(SmoothStepFactory$FieldSmoothStepFunction), module, "SmoothStepFactory$FieldSmoothStepFunction", 0);
        }

        void t_SmoothStepFactory$FieldSmoothStepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), "class_", make_descriptor(SmoothStepFactory$FieldSmoothStepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), "wrapfn_", make_descriptor(t_SmoothStepFactory$FieldSmoothStepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory$FieldSmoothStepFunction::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(SmoothStepFactory$FieldSmoothStepFunction(((t_SmoothStepFactory$FieldSmoothStepFunction *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory$FieldSmoothStepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_of_(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_value(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "DDK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), (PyObject *) self, "value", args, 2);
        }
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_get__parameters_(t_SmoothStepFactory$FieldSmoothStepFunction *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *AbstractConstituentParser::class$ = NULL;
            jmethodID *AbstractConstituentParser::mids$ = NULL;
            bool AbstractConstituentParser::live$ = false;

            jclass AbstractConstituentParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_finalizeData_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getConventions_60f9ded87ab7ca4c] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
                mids$[mid_getDataContext_0b7cf48ee6a922ee] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
                mids$[mid_getHeader_0e1b4a5061fb71d6] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
                mids$[mid_getParsedUnitsBehavior_8df14555f7513c0c] = env->getMethodID(cls, "getParsedUnitsBehavior", "()Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
                mids$[mid_inData_b108b35ef48e27bd] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_b108b35ef48e27bd] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_isSimpleEOP_b108b35ef48e27bd] = env->getMethodID(cls, "isSimpleEOP", "()Z");
                mids$[mid_prepareData_b108b35ef48e27bd] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_b108b35ef48e27bd] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "prepareMetadata", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AbstractConstituentParser::finalizeData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeData_b108b35ef48e27bd]);
            }

            jboolean AbstractConstituentParser::finalizeHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_b108b35ef48e27bd]);
            }

            jboolean AbstractConstituentParser::finalizeMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_b108b35ef48e27bd]);
            }

            ::org::orekit::utils::IERSConventions AbstractConstituentParser::getConventions() const
            {
              return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_60f9ded87ab7ca4c]));
            }

            ::org::orekit::data::DataContext AbstractConstituentParser::getDataContext() const
            {
              return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_0b7cf48ee6a922ee]));
            }

            ::org::orekit::files::ccsds::section::Header AbstractConstituentParser::getHeader() const
            {
              return ::org::orekit::files::ccsds::section::Header(env->callObjectMethod(this$, mids$[mid_getHeader_0e1b4a5061fb71d6]));
            }

            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior AbstractConstituentParser::getParsedUnitsBehavior() const
            {
              return ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior(env->callObjectMethod(this$, mids$[mid_getParsedUnitsBehavior_8df14555f7513c0c]));
            }

            jboolean AbstractConstituentParser::inData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inData_b108b35ef48e27bd]);
            }

            jboolean AbstractConstituentParser::inHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inHeader_b108b35ef48e27bd]);
            }

            jboolean AbstractConstituentParser::inMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inMetadata_b108b35ef48e27bd]);
            }

            jboolean AbstractConstituentParser::isSimpleEOP() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isSimpleEOP_b108b35ef48e27bd]);
            }

            jboolean AbstractConstituentParser::prepareData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareData_b108b35ef48e27bd]);
            }

            jboolean AbstractConstituentParser::prepareHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareHeader_b108b35ef48e27bd]);
            }

            jboolean AbstractConstituentParser::prepareMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_b108b35ef48e27bd]);
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
          namespace parsing {
            static PyObject *t_AbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConstituentParser_of_(t_AbstractConstituentParser *self, PyObject *args);
            static PyObject *t_AbstractConstituentParser_finalizeData(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_finalizeHeader(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_finalizeMetadata(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_getConventions(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_getDataContext(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_getHeader(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_getParsedUnitsBehavior(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_inData(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_inHeader(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_inMetadata(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_isSimpleEOP(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_prepareData(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_prepareHeader(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_prepareMetadata(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_get__conventions(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__dataContext(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__header(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__parsedUnitsBehavior(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__simpleEOP(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__parameters_(t_AbstractConstituentParser *self, void *data);
            static PyGetSetDef t_AbstractConstituentParser__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractConstituentParser, conventions),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, dataContext),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, header),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, parsedUnitsBehavior),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, simpleEOP),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractConstituentParser__methods_[] = {
              DECLARE_METHOD(t_AbstractConstituentParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConstituentParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConstituentParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, finalizeData, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, finalizeHeader, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, finalizeMetadata, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, getConventions, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, getDataContext, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, getHeader, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, getParsedUnitsBehavior, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, inData, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, inHeader, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, inMetadata, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, isSimpleEOP, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, prepareData, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, prepareHeader, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, prepareMetadata, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractConstituentParser)[] = {
              { Py_tp_methods, t_AbstractConstituentParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractConstituentParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractConstituentParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser),
              NULL
            };

            DEFINE_TYPE(AbstractConstituentParser, t_AbstractConstituentParser, AbstractConstituentParser);
            PyObject *t_AbstractConstituentParser::wrap_Object(const AbstractConstituentParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_AbstractConstituentParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractConstituentParser *self = (t_AbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_AbstractConstituentParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_AbstractConstituentParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractConstituentParser *self = (t_AbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_AbstractConstituentParser::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractConstituentParser), &PY_TYPE_DEF(AbstractConstituentParser), module, "AbstractConstituentParser", 0);
            }

            void t_AbstractConstituentParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstituentParser), "class_", make_descriptor(AbstractConstituentParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstituentParser), "wrapfn_", make_descriptor(t_AbstractConstituentParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstituentParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractConstituentParser::initializeClass, 1)))
                return NULL;
              return t_AbstractConstituentParser::wrap_Object(AbstractConstituentParser(((t_AbstractConstituentParser *) arg)->object.this$));
            }
            static PyObject *t_AbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractConstituentParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractConstituentParser_of_(t_AbstractConstituentParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractConstituentParser_finalizeData(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.finalizeData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_finalizeHeader(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.finalizeHeader());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_finalizeMetadata(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.finalizeMetadata());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_getConventions(t_AbstractConstituentParser *self)
            {
              ::org::orekit::utils::IERSConventions result((jobject) NULL);
              OBJ_CALL(result = self->object.getConventions());
              return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
            }

            static PyObject *t_AbstractConstituentParser_getDataContext(t_AbstractConstituentParser *self)
            {
              ::org::orekit::data::DataContext result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataContext());
              return ::org::orekit::data::t_DataContext::wrap_Object(result);
            }

            static PyObject *t_AbstractConstituentParser_getHeader(t_AbstractConstituentParser *self)
            {
              ::org::orekit::files::ccsds::section::Header result((jobject) NULL);
              OBJ_CALL(result = self->object.getHeader());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Header::wrap_Object(result);
            }

            static PyObject *t_AbstractConstituentParser_getParsedUnitsBehavior(t_AbstractConstituentParser *self)
            {
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior result((jobject) NULL);
              OBJ_CALL(result = self->object.getParsedUnitsBehavior());
              return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(result);
            }

            static PyObject *t_AbstractConstituentParser_inData(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.inData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_inHeader(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.inHeader());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_inMetadata(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.inMetadata());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_isSimpleEOP(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isSimpleEOP());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_prepareData(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.prepareData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_prepareHeader(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.prepareHeader());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_prepareMetadata(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.prepareMetadata());
              Py_RETURN_BOOL(result);
            }
            static PyObject *t_AbstractConstituentParser_get__parameters_(t_AbstractConstituentParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractConstituentParser_get__conventions(t_AbstractConstituentParser *self, void *data)
            {
              ::org::orekit::utils::IERSConventions value((jobject) NULL);
              OBJ_CALL(value = self->object.getConventions());
              return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
            }

            static PyObject *t_AbstractConstituentParser_get__dataContext(t_AbstractConstituentParser *self, void *data)
            {
              ::org::orekit::data::DataContext value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataContext());
              return ::org::orekit::data::t_DataContext::wrap_Object(value);
            }

            static PyObject *t_AbstractConstituentParser_get__header(t_AbstractConstituentParser *self, void *data)
            {
              ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::files::ccsds::section::t_Header::wrap_Object(value);
            }

            static PyObject *t_AbstractConstituentParser_get__parsedUnitsBehavior(t_AbstractConstituentParser *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior value((jobject) NULL);
              OBJ_CALL(value = self->object.getParsedUnitsBehavior());
              return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(value);
            }

            static PyObject *t_AbstractConstituentParser_get__simpleEOP(t_AbstractConstituentParser *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isSimpleEOP());
              Py_RETURN_BOOL(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$Split.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *ArcsSet$Split::class$ = NULL;
          jmethodID *ArcsSet$Split::mids$ = NULL;
          bool ArcsSet$Split::live$ = false;

          jclass ArcsSet$Split::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/ArcsSet$Split");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMinus_9a4d6a36c117a959] = env->getMethodID(cls, "getMinus", "()Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");
              mids$[mid_getPlus_9a4d6a36c117a959] = env->getMethodID(cls, "getPlus", "()Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");
              mids$[mid_getSide_f8858a4ff9f9675f] = env->getMethodID(cls, "getSide", "()Lorg/hipparchus/geometry/partitioning/Side;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet ArcsSet$Split::getMinus() const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet(env->callObjectMethod(this$, mids$[mid_getMinus_9a4d6a36c117a959]));
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet ArcsSet$Split::getPlus() const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet(env->callObjectMethod(this$, mids$[mid_getPlus_9a4d6a36c117a959]));
          }

          ::org::hipparchus::geometry::partitioning::Side ArcsSet$Split::getSide() const
          {
            return ::org::hipparchus::geometry::partitioning::Side(env->callObjectMethod(this$, mids$[mid_getSide_f8858a4ff9f9675f]));
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
      namespace spherical {
        namespace oned {
          static PyObject *t_ArcsSet$Split_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$Split_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$Split_of_(t_ArcsSet$Split *self, PyObject *args);
          static PyObject *t_ArcsSet$Split_getMinus(t_ArcsSet$Split *self);
          static PyObject *t_ArcsSet$Split_getPlus(t_ArcsSet$Split *self);
          static PyObject *t_ArcsSet$Split_getSide(t_ArcsSet$Split *self);
          static PyObject *t_ArcsSet$Split_get__minus(t_ArcsSet$Split *self, void *data);
          static PyObject *t_ArcsSet$Split_get__plus(t_ArcsSet$Split *self, void *data);
          static PyObject *t_ArcsSet$Split_get__side(t_ArcsSet$Split *self, void *data);
          static PyObject *t_ArcsSet$Split_get__parameters_(t_ArcsSet$Split *self, void *data);
          static PyGetSetDef t_ArcsSet$Split__fields_[] = {
            DECLARE_GET_FIELD(t_ArcsSet$Split, minus),
            DECLARE_GET_FIELD(t_ArcsSet$Split, plus),
            DECLARE_GET_FIELD(t_ArcsSet$Split, side),
            DECLARE_GET_FIELD(t_ArcsSet$Split, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ArcsSet$Split__methods_[] = {
            DECLARE_METHOD(t_ArcsSet$Split, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$Split, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$Split, of_, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet$Split, getMinus, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet$Split, getPlus, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet$Split, getSide, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ArcsSet$Split)[] = {
            { Py_tp_methods, t_ArcsSet$Split__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ArcsSet$Split__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ArcsSet$Split)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ArcsSet$Split, t_ArcsSet$Split, ArcsSet$Split);
          PyObject *t_ArcsSet$Split::wrap_Object(const ArcsSet$Split& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$Split::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$Split *self = (t_ArcsSet$Split *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_ArcsSet$Split::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$Split::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$Split *self = (t_ArcsSet$Split *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_ArcsSet$Split::install(PyObject *module)
          {
            installType(&PY_TYPE(ArcsSet$Split), &PY_TYPE_DEF(ArcsSet$Split), module, "ArcsSet$Split", 0);
          }

          void t_ArcsSet$Split::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$Split), "class_", make_descriptor(ArcsSet$Split::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$Split), "wrapfn_", make_descriptor(t_ArcsSet$Split::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$Split), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ArcsSet$Split_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ArcsSet$Split::initializeClass, 1)))
              return NULL;
            return t_ArcsSet$Split::wrap_Object(ArcsSet$Split(((t_ArcsSet$Split *) arg)->object.this$));
          }
          static PyObject *t_ArcsSet$Split_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ArcsSet$Split::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ArcsSet$Split_of_(t_ArcsSet$Split *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_ArcsSet$Split_getMinus(t_ArcsSet$Split *self)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(result);
          }

          static PyObject *t_ArcsSet$Split_getPlus(t_ArcsSet$Split *self)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getPlus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(result);
          }

          static PyObject *t_ArcsSet$Split_getSide(t_ArcsSet$Split *self)
          {
            ::org::hipparchus::geometry::partitioning::Side result((jobject) NULL);
            OBJ_CALL(result = self->object.getSide());
            return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(result);
          }
          static PyObject *t_ArcsSet$Split_get__parameters_(t_ArcsSet$Split *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_ArcsSet$Split_get__minus(t_ArcsSet$Split *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getMinus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(value);
          }

          static PyObject *t_ArcsSet$Split_get__plus(t_ArcsSet$Split *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getPlus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(value);
          }

          static PyObject *t_ArcsSet$Split_get__side(t_ArcsSet$Split *self, void *data)
          {
            ::org::hipparchus::geometry::partitioning::Side value((jobject) NULL);
            OBJ_CALL(value = self->object.getSide());
            return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/NewcombOperators.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *NewcombOperators::class$ = NULL;
            jmethodID *NewcombOperators::mids$ = NULL;
            bool NewcombOperators::live$ = false;

            jclass NewcombOperators::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/NewcombOperators");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getValue_394b82fc957be26d] = env->getStaticMethodID(cls, "getValue", "(IIII)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble NewcombOperators::getValue(jint a0, jint a1, jint a2, jint a3)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getValue_394b82fc957be26d], a0, a1, a2, a3);
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
            static PyObject *t_NewcombOperators_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NewcombOperators_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NewcombOperators_getValue(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_NewcombOperators__methods_[] = {
              DECLARE_METHOD(t_NewcombOperators, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NewcombOperators, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NewcombOperators, getValue, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NewcombOperators)[] = {
              { Py_tp_methods, t_NewcombOperators__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NewcombOperators)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(NewcombOperators, t_NewcombOperators, NewcombOperators);

            void t_NewcombOperators::install(PyObject *module)
            {
              installType(&PY_TYPE(NewcombOperators), &PY_TYPE_DEF(NewcombOperators), module, "NewcombOperators", 0);
            }

            void t_NewcombOperators::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NewcombOperators), "class_", make_descriptor(NewcombOperators::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NewcombOperators), "wrapfn_", make_descriptor(t_NewcombOperators::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NewcombOperators), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NewcombOperators_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NewcombOperators::initializeClass, 1)))
                return NULL;
              return t_NewcombOperators::wrap_Object(NewcombOperators(((t_NewcombOperators *) arg)->object.this$));
            }
            static PyObject *t_NewcombOperators_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NewcombOperators::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NewcombOperators_getValue(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jint a3;
              jdouble result;

              if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::NewcombOperators::getValue(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError(type, "getValue", args);
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
#include "org/orekit/propagation/analytical/gnss/data/LegacyNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *LegacyNavigationMessage::class$ = NULL;
            jmethodID *LegacyNavigationMessage::mids$ = NULL;
            bool LegacyNavigationMessage::live$ = false;
            ::java::lang::String *LegacyNavigationMessage::LNAV = NULL;

            jclass LegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/LegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getFitInterval_570ce0828f81a2c1] = env->getMethodID(cls, "getFitInterval", "()I");
                mids$[mid_getIODC_570ce0828f81a2c1] = env->getMethodID(cls, "getIODC", "()I");
                mids$[mid_getIODE_570ce0828f81a2c1] = env->getMethodID(cls, "getIODE", "()I");
                mids$[mid_getSvAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getSvAccuracy", "()D");
                mids$[mid_getSvHealth_570ce0828f81a2c1] = env->getMethodID(cls, "getSvHealth", "()I");
                mids$[mid_getTGD_dff5885c2c873297] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_setFitInterval_99803b0791f320ff] = env->getMethodID(cls, "setFitInterval", "(I)V");
                mids$[mid_setIODC_99803b0791f320ff] = env->getMethodID(cls, "setIODC", "(I)V");
                mids$[mid_setIODE_17db3a65980d3441] = env->getMethodID(cls, "setIODE", "(D)V");
                mids$[mid_setSvAccuracy_17db3a65980d3441] = env->getMethodID(cls, "setSvAccuracy", "(D)V");
                mids$[mid_setSvHealth_99803b0791f320ff] = env->getMethodID(cls, "setSvHealth", "(I)V");
                mids$[mid_setTGD_17db3a65980d3441] = env->getMethodID(cls, "setTGD", "(D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                LNAV = new ::java::lang::String(env->getStaticObjectField(cls, "LNAV", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint LegacyNavigationMessage::getFitInterval() const
            {
              return env->callIntMethod(this$, mids$[mid_getFitInterval_570ce0828f81a2c1]);
            }

            jint LegacyNavigationMessage::getIODC() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODC_570ce0828f81a2c1]);
            }

            jint LegacyNavigationMessage::getIODE() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODE_570ce0828f81a2c1]);
            }

            jdouble LegacyNavigationMessage::getSvAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvAccuracy_dff5885c2c873297]);
            }

            jint LegacyNavigationMessage::getSvHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getSvHealth_570ce0828f81a2c1]);
            }

            jdouble LegacyNavigationMessage::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_dff5885c2c873297]);
            }

            void LegacyNavigationMessage::setFitInterval(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFitInterval_99803b0791f320ff], a0);
            }

            void LegacyNavigationMessage::setIODC(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODC_99803b0791f320ff], a0);
            }

            void LegacyNavigationMessage::setIODE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODE_17db3a65980d3441], a0);
            }

            void LegacyNavigationMessage::setSvAccuracy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvAccuracy_17db3a65980d3441], a0);
            }

            void LegacyNavigationMessage::setSvHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_99803b0791f320ff], a0);
            }

            void LegacyNavigationMessage::setTGD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD_17db3a65980d3441], a0);
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_LegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_getFitInterval(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getIODC(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getIODE(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getSvAccuracy(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getSvHealth(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getTGD(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_setFitInterval(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setIODC(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setIODE(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setSvAccuracy(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setSvHealth(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setTGD(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_get__fitInterval(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__fitInterval(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__iODC(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__iODC(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__iODE(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__iODE(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__svAccuracy(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__svAccuracy(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__svHealth(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__svHealth(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__tGD(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__tGD(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_LegacyNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, fitInterval),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, iODC),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, iODE),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, svAccuracy),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, svHealth),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, tGD),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_LegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getFitInterval, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getIODC, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getIODE, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getSvAccuracy, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, setFitInterval, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setIODC, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setIODE, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setSvAccuracy, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setSvHealth, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setTGD, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LegacyNavigationMessage)[] = {
              { Py_tp_methods, t_LegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LegacyNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(LegacyNavigationMessage, t_LegacyNavigationMessage, LegacyNavigationMessage);

            void t_LegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(LegacyNavigationMessage), &PY_TYPE_DEF(LegacyNavigationMessage), module, "LegacyNavigationMessage", 0);
            }

            void t_LegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "class_", make_descriptor(LegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "wrapfn_", make_descriptor(t_LegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(LegacyNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "LNAV", make_descriptor(j2p(*LegacyNavigationMessage::LNAV)));
            }

            static PyObject *t_LegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_LegacyNavigationMessage::wrap_Object(LegacyNavigationMessage(((t_LegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_LegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LegacyNavigationMessage_getFitInterval(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFitInterval());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getIODC(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getIODE(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODE());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getSvAccuracy(t_LegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LegacyNavigationMessage_getSvHealth(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getTGD(t_LegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LegacyNavigationMessage_setFitInterval(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setFitInterval(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFitInterval", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setIODC(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODC", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setIODE(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIODE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODE", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setSvAccuracy(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSvAccuracy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvAccuracy", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setSvHealth(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSvHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setTGD(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_get__fitInterval(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFitInterval());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__fitInterval(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setFitInterval(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "fitInterval", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__iODC(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODC());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__iODC(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODC", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__iODE(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODE());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__iODE(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIODE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODE", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__svAccuracy(t_LegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_LegacyNavigationMessage_set__svAccuracy(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSvAccuracy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svAccuracy", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__svHealth(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__svHealth(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSvHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__tGD(t_LegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_LegacyNavigationMessage_set__tGD(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD", arg);
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
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitStepHandler::class$ = NULL;
        jmethodID *FieldOrekitStepHandler::mids$ = NULL;
        bool FieldOrekitStepHandler::live$ = false;

        jclass FieldOrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_1463d3d0d52f94dd] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_edb529c141e8d4a9] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldOrekitStepHandler::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_1463d3d0d52f94dd], a0.this$);
        }

        void FieldOrekitStepHandler::handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_edb529c141e8d4a9], a0.this$);
        }

        void FieldOrekitStepHandler::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
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
        static PyObject *t_FieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepHandler_of_(t_FieldOrekitStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitStepHandler_finish(t_FieldOrekitStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepHandler_handleStep(t_FieldOrekitStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepHandler_init(t_FieldOrekitStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitStepHandler_get__parameters_(t_FieldOrekitStepHandler *self, void *data);
        static PyGetSetDef t_FieldOrekitStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepHandler, finish, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitStepHandler)[] = {
          { Py_tp_methods, t_FieldOrekitStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOrekitStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOrekitStepHandler, t_FieldOrekitStepHandler, FieldOrekitStepHandler);
        PyObject *t_FieldOrekitStepHandler::wrap_Object(const FieldOrekitStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepHandler *self = (t_FieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepHandler *self = (t_FieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitStepHandler), &PY_TYPE_DEF(FieldOrekitStepHandler), module, "FieldOrekitStepHandler", 0);
        }

        void t_FieldOrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepHandler), "class_", make_descriptor(FieldOrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepHandler), "wrapfn_", make_descriptor(t_FieldOrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitStepHandler::wrap_Object(FieldOrekitStepHandler(((t_FieldOrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitStepHandler_of_(t_FieldOrekitStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldOrekitStepHandler_finish(t_FieldOrekitStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepHandler_handleStep(t_FieldOrekitStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepHandler_init(t_FieldOrekitStepHandler *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldOrekitStepHandler_get__parameters_(t_FieldOrekitStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/SatelliteClockScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *SatelliteClockScale::class$ = NULL;
      jmethodID *SatelliteClockScale::mids$ = NULL;
      bool SatelliteClockScale::live$ = false;

      jclass SatelliteClockScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/SatelliteClockScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ae7ac509037aa9d2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;DD)V");
          mids$[mid_countAtDate_bf1d7732f1acb697] = env->getMethodID(cls, "countAtDate", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_dateAtCount_149a9211a037d799] = env->getMethodID(cls, "dateAtCount", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_56358b00ba005b52] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SatelliteClockScale::SatelliteClockScale(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::TimeScale & a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ae7ac509037aa9d2, a0.this$, a1.this$, a2.this$, a3, a4)) {}

      jdouble SatelliteClockScale::countAtDate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_countAtDate_bf1d7732f1acb697], a0.this$);
      }

      ::org::orekit::time::AbsoluteDate SatelliteClockScale::dateAtCount(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_dateAtCount_149a9211a037d799], a0));
      }

      ::java::lang::String SatelliteClockScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jdouble SatelliteClockScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement SatelliteClockScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_2a5f05be83ff251d], a0.this$));
      }

      jdouble SatelliteClockScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_56358b00ba005b52], a0.this$, a1.this$);
      }

      ::java::lang::String SatelliteClockScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_SatelliteClockScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteClockScale_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SatelliteClockScale_init_(t_SatelliteClockScale *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SatelliteClockScale_countAtDate(t_SatelliteClockScale *self, PyObject *arg);
      static PyObject *t_SatelliteClockScale_dateAtCount(t_SatelliteClockScale *self, PyObject *arg);
      static PyObject *t_SatelliteClockScale_getName(t_SatelliteClockScale *self);
      static PyObject *t_SatelliteClockScale_offsetFromTAI(t_SatelliteClockScale *self, PyObject *args);
      static PyObject *t_SatelliteClockScale_offsetToTAI(t_SatelliteClockScale *self, PyObject *args);
      static PyObject *t_SatelliteClockScale_toString(t_SatelliteClockScale *self, PyObject *args);
      static PyObject *t_SatelliteClockScale_get__name(t_SatelliteClockScale *self, void *data);
      static PyGetSetDef t_SatelliteClockScale__fields_[] = {
        DECLARE_GET_FIELD(t_SatelliteClockScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SatelliteClockScale__methods_[] = {
        DECLARE_METHOD(t_SatelliteClockScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteClockScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteClockScale, countAtDate, METH_O),
        DECLARE_METHOD(t_SatelliteClockScale, dateAtCount, METH_O),
        DECLARE_METHOD(t_SatelliteClockScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_SatelliteClockScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_SatelliteClockScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_SatelliteClockScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SatelliteClockScale)[] = {
        { Py_tp_methods, t_SatelliteClockScale__methods_ },
        { Py_tp_init, (void *) t_SatelliteClockScale_init_ },
        { Py_tp_getset, t_SatelliteClockScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SatelliteClockScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SatelliteClockScale, t_SatelliteClockScale, SatelliteClockScale);

      void t_SatelliteClockScale::install(PyObject *module)
      {
        installType(&PY_TYPE(SatelliteClockScale), &PY_TYPE_DEF(SatelliteClockScale), module, "SatelliteClockScale", 0);
      }

      void t_SatelliteClockScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteClockScale), "class_", make_descriptor(SatelliteClockScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteClockScale), "wrapfn_", make_descriptor(t_SatelliteClockScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteClockScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SatelliteClockScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SatelliteClockScale::initializeClass, 1)))
          return NULL;
        return t_SatelliteClockScale::wrap_Object(SatelliteClockScale(((t_SatelliteClockScale *) arg)->object.this$));
      }
      static PyObject *t_SatelliteClockScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SatelliteClockScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SatelliteClockScale_init_(t_SatelliteClockScale *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        jdouble a3;
        jdouble a4;
        SatelliteClockScale object((jobject) NULL);

        if (!parseArgs(args, "skkDD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = SatelliteClockScale(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SatelliteClockScale_countAtDate(t_SatelliteClockScale *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.countAtDate(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "countAtDate", arg);
        return NULL;
      }

      static PyObject *t_SatelliteClockScale_dateAtCount(t_SatelliteClockScale *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.dateAtCount(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dateAtCount", arg);
        return NULL;
      }

      static PyObject *t_SatelliteClockScale_getName(t_SatelliteClockScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_SatelliteClockScale_offsetFromTAI(t_SatelliteClockScale *self, PyObject *args)
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

      static PyObject *t_SatelliteClockScale_offsetToTAI(t_SatelliteClockScale *self, PyObject *args)
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

      static PyObject *t_SatelliteClockScale_toString(t_SatelliteClockScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(SatelliteClockScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_SatelliteClockScale_get__name(t_SatelliteClockScale *self, void *data)
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
#include "org/orekit/forces/FixedPanel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *FixedPanel::class$ = NULL;
      jmethodID *FixedPanel::mids$ = NULL;
      bool FixedPanel::live$ = false;

      jclass FixedPanel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/FixedPanel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_20df62fee79e6615] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DZDDDD)V");
          mids$[mid_getNormal_e6f00ace1decd27c] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_abc43395638fd218] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedPanel::FixedPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, jboolean a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::forces::Panel(env->newObject(initializeClass, &mids$, mid_init$_20df62fee79e6615, a0.this$, a1, a2, a3, a4, a5, a6)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FixedPanel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_e6f00ace1decd27c], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D FixedPanel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_abc43395638fd218], a0.this$));
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
      static PyObject *t_FixedPanel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedPanel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedPanel_init_(t_FixedPanel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedPanel_getNormal(t_FixedPanel *self, PyObject *args);

      static PyMethodDef t_FixedPanel__methods_[] = {
        DECLARE_METHOD(t_FixedPanel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedPanel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedPanel, getNormal, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedPanel)[] = {
        { Py_tp_methods, t_FixedPanel__methods_ },
        { Py_tp_init, (void *) t_FixedPanel_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedPanel)[] = {
        &PY_TYPE_DEF(::org::orekit::forces::Panel),
        NULL
      };

      DEFINE_TYPE(FixedPanel, t_FixedPanel, FixedPanel);

      void t_FixedPanel::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedPanel), &PY_TYPE_DEF(FixedPanel), module, "FixedPanel", 0);
      }

      void t_FixedPanel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPanel), "class_", make_descriptor(FixedPanel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPanel), "wrapfn_", make_descriptor(t_FixedPanel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPanel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedPanel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedPanel::initializeClass, 1)))
          return NULL;
        return t_FixedPanel::wrap_Object(FixedPanel(((t_FixedPanel *) arg)->object.this$));
      }
      static PyObject *t_FixedPanel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedPanel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedPanel_init_(t_FixedPanel *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        jdouble a1;
        jboolean a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        FixedPanel object((jobject) NULL);

        if (!parseArgs(args, "kDZDDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          INT_CALL(object = FixedPanel(a0, a1, a2, a3, a4, a5, a6));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedPanel_getNormal(t_FixedPanel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(FixedPanel), (PyObject *) self, "getNormal", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {

    ::java::lang::Class *CalculusFieldElement::class$ = NULL;
    jmethodID *CalculusFieldElement::mids$ = NULL;
    bool CalculusFieldElement::live$ = false;

    jclass CalculusFieldElement::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("org/hipparchus/CalculusFieldElement");

        mids$ = new jmethodID[max_mid];
        mids$[mid_abs_99097cb60cf2d774] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_acos_99097cb60cf2d774] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_acosh_99097cb60cf2d774] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_add_36daaf134d6833f6] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_asin_99097cb60cf2d774] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_asinh_99097cb60cf2d774] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_atan_99097cb60cf2d774] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_atan2_013225ac340b432a] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_atanh_99097cb60cf2d774] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_cbrt_99097cb60cf2d774] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_ceil_99097cb60cf2d774] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_copySign_36daaf134d6833f6] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_copySign_013225ac340b432a] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_cos_99097cb60cf2d774] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_cosh_99097cb60cf2d774] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_divide_36daaf134d6833f6] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_exp_99097cb60cf2d774] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_expm1_99097cb60cf2d774] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_floor_99097cb60cf2d774] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_getExponent_570ce0828f81a2c1] = env->getMethodID(cls, "getExponent", "()I");
        mids$[mid_getPi_99097cb60cf2d774] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_hypot_013225ac340b432a] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_isFinite_b108b35ef48e27bd] = env->getMethodID(cls, "isFinite", "()Z");
        mids$[mid_isInfinite_b108b35ef48e27bd] = env->getMethodID(cls, "isInfinite", "()Z");
        mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");
        mids$[mid_linearCombination_6c800c3bb1b4baf6] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_4a795dc0409d2025] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/FieldElement;[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_fcb38b77bda5f40d] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_f7bc8a2de40f6518] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_85b1c5ff41d1faac] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_43b8be02a91e7af5] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_f2df3da994c132b7] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_d7a4551094e12825] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_log_99097cb60cf2d774] = env->getMethodID(cls, "log", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_log10_99097cb60cf2d774] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_log1p_99097cb60cf2d774] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_multiply_36daaf134d6833f6] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_newInstance_36daaf134d6833f6] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_norm_dff5885c2c873297] = env->getMethodID(cls, "norm", "()D");
        mids$[mid_pow_36daaf134d6833f6] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_pow_ffcdb6600dc6671a] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_pow_013225ac340b432a] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_reciprocal_99097cb60cf2d774] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_remainder_36daaf134d6833f6] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_remainder_013225ac340b432a] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_rint_99097cb60cf2d774] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_rootN_ffcdb6600dc6671a] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_round_492808a339bfa35f] = env->getMethodID(cls, "round", "()J");
        mids$[mid_scalb_ffcdb6600dc6671a] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_sign_99097cb60cf2d774] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_sin_99097cb60cf2d774] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_sinCos_a447b7ca640e6b68] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
        mids$[mid_sinh_99097cb60cf2d774] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_sinhCosh_eef733c8a50b276f] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
        mids$[mid_sqrt_99097cb60cf2d774] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_subtract_36daaf134d6833f6] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_tan_99097cb60cf2d774] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_tanh_99097cb60cf2d774] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_toDegrees_99097cb60cf2d774] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_toRadians_99097cb60cf2d774] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_ulp_99097cb60cf2d774] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/FieldElement;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::abs() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_abs_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::acos() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_acos_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::acosh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_acosh_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::add(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_add_36daaf134d6833f6], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::asin() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_asin_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::asinh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_asinh_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::atan() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_atan_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::atan2(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_atan2_013225ac340b432a], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::atanh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_atanh_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::cbrt() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_cbrt_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::ceil() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_ceil_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::copySign(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_copySign_36daaf134d6833f6], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::copySign(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_copySign_013225ac340b432a], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::cos() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_cos_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::cosh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_cosh_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::divide(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_divide_36daaf134d6833f6], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::exp() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_exp_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::expm1() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_expm1_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::floor() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_floor_99097cb60cf2d774]));
    }

    jint CalculusFieldElement::getExponent() const
    {
      return env->callIntMethod(this$, mids$[mid_getExponent_570ce0828f81a2c1]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::getPi() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getPi_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::hypot(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_hypot_013225ac340b432a], a0.this$));
    }

    jboolean CalculusFieldElement::isFinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isFinite_b108b35ef48e27bd]);
    }

    jboolean CalculusFieldElement::isInfinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInfinite_b108b35ef48e27bd]);
    }

    jboolean CalculusFieldElement::isNaN() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_6c800c3bb1b4baf6], a0.this$, a1.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const JArray< ::org::hipparchus::FieldElement > & a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_4a795dc0409d2025], a0.this$, a1.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(jdouble a0, const ::org::hipparchus::FieldElement & a1, jdouble a2, const ::org::hipparchus::FieldElement & a3) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_fcb38b77bda5f40d], a0, a1.this$, a2, a3.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1, const ::org::hipparchus::FieldElement & a2, const ::org::hipparchus::FieldElement & a3) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_f7bc8a2de40f6518], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(jdouble a0, const ::org::hipparchus::FieldElement & a1, jdouble a2, const ::org::hipparchus::FieldElement & a3, jdouble a4, const ::org::hipparchus::FieldElement & a5) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_85b1c5ff41d1faac], a0, a1.this$, a2, a3.this$, a4, a5.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1, const ::org::hipparchus::FieldElement & a2, const ::org::hipparchus::FieldElement & a3, const ::org::hipparchus::FieldElement & a4, const ::org::hipparchus::FieldElement & a5) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_43b8be02a91e7af5], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(jdouble a0, const ::org::hipparchus::FieldElement & a1, jdouble a2, const ::org::hipparchus::FieldElement & a3, jdouble a4, const ::org::hipparchus::FieldElement & a5, jdouble a6, const ::org::hipparchus::FieldElement & a7) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_f2df3da994c132b7], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1, const ::org::hipparchus::FieldElement & a2, const ::org::hipparchus::FieldElement & a3, const ::org::hipparchus::FieldElement & a4, const ::org::hipparchus::FieldElement & a5, const ::org::hipparchus::FieldElement & a6, const ::org::hipparchus::FieldElement & a7) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_d7a4551094e12825], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::log() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_log_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::log10() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_log10_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::log1p() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_log1p_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::multiply(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_multiply_36daaf134d6833f6], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::newInstance(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_newInstance_36daaf134d6833f6], a0));
    }

    jdouble CalculusFieldElement::norm() const
    {
      return env->callDoubleMethod(this$, mids$[mid_norm_dff5885c2c873297]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::pow(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_pow_36daaf134d6833f6], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::pow(jint a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_pow_ffcdb6600dc6671a], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::pow(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_pow_013225ac340b432a], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::reciprocal() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_reciprocal_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::remainder(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_remainder_36daaf134d6833f6], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::remainder(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_remainder_013225ac340b432a], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::rint() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_rint_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::rootN(jint a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_rootN_ffcdb6600dc6671a], a0));
    }

    jlong CalculusFieldElement::round() const
    {
      return env->callLongMethod(this$, mids$[mid_round_492808a339bfa35f]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::scalb(jint a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_scalb_ffcdb6600dc6671a], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sign() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sign_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sin() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sin_99097cb60cf2d774]));
    }

    ::org::hipparchus::util::FieldSinCos CalculusFieldElement::sinCos() const
    {
      return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_a447b7ca640e6b68]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sinh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sinh_99097cb60cf2d774]));
    }

    ::org::hipparchus::util::FieldSinhCosh CalculusFieldElement::sinhCosh() const
    {
      return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_eef733c8a50b276f]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sqrt() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sqrt_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::subtract(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_subtract_36daaf134d6833f6], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::tan() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_tan_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::tanh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_tanh_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::toDegrees() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_toDegrees_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::toRadians() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_toRadians_99097cb60cf2d774]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::ulp() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_ulp_99097cb60cf2d774]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    static PyObject *t_CalculusFieldElement_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_CalculusFieldElement_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_CalculusFieldElement_of_(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_abs(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_acos(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_acosh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_add(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_asin(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_asinh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_atan(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_atan2(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_atanh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_cbrt(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_ceil(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_copySign(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_cos(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_cosh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_divide(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_exp(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_expm1(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_floor(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_getExponent(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_getPi(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_hypot(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_isFinite(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_isInfinite(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_isNaN(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_linearCombination(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_log(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_log10(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_log1p(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_multiply(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_newInstance(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_norm(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_pow(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_reciprocal(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_remainder(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_rint(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_rootN(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_round(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_scalb(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_sign(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sin(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sinCos(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sinh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sinhCosh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sqrt(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_subtract(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_tan(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_tanh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_toDegrees(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_toRadians(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_ulp(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_get__exponent(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__finite(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__infinite(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__naN(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__pi(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__parameters_(t_CalculusFieldElement *self, void *data);
    static PyGetSetDef t_CalculusFieldElement__fields_[] = {
      DECLARE_GET_FIELD(t_CalculusFieldElement, exponent),
      DECLARE_GET_FIELD(t_CalculusFieldElement, finite),
      DECLARE_GET_FIELD(t_CalculusFieldElement, infinite),
      DECLARE_GET_FIELD(t_CalculusFieldElement, naN),
      DECLARE_GET_FIELD(t_CalculusFieldElement, pi),
      DECLARE_GET_FIELD(t_CalculusFieldElement, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_CalculusFieldElement__methods_[] = {
      DECLARE_METHOD(t_CalculusFieldElement, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_CalculusFieldElement, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_CalculusFieldElement, of_, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, abs, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, acos, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, acosh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, add, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, asin, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, asinh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, atan, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, atan2, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, atanh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, cbrt, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, ceil, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, copySign, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, cos, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, cosh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, divide, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, exp, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, expm1, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, floor, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, getExponent, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, getPi, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, hypot, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, isFinite, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, isInfinite, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, isNaN, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, linearCombination, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, log, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, log10, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, log1p, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, multiply, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, newInstance, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, norm, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, pow, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, reciprocal, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, remainder, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, rint, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, rootN, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, round, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, scalb, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, sign, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sin, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sinCos, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sinh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sinhCosh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sqrt, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, subtract, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, tan, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, tanh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, toDegrees, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, toRadians, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, ulp, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(CalculusFieldElement)[] = {
      { Py_tp_methods, t_CalculusFieldElement__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_CalculusFieldElement__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(CalculusFieldElement)[] = {
      &PY_TYPE_DEF(::org::hipparchus::FieldElement),
      NULL
    };

    DEFINE_TYPE(CalculusFieldElement, t_CalculusFieldElement, CalculusFieldElement);
    PyObject *t_CalculusFieldElement::wrap_Object(const CalculusFieldElement& object, PyTypeObject *p0)
    {
      PyObject *obj = t_CalculusFieldElement::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_CalculusFieldElement *self = (t_CalculusFieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_CalculusFieldElement::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_CalculusFieldElement::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_CalculusFieldElement *self = (t_CalculusFieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_CalculusFieldElement::install(PyObject *module)
    {
      installType(&PY_TYPE(CalculusFieldElement), &PY_TYPE_DEF(CalculusFieldElement), module, "CalculusFieldElement", 0);
    }

    void t_CalculusFieldElement::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldElement), "class_", make_descriptor(CalculusFieldElement::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldElement), "wrapfn_", make_descriptor(t_CalculusFieldElement::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldElement), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_CalculusFieldElement_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, CalculusFieldElement::initializeClass, 1)))
        return NULL;
      return t_CalculusFieldElement::wrap_Object(CalculusFieldElement(((t_CalculusFieldElement *) arg)->object.this$));
    }
    static PyObject *t_CalculusFieldElement_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, CalculusFieldElement::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_CalculusFieldElement_of_(t_CalculusFieldElement *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_CalculusFieldElement_abs(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.abs());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_acos(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.acos());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_acosh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.acosh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_add(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_CalculusFieldElement_asin(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.asin());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_asinh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.asinh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_atan(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.atan());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_atan2(t_CalculusFieldElement *self, PyObject *arg)
    {
      ::org::hipparchus::FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.atan2(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "atan2", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_atanh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.atanh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_cbrt(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.cbrt());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_ceil(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.ceil());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_copySign(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.copySign(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.copySign(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "copySign", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_cos(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.cos());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_cosh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.cosh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_divide(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.divide(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "divide", args, 2);
    }

    static PyObject *t_CalculusFieldElement_exp(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.exp());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_expm1(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.expm1());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_floor(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.floor());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_getExponent(t_CalculusFieldElement *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getExponent());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_CalculusFieldElement_getPi(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.getPi());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_hypot(t_CalculusFieldElement *self, PyObject *arg)
    {
      ::org::hipparchus::FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.hypot(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "hypot", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_isFinite(t_CalculusFieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isFinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_CalculusFieldElement_isInfinite(t_CalculusFieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInfinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_CalculusFieldElement_isNaN(t_CalculusFieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNaN());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_CalculusFieldElement_linearCombination(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "[D[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "DKDK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "KKKK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        break;
       case 6:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          jdouble a4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "DKDKDK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "KKKKKK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        break;
       case 8:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          jdouble a4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          jdouble a6;
          ::org::hipparchus::FieldElement a7((jobject) NULL);
          PyTypeObject **p7;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "DKDKDKDK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_, &a6, &a7, &p7, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::hipparchus::FieldElement a6((jobject) NULL);
          PyTypeObject **p6;
          ::org::hipparchus::FieldElement a7((jobject) NULL);
          PyTypeObject **p7;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_FieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_log(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.log());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_log10(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.log10());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_log1p(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.log1p());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_multiply(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.multiply(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "multiply", args, 2);
    }

    static PyObject *t_CalculusFieldElement_newInstance(t_CalculusFieldElement *self, PyObject *arg)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = self->object.newInstance(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_norm(t_CalculusFieldElement *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.norm());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_CalculusFieldElement_pow(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.pow(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.pow(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.pow(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "pow", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_reciprocal(t_CalculusFieldElement *self, PyObject *args)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.reciprocal());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "reciprocal", args, 2);
    }

    static PyObject *t_CalculusFieldElement_remainder(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.remainder(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.remainder(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "remainder", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_rint(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.rint());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_rootN(t_CalculusFieldElement *self, PyObject *arg)
    {
      jint a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.rootN(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "rootN", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_round(t_CalculusFieldElement *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.round());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_CalculusFieldElement_scalb(t_CalculusFieldElement *self, PyObject *arg)
    {
      jint a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.scalb(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "scalb", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_sign(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sign());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_sin(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sin());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_sinCos(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
      OBJ_CALL(result = self->object.sinCos());
      return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_CalculusFieldElement_sinh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sinh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_sinhCosh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
      OBJ_CALL(result = self->object.sinhCosh());
      return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_CalculusFieldElement_sqrt(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sqrt());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_subtract(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.subtract(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "subtract", args, 2);
    }

    static PyObject *t_CalculusFieldElement_tan(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.tan());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_tanh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.tanh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_toDegrees(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.toDegrees());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_toRadians(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.toRadians());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_ulp(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.ulp());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }
    static PyObject *t_CalculusFieldElement_get__parameters_(t_CalculusFieldElement *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_CalculusFieldElement_get__exponent(t_CalculusFieldElement *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getExponent());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_CalculusFieldElement_get__finite(t_CalculusFieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isFinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_CalculusFieldElement_get__infinite(t_CalculusFieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInfinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_CalculusFieldElement_get__naN(t_CalculusFieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNaN());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_CalculusFieldElement_get__pi(t_CalculusFieldElement *self, void *data)
    {
      ::org::hipparchus::FieldElement value((jobject) NULL);
      OBJ_CALL(value = self->object.getPi());
      return ::org::hipparchus::t_FieldElement::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ManeuverKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ManeuverKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Maneuver.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ManeuverKey::class$ = NULL;
              jmethodID *ManeuverKey::mids$ = NULL;
              bool ManeuverKey::live$ = false;
              ManeuverKey *ManeuverKey::COMMENT = NULL;
              ManeuverKey *ManeuverKey::MAN_DELTA_MASS = NULL;
              ManeuverKey *ManeuverKey::MAN_DURATION = NULL;
              ManeuverKey *ManeuverKey::MAN_EPOCH_START = NULL;
              ManeuverKey *ManeuverKey::MAN_REF_FRAME = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_1 = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_2 = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_3 = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_X = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_Y = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_Z = NULL;

              jclass ManeuverKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ManeuverKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_3ee4734b1b4313c8] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/Maneuver;)Z");
                  mids$[mid_valueOf_51ad987b41424b4a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;");
                  mids$[mid_values_08691f21f25d0ed7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new ManeuverKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_DELTA_MASS = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DELTA_MASS", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_DURATION = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DURATION", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_EPOCH_START = new ManeuverKey(env->getStaticObjectField(cls, "MAN_EPOCH_START", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_REF_FRAME = new ManeuverKey(env->getStaticObjectField(cls, "MAN_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_1 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_1", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_2 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_2", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_3 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_3", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_X = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_X", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_Y = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_Y", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_Z = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_Z", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean ManeuverKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_3ee4734b1b4313c8], a0.this$, a1.this$, a2.this$);
              }

              ManeuverKey ManeuverKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManeuverKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_51ad987b41424b4a], a0.this$));
              }

              JArray< ManeuverKey > ManeuverKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManeuverKey >(env->callStaticObjectMethod(cls, mids$[mid_values_08691f21f25d0ed7]));
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
            namespace apm {
              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManeuverKey_values(PyTypeObject *type);
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data);
              static PyGetSetDef t_ManeuverKey__fields_[] = {
                DECLARE_GET_FIELD(t_ManeuverKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManeuverKey__methods_[] = {
                DECLARE_METHOD(t_ManeuverKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, process, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManeuverKey)[] = {
                { Py_tp_methods, t_ManeuverKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManeuverKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManeuverKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManeuverKey, t_ManeuverKey, ManeuverKey);
              PyObject *t_ManeuverKey::wrap_Object(const ManeuverKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManeuverKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManeuverKey::install(PyObject *module)
              {
                installType(&PY_TYPE(ManeuverKey), &PY_TYPE_DEF(ManeuverKey), module, "ManeuverKey", 0);
              }

              void t_ManeuverKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "class_", make_descriptor(ManeuverKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "wrapfn_", make_descriptor(t_ManeuverKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManeuverKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "COMMENT", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DELTA_MASS", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DELTA_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DURATION", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_EPOCH_START", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_EPOCH_START)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_REF_FRAME", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_1", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_2", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_3", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_X", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_Y", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_Z", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_Z)));
              }

              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManeuverKey::initializeClass, 1)))
                  return NULL;
                return t_ManeuverKey::wrap_Object(ManeuverKey(((t_ManeuverKey *) arg)->object.this$));
              }
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManeuverKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManeuverKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ManeuverKey::valueOf(a0));
                  return t_ManeuverKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManeuverKey_values(PyTypeObject *type)
              {
                JArray< ManeuverKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ManeuverKey::values());
                return JArray<jobject>(result.this$).wrap(t_ManeuverKey::wrap_jobject);
              }
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RangeRateIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeRateIonosphericDelayModifier::class$ = NULL;
          jmethodID *RangeRateIonosphericDelayModifier::mids$ = NULL;
          bool RangeRateIonosphericDelayModifier::live$ = false;

          jclass RangeRateIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeRateIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c6707a208a39c405] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;DZ)V");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_rangeRateErrorIonosphericModel_03cd5a2e88a0f0f6] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rangeRateErrorIonosphericModel_08d2a35aee39232b] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeRateIonosphericDelayModifier::RangeRateIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1, jboolean a2) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_c6707a208a39c405, a0.this$, a1, a2)) {}

          void RangeRateIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void RangeRateIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_RangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeRateIonosphericDelayModifier_init_(t_RangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeRateIonosphericDelayModifier_modify(t_RangeRateIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeRateIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_RangeRateIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeRateIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeRateIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeRateIonosphericDelayModifier, t_RangeRateIonosphericDelayModifier, RangeRateIonosphericDelayModifier);

          void t_RangeRateIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateIonosphericDelayModifier), &PY_TYPE_DEF(RangeRateIonosphericDelayModifier), module, "RangeRateIonosphericDelayModifier", 0);
          }

          void t_RangeRateIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateIonosphericDelayModifier), "class_", make_descriptor(RangeRateIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateIonosphericDelayModifier), "wrapfn_", make_descriptor(t_RangeRateIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeRateIonosphericDelayModifier::wrap_Object(RangeRateIonosphericDelayModifier(((t_RangeRateIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeRateIonosphericDelayModifier_init_(t_RangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            RangeRateIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = RangeRateIonosphericDelayModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeRateIonosphericDelayModifier_modify(t_RangeRateIonosphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_RangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeRateIonosphericDelayModifier *self, PyObject *arg)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/util/Locale.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *Localizable::class$ = NULL;
      jmethodID *Localizable::mids$ = NULL;
      bool Localizable::live$ = false;

      jclass Localizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/Localizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_3cd873bfb132c4fd] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_11b109bd155ca898] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String Localizable::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_3cd873bfb132c4fd], a0.this$));
      }

      ::java::lang::String Localizable::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_11b109bd155ca898]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_Localizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Localizable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Localizable_getLocalizedString(t_Localizable *self, PyObject *arg);
      static PyObject *t_Localizable_getSourceString(t_Localizable *self);
      static PyObject *t_Localizable_get__sourceString(t_Localizable *self, void *data);
      static PyGetSetDef t_Localizable__fields_[] = {
        DECLARE_GET_FIELD(t_Localizable, sourceString),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Localizable__methods_[] = {
        DECLARE_METHOD(t_Localizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Localizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Localizable, getLocalizedString, METH_O),
        DECLARE_METHOD(t_Localizable, getSourceString, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Localizable)[] = {
        { Py_tp_methods, t_Localizable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Localizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Localizable)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(Localizable, t_Localizable, Localizable);

      void t_Localizable::install(PyObject *module)
      {
        installType(&PY_TYPE(Localizable), &PY_TYPE_DEF(Localizable), module, "Localizable", 0);
      }

      void t_Localizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Localizable), "class_", make_descriptor(Localizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Localizable), "wrapfn_", make_descriptor(t_Localizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Localizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Localizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Localizable::initializeClass, 1)))
          return NULL;
        return t_Localizable::wrap_Object(Localizable(((t_Localizable *) arg)->object.this$));
      }
      static PyObject *t_Localizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Localizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Localizable_getLocalizedString(t_Localizable *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_Localizable_getSourceString(t_Localizable *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_Localizable_get__sourceString(t_Localizable *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonDataFilter.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataFilter::class$ = NULL;
      jmethodID *PythonDataFilter::mids$ = NULL;
      bool PythonDataFilter::live$ = false;

      jclass PythonDataFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_filter_716adf7a6da8b4d7] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataFilter::PythonDataFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonDataFilter::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonDataFilter::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonDataFilter::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonDataFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataFilter_init_(t_PythonDataFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataFilter_finalize(t_PythonDataFilter *self);
      static PyObject *t_PythonDataFilter_pythonExtension(t_PythonDataFilter *self, PyObject *args);
      static jobject JNICALL t_PythonDataFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonDataFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataFilter_get__self(t_PythonDataFilter *self, void *data);
      static PyGetSetDef t_PythonDataFilter__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataFilter, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataFilter__methods_[] = {
        DECLARE_METHOD(t_PythonDataFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataFilter, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataFilter, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataFilter)[] = {
        { Py_tp_methods, t_PythonDataFilter__methods_ },
        { Py_tp_init, (void *) t_PythonDataFilter_init_ },
        { Py_tp_getset, t_PythonDataFilter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataFilter, t_PythonDataFilter, PythonDataFilter);

      void t_PythonDataFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataFilter), &PY_TYPE_DEF(PythonDataFilter), module, "PythonDataFilter", 1);
      }

      void t_PythonDataFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataFilter), "class_", make_descriptor(PythonDataFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataFilter), "wrapfn_", make_descriptor(t_PythonDataFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataFilter), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataFilter::initializeClass);
        JNINativeMethod methods[] = {
          { "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;", (void *) t_PythonDataFilter_filter0 },
          { "pythonDecRef", "()V", (void *) t_PythonDataFilter_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonDataFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataFilter::initializeClass, 1)))
          return NULL;
        return t_PythonDataFilter::wrap_Object(PythonDataFilter(((t_PythonDataFilter *) arg)->object.this$));
      }
      static PyObject *t_PythonDataFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataFilter_init_(t_PythonDataFilter *self, PyObject *args, PyObject *kwds)
      {
        PythonDataFilter object((jobject) NULL);

        INT_CALL(object = PythonDataFilter());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataFilter_finalize(t_PythonDataFilter *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataFilter_pythonExtension(t_PythonDataFilter *self, PyObject *args)
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

      static jobject JNICALL t_PythonDataFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataFilter::mids$[PythonDataFilter::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::data::DataSource value((jobject) NULL);
        PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
        PyObject *result = PyObject_CallMethod(obj, "filter", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::data::DataSource::initializeClass, &value))
        {
          throwTypeError("filter", result);
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

      static void JNICALL t_PythonDataFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataFilter::mids$[PythonDataFilter::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataFilter::mids$[PythonDataFilter::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonDataFilter_get__self(t_PythonDataFilter *self, void *data)
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
#include "org/hipparchus/stat/fitting/EmpiricalDistribution.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/File.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "java/net/URL.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace fitting {

        ::java::lang::Class *EmpiricalDistribution::class$ = NULL;
        jmethodID *EmpiricalDistribution::mids$ = NULL;
        bool EmpiricalDistribution::live$ = false;
        jint EmpiricalDistribution::DEFAULT_BIN_COUNT = (jint) 0;

        jclass EmpiricalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/fitting/EmpiricalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_a351c1fd6920cdee] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_init$_2b71fcb2111892eb] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getBinCount_570ce0828f81a2c1] = env->getMethodID(cls, "getBinCount", "()I");
            mids$[mid_getBinStats_2afa36052df4765d] = env->getMethodID(cls, "getBinStats", "()Ljava/util/List;");
            mids$[mid_getGeneratorUpperBounds_60c7040667a7dc5c] = env->getMethodID(cls, "getGeneratorUpperBounds", "()[D");
            mids$[mid_getNextValue_dff5885c2c873297] = env->getMethodID(cls, "getNextValue", "()D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSampleStats_5a169194284d157f] = env->getMethodID(cls, "getSampleStats", "()Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_getUpperBounds_60c7040667a7dc5c] = env->getMethodID(cls, "getUpperBounds", "()[D");
            mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isLoaded_b108b35ef48e27bd] = env->getMethodID(cls, "isLoaded", "()Z");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_load_fa9d415d19f69361] = env->getMethodID(cls, "load", "([D)V");
            mids$[mid_load_0613af62f2ba5dba] = env->getMethodID(cls, "load", "(Ljava/io/File;)V");
            mids$[mid_load_fe56d648976a8dcb] = env->getMethodID(cls, "load", "(Ljava/net/URL;)V");
            mids$[mid_reSeed_3a8e7649f31fdb20] = env->getMethodID(cls, "reSeed", "(J)V");
            mids$[mid_reseedRandomGenerator_3a8e7649f31fdb20] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
            mids$[mid_getKernel_3100b8ccdc6b60fb] = env->getMethodID(cls, "getKernel", "(Lorg/hipparchus/stat/descriptive/StreamingStatistics;)Lorg/hipparchus/distribution/RealDistribution;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_BIN_COUNT = env->getStaticIntField(cls, "DEFAULT_BIN_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EmpiricalDistribution::EmpiricalDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        EmpiricalDistribution::EmpiricalDistribution(jint a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

        EmpiricalDistribution::EmpiricalDistribution(const ::org::hipparchus::random::RandomGenerator & a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_a351c1fd6920cdee, a0.this$)) {}

        EmpiricalDistribution::EmpiricalDistribution(jint a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_2b71fcb2111892eb, a0, a1.this$)) {}

        jdouble EmpiricalDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble EmpiricalDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jint EmpiricalDistribution::getBinCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getBinCount_570ce0828f81a2c1]);
        }

        ::java::util::List EmpiricalDistribution::getBinStats() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBinStats_2afa36052df4765d]));
        }

        JArray< jdouble > EmpiricalDistribution::getGeneratorUpperBounds() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGeneratorUpperBounds_60c7040667a7dc5c]));
        }

        jdouble EmpiricalDistribution::getNextValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNextValue_dff5885c2c873297]);
        }

        jdouble EmpiricalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble EmpiricalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        ::org::hipparchus::stat::descriptive::StatisticalSummary EmpiricalDistribution::getSampleStats() const
        {
          return ::org::hipparchus::stat::descriptive::StatisticalSummary(env->callObjectMethod(this$, mids$[mid_getSampleStats_5a169194284d157f]));
        }

        jdouble EmpiricalDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble EmpiricalDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        JArray< jdouble > EmpiricalDistribution::getUpperBounds() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUpperBounds_60c7040667a7dc5c]));
        }

        jdouble EmpiricalDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jboolean EmpiricalDistribution::isLoaded() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isLoaded_b108b35ef48e27bd]);
        }

        jboolean EmpiricalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        void EmpiricalDistribution::load(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_load_fa9d415d19f69361], a0.this$);
        }

        void EmpiricalDistribution::load(const ::java::io::File & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_load_0613af62f2ba5dba], a0.this$);
        }

        void EmpiricalDistribution::load(const ::java::net::URL & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_load_fe56d648976a8dcb], a0.this$);
        }

        void EmpiricalDistribution::reSeed(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reSeed_3a8e7649f31fdb20], a0);
        }

        void EmpiricalDistribution::reseedRandomGenerator(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_3a8e7649f31fdb20], a0);
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
      namespace fitting {
        static PyObject *t_EmpiricalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmpiricalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EmpiricalDistribution_init_(t_EmpiricalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EmpiricalDistribution_cumulativeProbability(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_density(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getBinCount(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getBinStats(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getGeneratorUpperBounds(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getNextValue(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getNumericalMean(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getNumericalVariance(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getSampleStats(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getSupportLowerBound(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getSupportUpperBound(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getUpperBounds(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_inverseCumulativeProbability(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_isLoaded(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_isSupportConnected(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_load(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_reSeed(t_EmpiricalDistribution *self, PyObject *arg);
        static PyObject *t_EmpiricalDistribution_reseedRandomGenerator(t_EmpiricalDistribution *self, PyObject *arg);
        static PyObject *t_EmpiricalDistribution_get__binCount(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__binStats(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__generatorUpperBounds(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__loaded(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__nextValue(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__numericalMean(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__numericalVariance(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__sampleStats(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__supportConnected(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__supportLowerBound(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__supportUpperBound(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__upperBounds(t_EmpiricalDistribution *self, void *data);
        static PyGetSetDef t_EmpiricalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_EmpiricalDistribution, binCount),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, binStats),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, generatorUpperBounds),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, loaded),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, nextValue),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, sampleStats),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, supportUpperBound),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, upperBounds),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EmpiricalDistribution__methods_[] = {
          DECLARE_METHOD(t_EmpiricalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmpiricalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmpiricalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getBinCount, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getBinStats, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getGeneratorUpperBounds, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getNextValue, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getSampleStats, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getUpperBounds, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, isLoaded, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, load, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, reSeed, METH_O),
          DECLARE_METHOD(t_EmpiricalDistribution, reseedRandomGenerator, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EmpiricalDistribution)[] = {
          { Py_tp_methods, t_EmpiricalDistribution__methods_ },
          { Py_tp_init, (void *) t_EmpiricalDistribution_init_ },
          { Py_tp_getset, t_EmpiricalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EmpiricalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(EmpiricalDistribution, t_EmpiricalDistribution, EmpiricalDistribution);

        void t_EmpiricalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(EmpiricalDistribution), &PY_TYPE_DEF(EmpiricalDistribution), module, "EmpiricalDistribution", 0);
        }

        void t_EmpiricalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmpiricalDistribution), "class_", make_descriptor(EmpiricalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmpiricalDistribution), "wrapfn_", make_descriptor(t_EmpiricalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmpiricalDistribution), "boxfn_", make_descriptor(boxObject));
          env->getClass(EmpiricalDistribution::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmpiricalDistribution), "DEFAULT_BIN_COUNT", make_descriptor(EmpiricalDistribution::DEFAULT_BIN_COUNT));
        }

        static PyObject *t_EmpiricalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EmpiricalDistribution::initializeClass, 1)))
            return NULL;
          return t_EmpiricalDistribution::wrap_Object(EmpiricalDistribution(((t_EmpiricalDistribution *) arg)->object.this$));
        }
        static PyObject *t_EmpiricalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EmpiricalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EmpiricalDistribution_init_(t_EmpiricalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              EmpiricalDistribution object((jobject) NULL);

              INT_CALL(object = EmpiricalDistribution());
              self->object = object;
              break;
            }
           case 1:
            {
              jint a0;
              EmpiricalDistribution object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = EmpiricalDistribution(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              EmpiricalDistribution object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
              {
                INT_CALL(object = EmpiricalDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jint a0;
              ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
              EmpiricalDistribution object((jobject) NULL);

              if (!parseArgs(args, "Ik", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
              {
                INT_CALL(object = EmpiricalDistribution(a0, a1));
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

        static PyObject *t_EmpiricalDistribution_cumulativeProbability(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_density(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getBinCount(t_EmpiricalDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getBinCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EmpiricalDistribution_getBinStats(t_EmpiricalDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getBinStats());
          return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::stat::descriptive::PY_TYPE(StreamingStatistics));
        }

        static PyObject *t_EmpiricalDistribution_getGeneratorUpperBounds(t_EmpiricalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGeneratorUpperBounds());
          return result.wrap();
        }

        static PyObject *t_EmpiricalDistribution_getNextValue(t_EmpiricalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNextValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmpiricalDistribution_getNumericalMean(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getNumericalVariance(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getSampleStats(t_EmpiricalDistribution *self)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary result((jobject) NULL);
          OBJ_CALL(result = self->object.getSampleStats());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(result);
        }

        static PyObject *t_EmpiricalDistribution_getSupportLowerBound(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getSupportUpperBound(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getUpperBounds(t_EmpiricalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getUpperBounds());
          return result.wrap();
        }

        static PyObject *t_EmpiricalDistribution_inverseCumulativeProbability(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_isLoaded(t_EmpiricalDistribution *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isLoaded());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_EmpiricalDistribution_isSupportConnected(t_EmpiricalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_load(t_EmpiricalDistribution *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(self->object.load(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::io::File a0((jobject) NULL);

              if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
              {
                OBJ_CALL(self->object.load(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::net::URL a0((jobject) NULL);

              if (!parseArgs(args, "k", ::java::net::URL::initializeClass, &a0))
              {
                OBJ_CALL(self->object.load(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "load", args);
          return NULL;
        }

        static PyObject *t_EmpiricalDistribution_reSeed(t_EmpiricalDistribution *self, PyObject *arg)
        {
          jlong a0;

          if (!parseArg(arg, "J", &a0))
          {
            OBJ_CALL(self->object.reSeed(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reSeed", arg);
          return NULL;
        }

        static PyObject *t_EmpiricalDistribution_reseedRandomGenerator(t_EmpiricalDistribution *self, PyObject *arg)
        {
          jlong a0;

          if (!parseArg(arg, "J", &a0))
          {
            OBJ_CALL(self->object.reseedRandomGenerator(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reseedRandomGenerator", arg);
          return NULL;
        }

        static PyObject *t_EmpiricalDistribution_get__binCount(t_EmpiricalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getBinCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EmpiricalDistribution_get__binStats(t_EmpiricalDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getBinStats());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EmpiricalDistribution_get__generatorUpperBounds(t_EmpiricalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeneratorUpperBounds());
          return value.wrap();
        }

        static PyObject *t_EmpiricalDistribution_get__loaded(t_EmpiricalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isLoaded());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EmpiricalDistribution_get__nextValue(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNextValue());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__numericalMean(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__numericalVariance(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__sampleStats(t_EmpiricalDistribution *self, void *data)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary value((jobject) NULL);
          OBJ_CALL(value = self->object.getSampleStats());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(value);
        }

        static PyObject *t_EmpiricalDistribution_get__supportConnected(t_EmpiricalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EmpiricalDistribution_get__supportLowerBound(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__supportUpperBound(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__upperBounds(t_EmpiricalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getUpperBounds());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/DataType.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "org/orekit/gnss/metric/parser/DataType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Long.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *DataType::class$ = NULL;
          jmethodID *DataType::mids$ = NULL;
          bool DataType::live$ = false;
          DataType *DataType::BIT_1 = NULL;
          DataType *DataType::BIT_10 = NULL;
          DataType *DataType::BIT_12 = NULL;
          DataType *DataType::BIT_2 = NULL;
          DataType *DataType::BIT_24 = NULL;
          DataType *DataType::BIT_3 = NULL;
          DataType *DataType::BIT_32 = NULL;
          DataType *DataType::BIT_4 = NULL;
          DataType *DataType::BIT_6 = NULL;
          DataType *DataType::BIT_7 = NULL;
          DataType *DataType::BIT_8 = NULL;
          DataType *DataType::INT_10 = NULL;
          DataType *DataType::INT_11 = NULL;
          DataType *DataType::INT_14 = NULL;
          DataType *DataType::INT_15 = NULL;
          DataType *DataType::INT_16 = NULL;
          DataType *DataType::INT_17 = NULL;
          DataType *DataType::INT_18 = NULL;
          DataType *DataType::INT_19 = NULL;
          DataType *DataType::INT_20 = NULL;
          DataType *DataType::INT_21 = NULL;
          DataType *DataType::INT_22 = NULL;
          DataType *DataType::INT_23 = NULL;
          DataType *DataType::INT_24 = NULL;
          DataType *DataType::INT_25 = NULL;
          DataType *DataType::INT_26 = NULL;
          DataType *DataType::INT_27 = NULL;
          DataType *DataType::INT_30 = NULL;
          DataType *DataType::INT_31 = NULL;
          DataType *DataType::INT_32 = NULL;
          DataType *DataType::INT_34 = NULL;
          DataType *DataType::INT_35 = NULL;
          DataType *DataType::INT_38 = NULL;
          DataType *DataType::INT_6 = NULL;
          DataType *DataType::INT_8 = NULL;
          DataType *DataType::INT_9 = NULL;
          DataType *DataType::INT_S_11 = NULL;
          DataType *DataType::INT_S_22 = NULL;
          DataType *DataType::INT_S_24 = NULL;
          DataType *DataType::INT_S_27 = NULL;
          DataType *DataType::INT_S_32 = NULL;
          DataType *DataType::INT_S_5 = NULL;
          DataType *DataType::U_INT_10 = NULL;
          DataType *DataType::U_INT_11 = NULL;
          DataType *DataType::U_INT_12 = NULL;
          DataType *DataType::U_INT_13 = NULL;
          DataType *DataType::U_INT_14 = NULL;
          DataType *DataType::U_INT_16 = NULL;
          DataType *DataType::U_INT_17 = NULL;
          DataType *DataType::U_INT_18 = NULL;
          DataType *DataType::U_INT_2 = NULL;
          DataType *DataType::U_INT_20 = NULL;
          DataType *DataType::U_INT_23 = NULL;
          DataType *DataType::U_INT_24 = NULL;
          DataType *DataType::U_INT_25 = NULL;
          DataType *DataType::U_INT_26 = NULL;
          DataType *DataType::U_INT_27 = NULL;
          DataType *DataType::U_INT_3 = NULL;
          DataType *DataType::U_INT_30 = NULL;
          DataType *DataType::U_INT_32 = NULL;
          DataType *DataType::U_INT_35 = NULL;
          DataType *DataType::U_INT_36 = NULL;
          DataType *DataType::U_INT_4 = NULL;
          DataType *DataType::U_INT_5 = NULL;
          DataType *DataType::U_INT_6 = NULL;
          DataType *DataType::U_INT_7 = NULL;
          DataType *DataType::U_INT_8 = NULL;
          DataType *DataType::U_INT_9 = NULL;

          jclass DataType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/DataType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_decode_a0e3d0deb9b63025] = env->getMethodID(cls, "decode", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/Long;");
              mids$[mid_valueOf_bd6c94f448e87329] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/DataType;");
              mids$[mid_values_3cbe58ba1d4b26a3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/DataType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BIT_1 = new DataType(env->getStaticObjectField(cls, "BIT_1", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_10 = new DataType(env->getStaticObjectField(cls, "BIT_10", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_12 = new DataType(env->getStaticObjectField(cls, "BIT_12", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_2 = new DataType(env->getStaticObjectField(cls, "BIT_2", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_24 = new DataType(env->getStaticObjectField(cls, "BIT_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_3 = new DataType(env->getStaticObjectField(cls, "BIT_3", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_32 = new DataType(env->getStaticObjectField(cls, "BIT_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_4 = new DataType(env->getStaticObjectField(cls, "BIT_4", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_6 = new DataType(env->getStaticObjectField(cls, "BIT_6", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_7 = new DataType(env->getStaticObjectField(cls, "BIT_7", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_8 = new DataType(env->getStaticObjectField(cls, "BIT_8", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_10 = new DataType(env->getStaticObjectField(cls, "INT_10", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_11 = new DataType(env->getStaticObjectField(cls, "INT_11", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_14 = new DataType(env->getStaticObjectField(cls, "INT_14", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_15 = new DataType(env->getStaticObjectField(cls, "INT_15", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_16 = new DataType(env->getStaticObjectField(cls, "INT_16", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_17 = new DataType(env->getStaticObjectField(cls, "INT_17", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_18 = new DataType(env->getStaticObjectField(cls, "INT_18", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_19 = new DataType(env->getStaticObjectField(cls, "INT_19", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_20 = new DataType(env->getStaticObjectField(cls, "INT_20", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_21 = new DataType(env->getStaticObjectField(cls, "INT_21", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_22 = new DataType(env->getStaticObjectField(cls, "INT_22", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_23 = new DataType(env->getStaticObjectField(cls, "INT_23", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_24 = new DataType(env->getStaticObjectField(cls, "INT_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_25 = new DataType(env->getStaticObjectField(cls, "INT_25", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_26 = new DataType(env->getStaticObjectField(cls, "INT_26", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_27 = new DataType(env->getStaticObjectField(cls, "INT_27", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_30 = new DataType(env->getStaticObjectField(cls, "INT_30", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_31 = new DataType(env->getStaticObjectField(cls, "INT_31", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_32 = new DataType(env->getStaticObjectField(cls, "INT_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_34 = new DataType(env->getStaticObjectField(cls, "INT_34", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_35 = new DataType(env->getStaticObjectField(cls, "INT_35", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_38 = new DataType(env->getStaticObjectField(cls, "INT_38", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_6 = new DataType(env->getStaticObjectField(cls, "INT_6", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_8 = new DataType(env->getStaticObjectField(cls, "INT_8", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_9 = new DataType(env->getStaticObjectField(cls, "INT_9", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_11 = new DataType(env->getStaticObjectField(cls, "INT_S_11", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_22 = new DataType(env->getStaticObjectField(cls, "INT_S_22", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_24 = new DataType(env->getStaticObjectField(cls, "INT_S_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_27 = new DataType(env->getStaticObjectField(cls, "INT_S_27", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_32 = new DataType(env->getStaticObjectField(cls, "INT_S_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_5 = new DataType(env->getStaticObjectField(cls, "INT_S_5", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_10 = new DataType(env->getStaticObjectField(cls, "U_INT_10", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_11 = new DataType(env->getStaticObjectField(cls, "U_INT_11", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_12 = new DataType(env->getStaticObjectField(cls, "U_INT_12", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_13 = new DataType(env->getStaticObjectField(cls, "U_INT_13", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_14 = new DataType(env->getStaticObjectField(cls, "U_INT_14", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_16 = new DataType(env->getStaticObjectField(cls, "U_INT_16", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_17 = new DataType(env->getStaticObjectField(cls, "U_INT_17", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_18 = new DataType(env->getStaticObjectField(cls, "U_INT_18", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_2 = new DataType(env->getStaticObjectField(cls, "U_INT_2", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_20 = new DataType(env->getStaticObjectField(cls, "U_INT_20", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_23 = new DataType(env->getStaticObjectField(cls, "U_INT_23", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_24 = new DataType(env->getStaticObjectField(cls, "U_INT_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_25 = new DataType(env->getStaticObjectField(cls, "U_INT_25", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_26 = new DataType(env->getStaticObjectField(cls, "U_INT_26", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_27 = new DataType(env->getStaticObjectField(cls, "U_INT_27", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_3 = new DataType(env->getStaticObjectField(cls, "U_INT_3", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_30 = new DataType(env->getStaticObjectField(cls, "U_INT_30", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_32 = new DataType(env->getStaticObjectField(cls, "U_INT_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_35 = new DataType(env->getStaticObjectField(cls, "U_INT_35", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_36 = new DataType(env->getStaticObjectField(cls, "U_INT_36", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_4 = new DataType(env->getStaticObjectField(cls, "U_INT_4", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_5 = new DataType(env->getStaticObjectField(cls, "U_INT_5", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_6 = new DataType(env->getStaticObjectField(cls, "U_INT_6", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_7 = new DataType(env->getStaticObjectField(cls, "U_INT_7", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_8 = new DataType(env->getStaticObjectField(cls, "U_INT_8", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_9 = new DataType(env->getStaticObjectField(cls, "U_INT_9", "Lorg/orekit/gnss/metric/parser/DataType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::Long DataType::decode(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return ::java::lang::Long(env->callObjectMethod(this$, mids$[mid_decode_a0e3d0deb9b63025], a0.this$));
          }

          DataType DataType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DataType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bd6c94f448e87329], a0.this$));
          }

          JArray< DataType > DataType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< DataType >(env->callStaticObjectMethod(cls, mids$[mid_values_3cbe58ba1d4b26a3]));
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
          static PyObject *t_DataType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataType_of_(t_DataType *self, PyObject *args);
          static PyObject *t_DataType_decode(t_DataType *self, PyObject *arg);
          static PyObject *t_DataType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_DataType_values(PyTypeObject *type);
          static PyObject *t_DataType_get__parameters_(t_DataType *self, void *data);
          static PyGetSetDef t_DataType__fields_[] = {
            DECLARE_GET_FIELD(t_DataType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DataType__methods_[] = {
            DECLARE_METHOD(t_DataType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataType, of_, METH_VARARGS),
            DECLARE_METHOD(t_DataType, decode, METH_O),
            DECLARE_METHOD(t_DataType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DataType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataType)[] = {
            { Py_tp_methods, t_DataType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DataType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(DataType, t_DataType, DataType);
          PyObject *t_DataType::wrap_Object(const DataType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataType *self = (t_DataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DataType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataType *self = (t_DataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DataType::install(PyObject *module)
          {
            installType(&PY_TYPE(DataType), &PY_TYPE_DEF(DataType), module, "DataType", 0);
          }

          void t_DataType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "class_", make_descriptor(DataType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "wrapfn_", make_descriptor(t_DataType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "boxfn_", make_descriptor(boxObject));
            env->getClass(DataType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_1", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_10", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_10)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_12", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_12)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_2", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_24", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_3", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_32", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_4", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_6", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_7", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_7)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_8", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_10", make_descriptor(t_DataType::wrap_Object(*DataType::INT_10)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_11", make_descriptor(t_DataType::wrap_Object(*DataType::INT_11)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_14", make_descriptor(t_DataType::wrap_Object(*DataType::INT_14)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_15", make_descriptor(t_DataType::wrap_Object(*DataType::INT_15)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_16", make_descriptor(t_DataType::wrap_Object(*DataType::INT_16)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_17", make_descriptor(t_DataType::wrap_Object(*DataType::INT_17)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_18", make_descriptor(t_DataType::wrap_Object(*DataType::INT_18)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_19", make_descriptor(t_DataType::wrap_Object(*DataType::INT_19)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_20", make_descriptor(t_DataType::wrap_Object(*DataType::INT_20)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_21", make_descriptor(t_DataType::wrap_Object(*DataType::INT_21)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_22", make_descriptor(t_DataType::wrap_Object(*DataType::INT_22)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_23", make_descriptor(t_DataType::wrap_Object(*DataType::INT_23)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_24", make_descriptor(t_DataType::wrap_Object(*DataType::INT_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_25", make_descriptor(t_DataType::wrap_Object(*DataType::INT_25)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_26", make_descriptor(t_DataType::wrap_Object(*DataType::INT_26)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_27", make_descriptor(t_DataType::wrap_Object(*DataType::INT_27)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_30", make_descriptor(t_DataType::wrap_Object(*DataType::INT_30)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_31", make_descriptor(t_DataType::wrap_Object(*DataType::INT_31)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_32", make_descriptor(t_DataType::wrap_Object(*DataType::INT_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_34", make_descriptor(t_DataType::wrap_Object(*DataType::INT_34)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_35", make_descriptor(t_DataType::wrap_Object(*DataType::INT_35)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_38", make_descriptor(t_DataType::wrap_Object(*DataType::INT_38)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_6", make_descriptor(t_DataType::wrap_Object(*DataType::INT_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_8", make_descriptor(t_DataType::wrap_Object(*DataType::INT_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_9", make_descriptor(t_DataType::wrap_Object(*DataType::INT_9)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_11", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_11)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_22", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_22)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_24", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_27", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_27)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_32", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_5", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_5)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_10", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_10)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_11", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_11)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_12", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_12)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_13", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_13)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_14", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_14)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_16", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_16)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_17", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_17)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_18", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_18)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_2", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_20", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_20)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_23", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_23)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_24", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_25", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_25)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_26", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_26)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_27", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_27)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_3", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_30", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_30)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_32", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_35", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_35)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_36", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_36)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_4", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_5", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_5)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_6", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_7", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_7)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_8", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_9", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_9)));
          }

          static PyObject *t_DataType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataType::initializeClass, 1)))
              return NULL;
            return t_DataType::wrap_Object(DataType(((t_DataType *) arg)->object.this$));
          }
          static PyObject *t_DataType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DataType_of_(t_DataType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_DataType_decode(t_DataType *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            ::java::lang::Long result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.decode(a0));
              return ::java::lang::t_Long::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "decode", arg);
            return NULL;
          }

          static PyObject *t_DataType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            DataType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::DataType::valueOf(a0));
              return t_DataType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_DataType_values(PyTypeObject *type)
          {
            JArray< DataType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::DataType::values());
            return JArray<jobject>(result.this$).wrap(t_DataType::wrap_jobject);
          }
          static PyObject *t_DataType_get__parameters_(t_DataType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
